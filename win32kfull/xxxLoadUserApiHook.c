/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00DE45C
 * Callers:
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserLoadUserApiHook @ 0x1C00DE420 (NtUserLoadUserApiHook.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx

  v3 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
    || (unsigned int)PsGetWin32KFilterSet(v5) == 5
    || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) != 0 )
    v7 = (unsigned int)gihmodUserApiHookWOW;
  else
    v7 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v3) = xxxLoadHmodIndex(v7) != 0;
  return v3;
}
