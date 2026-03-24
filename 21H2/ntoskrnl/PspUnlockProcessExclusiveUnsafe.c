/*
 * XREFs of PspUnlockProcessExclusiveUnsafe @ 0x140582840
 * Callers:
 *     NtTerminateProcess @ 0x1406D9B60 (NtTerminateProcess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

char __fastcall PspUnlockProcessExclusiveUnsafe(__int64 a1)
{
  unsigned __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  _DWORD *v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v11; // rax
  __int64 v12; // rcx
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 1080;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1080);
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = (_DWORD *)(v1 & 0x7FFFFFFFFFFFFFFCLL);
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
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v7 + 32) |= 2u;
  if ( *(__int64 *)(v7 + 32) < 0 )
    KiAbEntryRemoveFromTree(v7);
  v14 = *(_DWORD *)(v7 + 88) & 0x1FFFF;
  *(_DWORD *)(v7 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v7 + 25) &= ~1u;
  *(_QWORD *)(v7 + 32) = 0LL;
  v10 = (signed __int64)(v7 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v10;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v10);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v11) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, (__int64)&v14, v5);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v11 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery(v12);
  }
  return (char)v11;
}
