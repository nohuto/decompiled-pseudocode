/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x1402F7118
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d

  v3 = a1 + 1360;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1360), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1360);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v7 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v8 = (unsigned int)(v8 + 1);
    p_Process += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_17;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v9 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v9);
    return KeLeaveCriticalRegionThread(a2);
  }
LABEL_17:
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
  _enable();
  return KeLeaveCriticalRegionThread(a2);
}
