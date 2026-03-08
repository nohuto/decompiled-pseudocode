/*
 * XREFs of ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18024DCE4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180260780 (-OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UISpectreNode@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISpectreNode@@@Z @ 0x18024D668 (--4-$com_ptr_t@UISpectreNode@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISpectreNode@@@Z.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x18024D71C (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneNode::HydrateSpectreResources(CSceneNode *this, struct CSceneWorld *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  CSceneComponent **v12; // rdi
  CSceneComponent **i; // rbx
  CSceneNode **v14; // rdi
  CSceneNode **j; // rbx

  if ( !*((_QWORD *)this + 15) )
  {
    v4 = *((_QWORD *)this + 16);
    v5 = (__int64 *)((char *)this + 136);
    *((_QWORD *)this + 15) = a2;
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 136);
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 17);
      v9 = v8(v7, v5);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD0u, 0LL);
        return v11;
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 11) + 32LL))(*((_QWORD *)a2 + 11));
      wil::com_ptr_t<ISpectreNode,wil::err_returncode_policy>::operator=(v5, v6);
    }
    CSceneNode::ApplyTransformToSpectreResources(this);
    v12 = (CSceneComponent **)*((_QWORD *)this + 13);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 12); i != v12; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    v14 = (CSceneNode **)*((_QWORD *)this + 10);
    for ( j = (CSceneNode **)*((_QWORD *)this + 9); j != v14; ++j )
    {
      if ( *((CSceneNode **)*j + 16) == this )
        CSceneNode::HydrateSpectreResources(*j, a2);
    }
  }
  return 0;
}
