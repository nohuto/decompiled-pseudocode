/*
 * XREFs of ArbInitializeArbiterInstance @ 0x1C00A1B94
 * Callers:
 *     AcpiInitializeBusNumberArbiter @ 0x1C008204C (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1C0088F2C (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1C008C02C (AcpiInitializePortArbiter.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00ABB68 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     RtlInitializeRangeList_0 @ 0x1C0001A31 (RtlInitializeRangeList_0.c)
 *     ArbBuildAssignmentOrdering @ 0x1C00A124C (ArbBuildAssignmentOrdering.c)
 */

__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *Pool2; // rax
  int v8; // edi
  PVOID *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KEVENT *v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  *(_QWORD *)(a1 + 320) = a2;
  *(_DWORD *)a1 = 1935831617;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
    v10 = ExAllocatePool2(256LL, 4096LL, 1096970817LL);
    v9 = (PVOID *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v10;
    if ( !v10 )
      goto LABEL_4;
    *(_DWORD *)(a1 + 104) = 4096;
    v11 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
    *(_QWORD *)(a1 + 40) = v11;
    if ( !v11 )
      goto LABEL_4;
    v12 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
    *(_QWORD *)(a1 + 48) = v12;
    if ( v12
      && (RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40)),
          RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48)),
          *(_BYTE *)(a1 + 296) = 0,
          v13 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL),
          (*(_QWORD *)(a1 + 304) = v13) != 0LL) )
    {
      KeInitializeEvent(v13, NotificationEvent, 1u);
      *(_QWORD *)(a1 + 16) = a4;
      *(_QWORD *)(a1 + 24) = L"Root";
      *(_DWORD *)(a1 + 32) = a3;
      if ( !*(_QWORD *)(a1 + 152) )
        *(_QWORD *)(a1 + 152) = ArbTestAllocation;
      if ( !*(_QWORD *)(a1 + 160) )
        *(_QWORD *)(a1 + 160) = ArbRetestAllocation;
      if ( !*(_QWORD *)(a1 + 168) )
        *(_QWORD *)(a1 + 168) = ArbCommitAllocation;
      if ( !*(_QWORD *)(a1 + 176) )
        *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
      if ( !*(_QWORD *)(a1 + 208) )
        *(_QWORD *)(a1 + 208) = ArbAddReserved;
      if ( !*(_QWORD *)(a1 + 224) )
        *(_QWORD *)(a1 + 224) = ArbPreprocessEntry;
      if ( !*(_QWORD *)(a1 + 232) )
        *(_QWORD *)(a1 + 232) = ArbAllocateEntry;
      if ( !*(_QWORD *)(a1 + 240) )
        *(_QWORD *)(a1 + 240) = ArbGetNextAllocationRange;
      if ( !*(_QWORD *)(a1 + 248) )
        *(_QWORD *)(a1 + 248) = ArbFindSuitableRange;
      if ( !*(_QWORD *)(a1 + 256) )
        *(_QWORD *)(a1 + 256) = ArbAddAllocation;
      if ( !*(_QWORD *)(a1 + 264) )
        *(_QWORD *)(a1 + 264) = ArbBacktrackAllocation;
      if ( !*(_QWORD *)(a1 + 272) )
        *(_QWORD *)(a1 + 272) = ArbOverrideConflict;
      if ( !*(_QWORD *)(a1 + 184) )
        *(_QWORD *)(a1 + 184) = ArbBootAllocation;
      if ( !*(_QWORD *)(a1 + 200) )
        *(_QWORD *)(a1 + 200) = ArbQueryConflict;
      if ( !*(_QWORD *)(a1 + 192) )
        *(_QWORD *)(a1 + 192) = ArbPreprocessEntry;
      if ( !*(_QWORD *)(a1 + 216) )
        *(_QWORD *)(a1 + 216) = ArbStartArbiter;
      if ( !*(_QWORD *)(a1 + 280) )
        *(_QWORD *)(a1 + 280) = &ArbInitializeRangeList;
      if ( !*(_QWORD *)(a1 + 288) )
        *(_QWORD *)(a1 + 288) = ArbDeleteOwnerRanges;
      v8 = ArbBuildAssignmentOrdering(a1);
      if ( v8 >= 0 )
        return 0LL;
    }
    else
    {
LABEL_4:
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741670;
    v9 = (PVOID *)(a1 + 112);
  }
  v14 = *(void **)(a1 + 8);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 304);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(void **)(a1 + 40);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(void **)(a1 + 48);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( *v9 )
    ExFreePoolWithTag(*v9, 0);
  return (unsigned int)v8;
}
