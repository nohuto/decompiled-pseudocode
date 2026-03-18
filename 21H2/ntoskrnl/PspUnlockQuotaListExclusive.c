/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1403DF20C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1406C8888 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409AD180 (PspRemoveQuotaBlock.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockQuotaListExclusive(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  int v9; // r8d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  CurrentThread = KeGetCurrentThread();
  if ( a2 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v7 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (a2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v7;
    p_Process += 96LL;
    if ( v7 >= 6 )
      goto LABEL_11;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_11:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2, SessionId, 0LL);
    _enable();
    return KeLeaveCriticalRegionThread(a1);
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v9 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a2, v9);
  return KeLeaveCriticalRegionThread(a1);
}
