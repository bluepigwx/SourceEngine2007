
#ifndef _MFnNurbsSurfaceData
#define _MFnNurbsSurfaceData
//
//-
// ==========================================================================
// Copyright (C) 1995 - 2005 Alias Systems Corp. and/or its licensors.  All 
// rights reserved.
// 
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Alias Systems Corp. ("Alias") and/or its 
// licensors, which is protected by Canadian and US federal copyright law and 
// by international treaties.
// 
// The Data may not be disclosed or distributed to third parties or be copied 
// or duplicated, in whole or in part, without the prior written consent of 
// Alias.
// 
// THE DATA IS PROVIDED "AS IS". ALIAS HEREBY DISCLAIMS ALL WARRANTIES RELATING 
// TO THE DATA, INCLUDING, WITHOUT LIMITATION, ANY AND ALL EXPRESS OR IMPLIED 
// WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND/OR FITNESS FOR A 
// PARTICULAR PURPOSE. IN NO EVENT SHALL ALIAS BE LIABLE FOR ANY DAMAGES 
// WHATSOEVER, WHETHER DIRECT, INDIRECT, SPECIAL, OR PUNITIVE, WHETHER IN AN 
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, OR IN EQUITY, 
// ARISING OUT OF ACCESS TO, USE OF, OR RELIANCE UPON THE DATA.
// ==========================================================================
//+
//
// CLASS:    MFnNurbsSurfaceData
//
// *****************************************************************************
//
// CLASS DESCRIPTION (MFnNurbsSurfaceData)
//
// MFnNurbsSurfaceData allows the creation and manipulation of NurbsSurface
// data objects for use in the dependency graph.
// 
// If a user written dependency node either accepts or produces Nurbs
// Surfaces, then this class is used to extract or create the data that
// comes from or goes to other dependency graph nodes. The
// MDataHandle::type method will return kNurbsSurface when data of this type
// is present.
//
// If a node is receiving a Nurbs Surface via an input attribute, the
// asNurbsSurface method of MDataHandle can be used to access that input Nurbs
// Surface.
//
// If a node is to create a Nurbs Surface and send it via an output attribute, a
// new MFnNurbsSurfaceData must be instantiated and then the create method
// called to build the actual data block as an MObject.  This MObject should
// be passed to the MFnNurbsSurface::create method as the parentOrOwner
// parameter so that the Nurbs Surface will be constructed inside the data
// block.  The MDataHandle::set routine is then used to pass the data block
// down the connection.
//
// *****************************************************************************

#if defined __cplusplus

// *****************************************************************************

// INCLUDED HEADER FILES


#include <maya/MFnGeometryData.h>

// *****************************************************************************

// DECLARATIONS

// *****************************************************************************

// CLASS DECLARATION (MFnNurbsSurfaceData)

/// Nurbs Surface function set for dependency node data
/**
  Create and manipulate Nurbs Surface dependency node data
*/

#ifdef _WIN32
#pragma warning(disable: 4522)
#endif // _WIN32

class OPENMAYA_EXPORT MFnNurbsSurfaceData : public MFnGeometryData 
{

	declareMFn(MFnNurbsSurfaceData, MFnGeometryData);

public:
	///
	MObject		create( MStatus* ReturnStatus = NULL );

protected:
// No protected members

private:
// No private members

};

#ifdef _WIN32
#pragma warning(default: 4522)
#endif // _WIN32

// *****************************************************************************
#endif /* __cplusplus */
#endif /* _MFnNurbsSurfaceData */
