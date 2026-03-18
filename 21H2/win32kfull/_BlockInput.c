/*
 * XREFs of _BlockInput @ 0x1C01D448C
 * Callers:
 *     NtUserBlockInput @ 0x1C01F1680 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2)
{
  int v2; // edi
  ULONG v3; // eax
  __int64 v4; // rdx
  ULONG v6; // eax
  __int64 v7; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

  v2 = a1;
  v9 = -1;
  v8 = 12288;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    v3 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v3, v4);
    return 0LL;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v8) )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v2 )
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
