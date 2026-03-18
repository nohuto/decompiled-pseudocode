/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00A4130
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserLoadUserApiHook @ 0x1C00A3840 (NtUserLoadUserApiHook.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcess; // rax
  int v4; // ecx

  v2 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
    || (unsigned int)PsGetWin32KFilterSet() == 5
    || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) != 0 )
    v4 = gihmodUserApiHookWOW;
  else
    v4 = gihmodUserApiHook;
  LOBYTE(v2) = xxxLoadHmodIndex(v4) != 0;
  return v2;
}
