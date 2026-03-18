/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18012E412
 * Callers:
 *     ??1?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ @ 0x1801C198C (--1-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ.c)
 *     ??1?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ @ 0x1801C19E4 (--1-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ.c)
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x1801C2FB0 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18021AA08 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
