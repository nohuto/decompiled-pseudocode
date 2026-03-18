/*
 * XREFs of SynthesizeMouseInput @ 0x1C00B2BC0
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C01E21C0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C009A4B4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *MouseProcessor; // rdi
  __int128 v10; // [rsp+38h] [rbp-91h] BYREF
  __int64 v11; // [rsp+48h] [rbp-81h]
  __int128 v12; // [rsp+58h] [rbp-71h]
  __int64 v13; // [rsp+68h] [rbp-61h]
  __int128 v14; // [rsp+78h] [rbp-51h] BYREF
  __int64 v15; // [rsp+88h] [rbp-41h]
  struct tagPOINT v16; // [rsp+98h] [rbp-31h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 0LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v12 = a3;
    *((_QWORD *)&v12 + 1) = a4;
    v13 = a4;
    *(_QWORD *)&v10 = a1 != 0 ? 3uLL : 0;
    v14 = v10;
    v15 = 0LL;
    v10 = v12;
    v11 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v16, a2, &v10, a5, (__int64)&v14, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v16, 0LL);
  }
}
