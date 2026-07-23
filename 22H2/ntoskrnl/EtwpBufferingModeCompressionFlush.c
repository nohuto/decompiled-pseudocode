/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x1405AC43C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x14093D1D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x1405AC9DC (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD6B4 (EtwpRelinquishCompressionTarget.c)
 */

char __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  $C459BD0D405E8E46662177FB3D0A143F *v1; // rax
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // bp
  unsigned int v8; // r8d
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v1) = *(_DWORD *)(a1 + 1152);
  if ( (_DWORD)v1 )
  {
    EtwpCompressPendingBuffers();
    v3 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
    v17 = 0;
    v4 = a1 + 1128;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v11, v8);
      if ( v10 )
        goto LABEL_14;
      v9 = (__int64)&CurrentThread->LockEntries[v11];
      v8 &= ~(1 << v11);
      if ( (*(_BYTE *)(v9 + 26) & 1) != 0
        && (*(_DWORD *)(v9 + 32) & 1) == 0
        && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v9 + 40) == SessionId )
      {
        *(_BYTE *)(v9 + 26) &= ~1u;
        if ( *(_QWORD *)(v9 + 32) )
          break;
      }
    }
    if ( !v9 )
    {
LABEL_14:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
      goto LABEL_21;
    }
    *(_BYTE *)(v9 + 32) |= 2u;
    if ( *(__int64 *)(v9 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
    v12 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
    v13 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
    *(_BYTE *)(v9 + 25) &= ~1u;
    v17 = v12;
    *(_DWORD *)(v9 + 88) = v13;
    *(_QWORD *)(v9 + 32) = 0LL;
    v14 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v7 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v14;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    LOBYTE(v1) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v17);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 )
    {
      v1 = &CurrentThread->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v1->ApcState.ApcListHead[0].Flink != v1 )
        LOBYTE(v1) = KiCheckForKernelApcDelivery(v15);
    }
  }
  return (char)v1;
}
