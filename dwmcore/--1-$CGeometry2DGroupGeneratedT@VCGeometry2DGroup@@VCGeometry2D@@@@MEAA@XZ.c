/*
 * XREFs of ??1?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ @ 0x1801BE75C
 * Callers:
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x18012E0BE (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::~CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>(
        struct CResource ***this)
{
  char *v1; // rbx

  v1 = (char *)(this + 10);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 10);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CGeometry2D::~CGeometry2D((CGeometry2D *)this);
}
