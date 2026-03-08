/*
 * XREFs of ??_ECMeshGeometry2D@@UEAAPEAXI@Z @ 0x1801C00B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ @ 0x1801BE7B4 (--1-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::~CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
