/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C022AE68
 * Callers:
 *     ReleaseMouseButton @ 0x1C02183D0 (ReleaseMouseButton.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C007A28C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C0226204 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(
        CMouseProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  __int16 v11; // cx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v18[4]; // [rsp+24h] [rbp-94h] BYREF
  __int128 v19; // [rsp+28h] [rbp-90h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h]
  _BYTE v21[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1862);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v7, v6, v8, v9) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1863);
  v20 = 0LL;
  v19 = 0LL;
  v10 = v4 & 1;
  if ( (v4 & 1) != 0 )
    WORD2(v19) = 2;
  v11 = v10 != 0 ? 2 : 0;
  if ( (v4 & 2) != 0 )
  {
    v11 = v10 != 0 ? 10 : 8;
    WORD2(v19) = v11;
  }
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1878);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v21, (__int64)&v19, 3, 0x100u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18, v12, v13, v14);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v21, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18, v15, v16, v17);
}
