/*
 * XREFs of ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18024DA84
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801C4D54 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18024DCE4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneNode::OnChildrenChanged(CSceneNode *this)
{
  CSceneNode **v1; // rsi
  CSceneNode **i; // rdi

  v1 = (CSceneNode **)*((_QWORD *)this + 10);
  for ( i = (CSceneNode **)*((_QWORD *)this + 9); i != v1; ++i )
    CSceneNode::SetParent(*i, this);
  if ( *((_QWORD *)this + 17) )
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
