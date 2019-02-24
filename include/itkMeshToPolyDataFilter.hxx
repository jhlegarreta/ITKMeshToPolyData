/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkMeshToPolyDataFilter_hxx
#define itkMeshToPolyDataFilter_hxx

#include "itkMeshToPolyDataFilter.h"

namespace itk
{

template< typename TInputMesh >
MeshToPolyDataFilter< TInputMesh >
::MeshToPolyDataFilter()
{
}


template< typename TInputMesh >
void
MeshToPolyDataFilter< TInputMesh >
::PrintSelf( std::ostream& os, Indent indent ) const
{
  Superclass::PrintSelf( os, indent );
}


template< typename TInputMesh >
void
MeshToPolyDataFilter< TInputMesh >
::GenerateData()
{
}

} // end namespace itk

#endif // itkMeshToPolyDataFilter_hxx
