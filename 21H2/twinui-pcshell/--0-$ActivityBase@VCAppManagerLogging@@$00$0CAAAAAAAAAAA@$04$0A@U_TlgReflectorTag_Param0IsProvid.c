/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18003183C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___ @ 0x18002C930 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D77C8 (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800314C0 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 */

_QWORD *__fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        _QWORD *a1,
        __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  bool v8; // zf
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  *a1 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  a1[3] = 0LL;
  v4 = a1 + 1;
  *v4 = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  v4[4] = 0LL;
  v4[1] = a1;
  if ( v2 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 7),
    a2 + 56);
  a1[38] = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v6 = a1[38];
  v7 = (_QWORD *)(v6 + 8);
  if ( !v6 )
    v7 = a1 + 7;
  a1[6] = v7;
  a1[5] = v7 + 5;
  v8 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  result = a1;
  *a1 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  return result;
}
