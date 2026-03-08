/*
 * XREFs of ??1?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ @ 0x1801BEA98
 * Callers:
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180251998 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>(
        struct CResource ***this)
{
  char *v1; // rdi

  v1 = (char *)(this + 20);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 20);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  *this = (struct CResource **)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
