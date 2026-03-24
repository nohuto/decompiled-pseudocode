/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C01760E4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0174144 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C0174394 (rimDispatchCompleteFrame.c)
 *     rimProcessHidInput @ 0x1C017566C (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C0175C94 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0175D20 (rimProcessMouseInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01522D0 (WPP_RECORDER_SF_qqqD.c)
 *     rimProcessInput @ 0x1C0175948 (rimProcessInput.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  char v9; // di
  struct _KPROCESS *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-70h] BYREF

  v9 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 584) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 473);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 == (struct _KPROCESS *)PsGetCurrentProcess(a1, a2) )
    goto LABEL_6;
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(v10, &ApcState);
    v9 = 1;
LABEL_6:
    rimProcessInput(a1, a2, a3, a4, a5);
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  DbgPrintGDI(
    "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
    *(const void **)(a1 + 72),
    v10,
    *(const void **)(a1 + 40),
    *(_DWORD *)(a1 + 84));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      v12,
      v11,
      v13,
      0x12u,
      (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 84));
  *(_BYTE *)(a1 + 584) = 1;
}
