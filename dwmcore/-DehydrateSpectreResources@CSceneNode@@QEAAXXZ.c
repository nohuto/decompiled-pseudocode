/*
 * XREFs of ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18024DCE4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180260750 (-OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x180267ED8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

void __fastcall CSceneNode::DehydrateSpectreResources(CSceneNode *this)
{
  __int64 *v2; // rsi
  CSceneNode **v3; // rbp
  CSceneNode **i; // rdi
  CSceneComponent **v5; // rbp
  CSceneComponent **j; // rdi
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 15) )
  {
    v2 = (__int64 *)((char *)this + 136);
    if ( *((_QWORD *)this + 17) )
    {
      v3 = (CSceneNode **)*((_QWORD *)this + 10);
      for ( i = (CSceneNode **)*((_QWORD *)this + 9); i != v3; ++i )
      {
        if ( *((CSceneNode **)*i + 16) == this )
          CSceneNode::DehydrateSpectreResources(*i);
      }
      v5 = (CSceneComponent **)*((_QWORD *)this + 13);
      for ( j = (CSceneComponent **)*((_QWORD *)this + 12); j != v5; ++j )
        CSceneComponent::DehydrateSpectreResources(*j, this);
      v7 = *((_QWORD *)this + 16);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 136) + 40LL))(*(_QWORD *)(v7 + 136), *v2);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
}
