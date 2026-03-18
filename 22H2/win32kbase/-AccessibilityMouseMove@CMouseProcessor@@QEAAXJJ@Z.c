/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01F4F98
 * Callers:
 *     MouseMove @ 0x1C01E8770 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0055324 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C01F2AC0 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  struct tagPOINT v9; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment((__int64)this, a2, a3, a4) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1798);
  v7 = 0LL;
  HIDWORD(v7) = v5;
  v8 = v4;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)&v7, 1, 256);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v9, 0LL);
}
