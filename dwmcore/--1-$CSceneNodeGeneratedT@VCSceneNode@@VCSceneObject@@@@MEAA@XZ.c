/*
 * XREFs of ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x18024D554
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x18024D5FC (--1CSceneNode@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(
        CResource *this)
{
  void **v2; // rbx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  v2 = (void **)((char *)this + 72);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 9);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 12);
  if ( *((_QWORD *)this + 12) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *v2 )
  {
    std::_Deallocate<16,0>(*v2, (*((_QWORD *)this + 11) - (_QWORD)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  CResource::~CResource(this);
}
