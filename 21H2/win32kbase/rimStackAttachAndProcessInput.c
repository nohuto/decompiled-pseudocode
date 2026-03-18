/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C0004590
 * Callers:
 *     rimProcessKeyboardInput @ 0x1C00040D0 (rimProcessKeyboardInput.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x1C00E6CDC (rimDispatchCompleteFrames.c)
 *     rimProcessMouseInput @ 0x1C00E6E90 (rimProcessMouseInput.c)
 *     rimProcessHidInput @ 0x1C01A99EC (rimProcessHidInput.c)
 * Callees:
 *     rimProcessInput @ 0x1C00CA6AC (rimProcessInput.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1C017F450 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // di
  struct _KPROCESS *v10; // rsi
  int v11; // edx
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-B8h]
  _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v5 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 808) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 == (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4) )
    goto LABEL_6;
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(v10, &ApcState);
    v5 = 1;
LABEL_6:
    rimProcessInput(a1, a2, a3, a4, a5);
    if ( v5 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  DbgPrintGDI(
    "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
    *(const void **)(a1 + 72),
    v10,
    *(const void **)(a1 + 40),
    *(_DWORD *)(a1 + 84));
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v11, v12, 17, v13);
  }
  *(_BYTE *)(a1 + 808) = 1;
}
