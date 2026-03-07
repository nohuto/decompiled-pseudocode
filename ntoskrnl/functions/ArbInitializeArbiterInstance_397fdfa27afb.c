__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KEVENT *Pool2; // rax
  __int64 v10; // rax
  PVOID *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KEVENT *v16; // rax
  int v17; // edi
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx

  *(_DWORD *)a1 = 1935831617;
  *(_QWORD *)(a1 + 320) = 0LL;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
    v10 = ExAllocatePool2(256LL, 4096LL, 1096970817LL);
    v11 = (PVOID *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v10;
    if ( !v10 )
      goto LABEL_45;
    *(_DWORD *)(a1 + 104) = 4096;
    v12 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
    *(_QWORD *)(a1 + 40) = v12;
    if ( !v12 )
      goto LABEL_45;
    v13 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
    *(_QWORD *)(a1 + 48) = v13;
    if ( !v13 )
      goto LABEL_45;
    v14 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v14 + 8) = v14;
    *(_QWORD *)v14 = v14;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 24) = 0;
    v15 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v15 + 8) = v15;
    *(_QWORD *)v15 = v15;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_DWORD *)(v15 + 24) = 0;
    *(_BYTE *)(a1 + 296) = 0;
    v16 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
    *(_QWORD *)(a1 + 304) = v16;
    if ( v16 )
    {
      KeInitializeEvent(v16, NotificationEvent, 1u);
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
        *(_QWORD *)(a1 + 208) = xHalAllocatePmcCounterSet;
      if ( !*(_QWORD *)(a1 + 224) )
        *(_QWORD *)(a1 + 224) = xHalGetInterruptTranslator;
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
        *(_QWORD *)(a1 + 192) = xHalGetInterruptTranslator;
      if ( !*(_QWORD *)(a1 + 216) )
        *(_QWORD *)(a1 + 216) = ArbStartArbiter;
      if ( !*(_QWORD *)(a1 + 280) )
        *(_QWORD *)(a1 + 280) = ArbInitializeRangeList;
      if ( !*(_QWORD *)(a1 + 288) )
        *(_QWORD *)(a1 + 288) = ArbDeleteOwnerRanges;
      v17 = ArbBuildAssignmentOrdering(a1, L"Root", L"Root", a6);
      if ( v17 >= 0 )
        return 0LL;
    }
    else
    {
LABEL_45:
      v17 = -1073741670;
    }
  }
  else
  {
    v17 = -1073741670;
    v11 = (PVOID *)(a1 + 112);
  }
  v19 = *(void **)(a1 + 8);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = *(void **)(a1 + 304);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = *(void **)(a1 + 40);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = *(void **)(a1 + 48);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( *v11 )
    ExFreePoolWithTag(*v11, 0);
  return (unsigned int)v17;
}
