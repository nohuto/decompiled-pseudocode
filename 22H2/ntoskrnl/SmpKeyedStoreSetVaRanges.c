/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140351A08
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1406FB63C (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     SmpKeyedStoreEntryGet @ 0x140264198 (SmpKeyedStoreEntryGet.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2, ...)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v12; // rcx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  va_list va; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  va_list va1; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]
  va_list va2; // [rsp+80h] [rbp+28h] BYREF

  va_start(va2, BugCheckParameter2);
  va_start(va1, BugCheckParameter2);
  va_start(va, BugCheckParameter2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet(BugCheckParameter2, (__int64 *)va, 0, 1) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  LODWORD(v16) = 0;
  v4 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
  else
    SessionId = -1;
  --v4->SpecialApcDisable;
  v6 = ++v4->AbAllocationRegionCount;
  v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    LODWORD(v18) = v9;
    if ( v8 )
      break;
    v10 = (__int64)&v4->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
      {
        if ( v10 )
        {
          *(_BYTE *)(v10 + 32) |= 2u;
          if ( *(__int64 *)(v10 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
          LODWORD(v16) = *(_DWORD *)(v10 + 88) & 0x1FFFF;
          *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          *(_QWORD *)(v10 + 32) = 0LL;
          v11 = (signed __int64)(v10 - (unsigned __int64)v4->LockEntries) / 96;
          if ( v6 == 1 )
            v4->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, BugCheckParameter2, (__int64 *)va1);
  v8 = v4->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v12 = &v4->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12 )
      KiCheckForKernelApcDelivery((__int64)v12);
  }
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
