/*
 * XREFs of ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002D8A0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18002C8D8 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002D4F8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002D82C (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 * Callees:
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18007FD9C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

bool __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        int *a3)
{
  int v3; // r9d
  int v4; // eax
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = *(_DWORD *)(a1 + 72);
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  v4 = *(_DWORD *)(a1 + 76);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 76) = a2;
    v4 = a2;
  }
  if ( a3 )
    *a3 = v4;
  *(_DWORD *)(a1 + 72) = v3 - 1;
  return v3 == 1;
}
