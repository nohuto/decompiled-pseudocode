/*
 * XREFs of PspUnlockAffinityUpdateExclusive @ 0x1405E081C
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x1409AD870 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall PspUnlockAffinityUpdateExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v5; // edx
  int v6; // r9d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspAffinityUpdateLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&PspAffinityUpdateLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v5 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PspAffinityUpdateLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v5;
    p_Process += 96LL;
    if ( v5 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_12:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspAffinityUpdateLock, SessionId, 0LL);
    _enable();
    return KiLeaveCriticalRegionUnsafe(a1);
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v6 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v6 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&PspAffinityUpdateLock, v6);
  return KiLeaveCriticalRegionUnsafe(a1);
}
