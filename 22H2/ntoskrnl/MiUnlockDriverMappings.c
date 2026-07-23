/*
 * XREFs of MiUnlockDriverMappings @ 0x1403731A8
 * Callers:
 *     MiReleaseDriverPtes @ 0x14075F4E0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+70h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CD28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CD28);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4CD28) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    if ( v6 )
      break;
    v8 = (__int64)&CurrentThread->LockEntries[v7];
    v5 &= ~(1 << v7);
    if ( (*(_BYTE *)(v8 + 26) & 1) != 0
      && (*(_DWORD *)(v8 + 32) & 1) == 0
      && (*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4CD28 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v8 + 40) == SessionId )
    {
      *(_BYTE *)(v8 + 26) &= ~1u;
      if ( *(_QWORD *)(v8 + 32) )
      {
        if ( v8 )
        {
          *(_BYTE *)(v8 + 32) |= 2u;
          if ( *(__int64 *)(v8 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v8);
          v12 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
          *(_DWORD *)(v8 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v8 + 25) &= ~1u;
          *(_QWORD *)(v8 + 32) = 0LL;
          v9 = (signed __int64)(v8 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v9;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4CD28, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&qword_140C4CD28, &v12);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  return KiLeaveGuardedRegionUnsafe(a1);
}
