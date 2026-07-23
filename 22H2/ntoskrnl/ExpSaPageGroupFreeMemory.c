/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x140393E5C
 * Callers:
 *     ExpSaAllocatorFree @ 0x140393C54 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlClearBitsEx @ 0x14027E980 (RtlClearBitsEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // r12
  unsigned int v8; // r15d
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbp
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  bool v15; // bp
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // r14
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v22; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD v25[3]; // [rsp+34h] [rbp-34h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v25[0] = 0;
  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v8 = -1;
  LOBYTE(v9) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v9 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
      goto LABEL_37;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v10 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  CurrentThread->AbEntrySummary = v10 & ~(1 << v9);
  v11 = (__int64)&CurrentThread->LockEntries[v9];
  if ( v11 )
  {
    if ( v3 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v3 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_37:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, v25);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v11, v3);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v5);
  *(_DWORD *)(a1 + 36) += v5;
  v15 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v26 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    v8 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v19, v18);
    if ( v14 )
      break;
    v20 = (__int64)&v16->LockEntries[v19];
    v18 &= ~(1 << v19);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v8 )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
      {
        if ( v20 )
        {
          *(_BYTE *)(v20 + 32) |= 2u;
          if ( *(__int64 *)(v20 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
          v26 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
          *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v20 + 25) &= ~1u;
          *(_QWORD *)(v20 + 32) = 0LL;
          v21 = (signed __int64)(v20 - (unsigned __int64)v16->LockEntries) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v21;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v21);
          goto LABEL_31;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v3, v8, 0LL);
LABEL_31:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v3, &v26);
  v14 = v16->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v22 = &v16->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != v22 )
      KiCheckForKernelApcDelivery((__int64)v22);
  }
  return v15;
}
