/*
 * XREFs of SynthesizeMouseInput @ 0x1C009F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0041834 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C008FEA0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall SynthesizeMouseInput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct _PTPMouseLatencyTracker *a6)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h]
  __int128 v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+78h] [rbp-90h]
  __int128 v15; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  struct tagPOINT v17; // [rsp+A8h] [rbp-60h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 958LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v11 + 1) = a1;
    *(_QWORD *)&v13 = a3;
    *((_QWORD *)&v13 + 1) = a4;
    v14 = a4;
    *(_QWORD *)&v11 = a1 != 0 ? 3uLL : 0;
    v15 = v11;
    v16 = 0LL;
    v11 = v13;
    v12 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v17, a2, &v11, a5, (__int64)&v15, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v17, 0LL, a6);
  }
}
