/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18012A262
 * Callers:
 *     ??1?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ @ 0x1801BE75C (--1-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ.c)
 *     ??1?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ @ 0x1801BE7B4 (--1-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ.c)
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x1801BFD80 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1802174A8 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
