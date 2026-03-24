/*
 * XREFs of _BlockInput @ 0x1C01D97DC
 * Callers:
 *     NtUserBlockInput @ 0x1C01F67A0 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  ULONG v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v3 = a1;
  v12 = -1;
  v11 = 12288;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    v4 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v4, v5, v6);
    return 0LL;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v11) )
  {
    v8 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v8, v9, v10);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v3 )
  {
    if ( gptiBlockInput || (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
      return 0LL;
    gptiBlockInput = gptiCurrent;
  }
  else
  {
    if ( gptiBlockInput != gptiCurrent )
      return 0LL;
    gptiBlockInput = 0LL;
  }
  return 1LL;
}
