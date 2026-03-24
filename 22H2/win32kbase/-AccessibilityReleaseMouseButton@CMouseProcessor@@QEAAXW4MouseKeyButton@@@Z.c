/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01BE9D0
 * Callers:
 *     ReleaseMouseButton @ 0x1C01AEDA0 (ReleaseMouseButton.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0043DC4 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0043E10 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00467AC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, __int64 a2)
{
  char v2; // bl
  int v4; // edx
  __int16 v5; // cx
  int v6; // [rsp+20h] [rbp-98h] BYREF
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  struct tagPOINT v9; // [rsp+40h] [rbp-78h] BYREF

  v2 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
  {
    v6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1765);
  }
  if ( *((_DWORD *)a1 + 2) != 1 )
  {
    v6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1766);
  }
  v8 = 0LL;
  v7 = 0LL;
  v4 = v2 & 1;
  if ( (v2 & 1) != 0 )
    WORD2(v7) = 2;
  v5 = v4 != 0 ? 2 : 0;
  if ( (v2 & 2) != 0 )
  {
    v5 = v4 != 0 ? 10 : 8;
    WORD2(v7) = v5;
  }
  if ( !v5 )
  {
    v6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1781);
  }
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)&v7, 3, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v9, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
}
