/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01F91EC
 * Callers:
 *     MouseMove @ 0x1C01E8110 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003C62C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+30h] [rbp-88h]
  struct tagPOINT v11; // [rsp+40h] [rbp-78h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = 0LL;
  HIDWORD(v9) = a2;
  v10 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v11, (__int64)&v9, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v11, 0LL);
}
