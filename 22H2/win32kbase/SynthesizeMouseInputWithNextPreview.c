/*
 * XREFs of SynthesizeMouseInputWithNextPreview @ 0x1C01AF280
 * Callers:
 *     <none>
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0090D40 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall SynthesizeMouseInputWithNextPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _PTPMouseLatencyTracker *a5,
        int a6,
        struct _MOUSE_INPUT_DATA *a7)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h]
  __int128 v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int128 v16; // [rsp+88h] [rbp-80h] BYREF
  __int64 v17; // [rsp+98h] [rbp-70h]
  struct tagPOINT v18; // [rsp+A8h] [rbp-60h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1016);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1017);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v12 + 1) = a1;
    *(_QWORD *)&v14 = a3;
    *((_QWORD *)&v14 + 1) = a4;
    v15 = a4;
    *(_QWORD *)&v12 = a1 != 0 ? 3uLL : 0;
    v16 = v12;
    v17 = 0LL;
    v12 = v14;
    v13 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v18, a2, &v12, a6, (__int64)&v16, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v18, a7, a5);
  }
}
