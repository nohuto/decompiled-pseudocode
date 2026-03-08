/*
 * XREFs of ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180260780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 */

__int64 __fastcall CSceneWorld::OnSceneReady(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  __int64 (__fastcall *v4)(struct ISpectreRenderer *, char *); // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v4 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, char *))(*(_QWORD *)a2 + 48LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  v5 = v4(a2, (char *)this + 16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x44u, 0LL);
  }
  else
  {
    v8 = CSceneNode::HydrateSpectreResources(*((CSceneNode **)this + 3), (CSceneWorld *)((char *)this - 72));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x45u, 0LL);
  }
  return v7;
}
