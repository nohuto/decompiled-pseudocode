/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01BE86C
 * Callers:
 *     MouseButtonAction @ 0x1C01AEBF0 (MouseButtonAction.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0041834 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C004533C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int16 v6; // dx
  __int16 v7; // ax
  int v8; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-90h]
  struct tagPOINT v11; // [rsp+40h] [rbp-88h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1728);
  }
  if ( *((_DWORD *)a1 + 2) != 1 )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1729);
  }
  if ( a3 > 1 )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1730);
  }
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1731);
  }
  v10 = 0LL;
  v9 = 0LL;
  v6 = 1;
  if ( v4 != 1 )
    v6 = 4;
  v7 = 2 * v6;
  if ( a3 != 1 )
    v7 = v6;
  WORD2(v9) = v7;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v11, (__int64)&v9, 2, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v11, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
}
