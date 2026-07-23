/*
 * XREFs of PspUnlockAffinityUpdateExclusive @ 0x140581BDC
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x140907C44 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockAffinityUpdateExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+70h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspAffinityUpdateLock);
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PspAffinityUpdateLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v5);
    if ( v7 )
      goto LABEL_13;
    v6 = (__int64)&CurrentThread->LockEntries[v8];
    v5 &= ~(1 << v8);
    if ( (*(_BYTE *)(v6 + 26) & 1) != 0
      && (*(_DWORD *)(v6 + 32) & 1) == 0
      && (*(_QWORD *)(v6 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PspAffinityUpdateLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v6 + 40) == SessionId )
    {
      *(_BYTE *)(v6 + 26) &= ~1u;
      if ( *(_QWORD *)(v6 + 32) )
        break;
    }
  }
  if ( !v6 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspAffinityUpdateLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v6 + 32) |= 2u;
  if ( *(__int64 *)(v6 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v6);
  v9 = *(_DWORD *)(v6 + 88) & 0x1FFFF;
  v10 = *(_DWORD *)(v6 + 88) & 0xFFFE0000;
  *(_BYTE *)(v6 + 25) &= ~1u;
  v16 = v9;
  *(_DWORD *)(v6 + 88) = v10;
  *(_QWORD *)(v6 + 32) = 0LL;
  v11 = (signed __int64)(v6 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v11;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PspAffinityUpdateLock, (unsigned int *)&v16);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread(a1, v12, v13, v14);
}
