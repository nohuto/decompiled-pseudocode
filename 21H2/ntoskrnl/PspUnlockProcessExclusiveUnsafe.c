/*
 * XREFs of PspUnlockProcessExclusiveUnsafe @ 0x140582A70
 * Callers:
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall PspUnlockProcessExclusiveUnsafe(__int64 a1)
{
  unsigned __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v10; // rax
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 1080;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1080);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
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
      && (*(_QWORD *)(v6 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
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
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v6 + 32) |= 2u;
  if ( *(__int64 *)(v6 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v6);
  v12 = *(_DWORD *)(v6 + 88) & 0x1FFFF;
  *(_DWORD *)(v6 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v6 + 25) &= ~1u;
  *(_QWORD *)(v6 + 32) = 0LL;
  v9 = (signed __int64)(v6 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v9;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v10) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, (unsigned int *)&v12);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v10 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
  return (char)v10;
}
