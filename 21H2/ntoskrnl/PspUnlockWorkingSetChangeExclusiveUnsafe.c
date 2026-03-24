/*
 * XREFs of PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140581BD4
 * Callers:
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimits @ 0x140908A84 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

char PspUnlockWorkingSetChangeExclusiveUnsafe()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  _DWORD *v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C13270, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C13270);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C13270) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = (_DWORD *)((unsigned __int64)&qword_140C13270 & 0x7FFFFFFFFFFFFFFCLL);
  v4 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v4);
    if ( v6 )
      goto LABEL_13;
    v5 = (__int64)&CurrentThread->LockEntries[v7];
    v4 &= ~(1 << v7);
    if ( (*(_BYTE *)(v5 + 26) & 1) != 0
      && (*(_DWORD *)(v5 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v5 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v3
      && *(_DWORD *)(v5 + 40) == SessionId )
    {
      *(_BYTE *)(v5 + 26) &= ~1u;
      if ( *(_QWORD *)(v5 + 32) )
        break;
    }
  }
  if ( !v5 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C13270, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 32) |= 2u;
  if ( *(__int64 *)(v5 + 32) < 0 )
    KiAbEntryRemoveFromTree(v5);
  v12 = *(_DWORD *)(v5 + 88) & 0x1FFFF;
  *(_DWORD *)(v5 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v5 + 25) &= ~1u;
  *(_QWORD *)(v5 + 32) = 0LL;
  v8 = (signed __int64)(v5 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v8;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v8);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v9) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&qword_140C13270, (__int64)&v12, v3);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 )
  {
    v9 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != v9 )
      LOBYTE(v9) = KiCheckForKernelApcDelivery(v10);
  }
  return (char)v9;
}
