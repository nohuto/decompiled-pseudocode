/*
 * XREFs of _BlockInput @ 0x1C01AD9CC
 * Callers:
 *     NtUserBlockInput @ 0x1C01CDF80 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  ULONG v4; // eax
  ULONG v6; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  v3 = a1;
  v8 = -1;
  v7 = 12288;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 896LL), 0x20u)) )
  {
    v4 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v4);
    return 0LL;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, &v7) )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6);
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
