/*
 * XREFs of ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x18024DAF4
 * Callers:
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801C4EC4 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 */

void __fastcall CSceneNode::OnComponentsChanged(CSceneNode *this)
{
  CSceneComponent **v2; // rsi
  CSceneComponent **i; // rdi

  if ( *((_QWORD *)this + 17) )
  {
    v2 = (CSceneComponent **)*((_QWORD *)this + 13);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 12); i != v2; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
}
