/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C022ADA8
 * Callers:
 *     MouseMove @ 0x1C0218170 (MouseMove.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C007A28C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C0226204 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  _BYTE v9[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment((__int64)this, a2, a3, a4) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1796);
  v7 = 0LL;
  HIDWORD(v7) = v5;
  v8 = v4;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v9, (__int64)&v7, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v9, 0LL);
}
