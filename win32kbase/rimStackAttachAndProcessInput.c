/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C00044C4
 * Callers:
 *     rimProcessKeyboardInput @ 0x1C0004290 (rimProcessKeyboardInput.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x1C00F0B7C (rimDispatchCompleteFrames.c)
 *     rimProcessMouseInput @ 0x1C00F0EA4 (rimProcessMouseInput.c)
 *     rimProcessHidInput @ 0x1C01D2DF8 (rimProcessHidInput.c)
 * Callees:
 *     rimProcessInput @ 0x1C00045B0 (rimProcessInput.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1C01A0D88 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v9; // di
  struct _KPROCESS *v10; // rsi
  int v11; // edx
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-B8h]
  _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  v9 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 522LL);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 == (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4) )
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
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v11, v12, 17, v13);
  }
  *(_BYTE *)(a1 + 776) = 1;
}
