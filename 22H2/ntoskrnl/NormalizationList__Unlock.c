/*
 * XREFs of NormalizationList__Unlock @ 0x140594318
 * Callers:
 *     RtlpGetNormalization @ 0x14091B870 (RtlpGetNormalization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

_QWORD *NormalizationList__Unlock()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  unsigned int v3; // r8d
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&NormalizationListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v5 = !_BitScanReverse((unsigned int *)&v6, v3);
    if ( v5 )
      goto LABEL_13;
    v4 = (__int64)&CurrentThread->LockEntries[v6];
    v3 &= ~(1 << v6);
    if ( (*(_BYTE *)(v4 + 26) & 1) != 0
      && (*(_DWORD *)(v4 + 32) & 1) == 0
      && (*(_QWORD *)(v4 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&NormalizationListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v4 + 40) == SessionId )
    {
      *(_BYTE *)(v4 + 26) &= ~1u;
      if ( *(_QWORD *)(v4 + 32) )
        break;
    }
  }
  if ( !v4 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&NormalizationListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v4 + 32) |= 2u;
  if ( *(__int64 *)(v4 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v4);
  v7 = *(_DWORD *)(v4 + 88) & 0x1FFFF;
  v8 = *(_DWORD *)(v4 + 88) & 0xFFFE0000;
  *(_BYTE *)(v4 + 25) &= ~1u;
  v12 = v7;
  *(_DWORD *)(v4 + 88) = v8;
  *(_QWORD *)(v4 + 32) = 0LL;
  v9 = (signed __int64)(v4 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v9;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&NormalizationListLock, &v12);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
