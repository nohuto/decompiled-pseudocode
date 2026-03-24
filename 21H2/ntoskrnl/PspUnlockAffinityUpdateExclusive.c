/*
 * XREFs of PspUnlockAffinityUpdateExclusive @ 0x140581954
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x140907AE4 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockAffinityUpdateExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  _DWORD *v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspAffinityUpdateLock);
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PspAffinityUpdateLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = (_DWORD *)((unsigned __int64)&PspAffinityUpdateLock & 0x7FFFFFFFFFFFFFFCLL);
  v6 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v6);
    if ( v8 )
      goto LABEL_13;
    v7 = (__int64)&CurrentThread->LockEntries[v9];
    v6 &= ~(1 << v9);
    if ( (*(_BYTE *)(v7 + 26) & 1) != 0
      && (*(_DWORD *)(v7 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v7 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v5
      && *(_DWORD *)(v7 + 40) == SessionId )
    {
      *(_BYTE *)(v7 + 26) &= ~1u;
      if ( *(_QWORD *)(v7 + 32) )
        break;
    }
  }
  if ( !v7 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspAffinityUpdateLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v7 + 32) |= 2u;
  if ( *(__int64 *)(v7 + 32) < 0 )
    KiAbEntryRemoveFromTree(v7);
  v10 = *(_DWORD *)(v7 + 88) & 0x1FFFF;
  v11 = *(_DWORD *)(v7 + 88) & 0xFFFE0000;
  *(_BYTE *)(v7 + 25) &= ~1u;
  v15 = v10;
  *(_DWORD *)(v7 + 88) = v11;
  *(_QWORD *)(v7 + 32) = 0LL;
  v12 = (signed __int64)(v7 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PspAffinityUpdateLock, (__int64)&v15, v5);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  return KeLeaveCriticalRegionThread(a1);
}
