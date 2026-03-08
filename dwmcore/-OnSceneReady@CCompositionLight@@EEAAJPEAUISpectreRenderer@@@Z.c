/*
 * XREFs of ?OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180216190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::OnSceneReady(CCompositionLight *this, struct ISpectreRenderer *a2)
{
  __int64 (__fastcall *v4)(struct ISpectreRenderer *, _QWORD, char *); // rsi
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v4 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, char *))(*(_QWORD *)a2 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 10) + 216LL))((char *)this - 80);
  v6 = v4(a2, v5, (char *)this + 96);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x240u, 0LL);
  return v8;
}
