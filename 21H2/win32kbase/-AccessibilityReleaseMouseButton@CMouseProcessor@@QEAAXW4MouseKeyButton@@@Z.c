/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F9294
 * Callers:
 *     ReleaseMouseButton @ 0x1C01E8310 (ReleaseMouseButton.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003C62C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v15[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v16; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+38h] [rbp-80h]
  struct tagPOINT v18; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v17 = 0LL;
  v16 = 0LL;
  v12 = v4 & 1;
  if ( (v4 & 1) != 0 )
    WORD2(v16) = 2;
  LOWORD(v10) = (_DWORD)v12 != 0 ? 2 : 0;
  if ( (v4 & 2) != 0 )
  {
    v12 = (unsigned int)-(int)v12;
    LOWORD(v10) = (_DWORD)v12 != 0 ? 10 : 8;
    WORD2(v16) = v10;
  }
  if ( !(_WORD)v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, 2LL);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v18, (__int64)&v16, 3, 0x100u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15, v13, v14);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v18, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
}
