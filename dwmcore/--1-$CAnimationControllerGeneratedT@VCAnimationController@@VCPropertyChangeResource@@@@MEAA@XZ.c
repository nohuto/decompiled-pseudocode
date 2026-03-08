/*
 * XREFs of ??1?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180022E3C
 * Callers:
 *     ??1CAnimationController@@UEAA@XZ @ 0x180022CB4 (--1CAnimationController@@UEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::~CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>(
        CResource *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 88);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this);
  if ( *v1 )
  {
    std::_Deallocate<16,0>(*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
