/*
 * XREFs of UserIsWindowGdiScaled @ 0x1C003E220
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C00EF2D0 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserIsWindowGdiScaled(__int64 a1, _WORD *a2)
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 result; // rax

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 502LL);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( !*ThreadWin32Thread )
    return 0LL;
  v5 = ValidateHwndEx(a1, 1LL);
  if ( !v5 )
    return 0LL;
  v6 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v6 )
    return 0LL;
  if ( !*v6 )
    return 0LL;
  if ( !*((_QWORD *)PtiCurrentShared() + 57) )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_DWORD *)(v7 + 288);
  if ( (v8 & 0xF) != 0 || (v8 & 0x40000000) == 0 )
    return 0LL;
  result = 1LL;
  *a2 = *(_WORD *)(v7 + 284);
  return result;
}
