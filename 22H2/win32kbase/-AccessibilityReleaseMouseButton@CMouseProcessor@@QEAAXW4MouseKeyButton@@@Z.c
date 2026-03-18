/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F5058
 * Callers:
 *     ReleaseMouseButton @ 0x1C01E8A10 (ReleaseMouseButton.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0055324 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C01F2AC0 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v14[4]; // [rsp+24h] [rbp-94h] BYREF
  __int128 v15; // [rsp+28h] [rbp-90h] BYREF
  __int64 v16; // [rsp+38h] [rbp-80h]
  struct tagPOINT v17; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1864);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v6, v5, v7, v8) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1865);
  v16 = 0LL;
  v15 = 0LL;
  v9 = v3 & 1;
  if ( (v3 & 1) != 0 )
    WORD2(v15) = 2;
  v10 = v9 != 0 ? 2 : 0;
  if ( (v3 & 2) != 0 )
  {
    v10 = v9 != 0 ? 10 : 8;
    WORD2(v15) = v10;
  }
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1880);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v17, (__int64)&v15, 3, 256);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14, v11, v12, v13);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v17, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
}
