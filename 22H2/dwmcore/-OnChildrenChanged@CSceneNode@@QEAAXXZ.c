/*
 * XREFs of ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x1801EB9CC
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801718EC (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EBC90 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneNode::OnChildrenChanged(CSceneNode *this)
{
  CSceneNode **v1; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi

  v1 = (CSceneNode **)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 9) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CSceneNode::SetParent(*v1, this);
      ++v3;
      ++v1;
    }
    while ( v3 != v4 );
  }
  if ( *((_QWORD *)this + 16) )
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
