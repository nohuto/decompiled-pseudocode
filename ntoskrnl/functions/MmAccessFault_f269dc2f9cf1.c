__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rbx
  int v8; // ecx
  unsigned int v9; // r15d
  NTSTATUS FileExtents; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  char v15; // al
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rax
  struct _SLIST_ENTRY *v23; // rbx
  unsigned __int64 v24; // rdx
  PVOID v25; // rcx
  __int64 **Address; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  PVOID ProtoPteAddress; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  int v37; // edx
  ULONG_PTR v38; // r9
  __int64 v39; // r8
  _BYTE *v40; // rax
  __int64 v41; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v42[2]; // [rsp+40h] [rbp-79h] BYREF
  ULONG_PTR v43; // [rsp+50h] [rbp-69h]
  ULONG_PTR v44; // [rsp+58h] [rbp-61h]
  unsigned __int64 v45; // [rsp+60h] [rbp-59h]
  unsigned __int64 v46; // [rsp+68h] [rbp-51h]
  __int64 v47; // [rsp+70h] [rbp-49h]
  __int128 v48; // [rsp+78h] [rbp-41h] BYREF
  __int128 v49; // [rsp+88h] [rbp-31h]
  PVOID P[2]; // [rsp+98h] [rbp-21h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-1h]

  v41 = 0LL;
  v5 = BugCheckParameter4;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    v40 = (_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      if ( *v40 == 1 || *v40 == 3 || *v40 == 6 )
        return 3221225477LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, 0LL) )
    {
      return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, v5, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v48 = 0LL;
  v49 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v52 = 0LL;
  v44 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 16;
    v7 &= ~2uLL;
  }
  v42[1] = v7;
  v42[0] = BugCheckParameter1;
  v43 = BugCheckParameter4;
  DWORD2(v49) = ((unsigned __int8)v8 ^ (unsigned __int8)(32 * a3)) & 0x20 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v42);
  while ( 1 )
  {
    v9 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v18 = MiSystemFault(v42), FileExtents = v18, v18 == 192) )
    {
      FileExtents = MiUserFault(v42);
      if ( FileExtents != -1073741802 )
        goto LABEL_18;
    }
    else if ( v18 != -1073741802 )
    {
      goto LABEL_25;
    }
    FileExtents = MiDispatchFault(v42, &v41);
    if ( FileExtents == -1073741802 )
    {
      v24 = v42[0];
      if ( v42[0] < 0xFFFF800000000000uLL
        && P[1] != (PVOID)qword_140C656A8
        && (!qword_140C656B0 || P[1] != (PVOID)qword_140C656B0) )
      {
        v25 = P[0];
        if ( !P[0] )
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(v42[0]);
          LOBYTE(v27) = 17;
          P[0] = Address;
          MiUnlockVadTree(1LL, v27);
          v25 = P[0];
          v24 = v42[0];
        }
        v28 = 4LL;
        if ( SBYTE8(v49) < 0 )
          v28 = 2LL;
        ProtoPteAddress = (PVOID)MiGetProtoPteAddress(v25, v24 >> 12, v28, ListEntry);
        if ( !ProtoPteAddress )
        {
          LOBYTE(v30) = 17;
          MiReleaseFaultState(&v48, v30, 0LL);
          P[1] = 0LL;
          FileExtents = -1073741819;
          goto LABEL_59;
        }
        if ( P[1] != ProtoPteAddress )
          P[1] = ProtoPteAddress;
        MiRetainSubsection((ULONG_PTR)ListEntry[0]);
      }
      DWORD2(v49) &= ~0x80u;
      FileExtents = 0;
    }
    else
    {
      v12 = v41;
      if ( v41 )
      {
        v21 = *(_QWORD *)(v41 + 256);
        v9 = *(_DWORD *)(v41 + 312);
        if ( v21 )
          v9 = *(_DWORD *)(v21 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v41 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v12 + 192) & 1) != 0 && *(int *)(v12 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v42);
          P[1] = 0LL;
          goto LABEL_18;
        }
        FileExtents = MiIssueHardFault(v42);
      }
      P[1] = 0LL;
    }
    v13 = v49;
    v14 = v48;
    if ( (_QWORD)v49 )
    {
      if ( WORD5(v48) )
      {
        MiEmptyDeferredWorkingSetEntries(&v48, v49, v11);
        v13 = v49;
      }
      MiUnlockPageTableInternal(v14, v13);
      v15 = BYTE13(v48) | 2;
      *(_QWORD *)&v49 = 0LL;
      BYTE13(v48) |= 2u;
    }
    else
    {
      v15 = BYTE13(v48);
    }
    if ( (v15 & 1) != 0 )
      MiUnlockWorkingSetExclusive(v14, BYTE12(v48));
    else
      MiUnlockWorkingSetShared(v14, BYTE12(v48));
LABEL_18:
    if ( (BYTE8(v49) & 1) != 0 )
      MiDeprioritizeVad(P[0]);
    if ( ListEntry[1] )
    {
      if ( ListEntry[1] == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(ListEntry[1]);
        MiFreeTransitionPageHeatList(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v52 )
    {
      MiReplenishSlabAllocator(v52, *((_QWORD *)&v52 + 1));
      *(_QWORD *)&v52 = 0LL;
    }
    else if ( (v43 & 1) != 0 && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v31 = *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v31 )
        MiReplenishSlabAllocator(v31, 1LL);
    }
    if ( (*(_BYTE *)(v48 + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v48 + 4) & 0xFFF) != 0 )
        goto LABEL_25;
      v19 = v48;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_25;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_25;
      }
      v19 = v48;
      if ( (__int64)(*(_QWORD *)(v48 + 128) - *(_QWORD *)(v48 + 112)) <= 100 )
        goto LABEL_25;
    }
    v20 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v19 + 174));
    if ( v20 && !(unsigned int)MiSufficientAvailablePages(v20, 1056LL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_25:
    if ( !FileExtents )
      goto LABEL_30;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 873;
      goto LABEL_30;
    }
    if ( FileExtents >= 0 )
    {
LABEL_28:
      if ( !P[1] && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        v38 = 0LL;
        if ( (v43 & 1) == 0 )
          v38 = v43;
        v39 = DWORD2(v49) >> 5;
        LOBYTE(v39) = (BYTE8(v49) & 0x20) != 0;
        EtwTracePageFault((unsigned int)FileExtents, v42[0], v39, v38);
      }
      goto LABEL_30;
    }
LABEL_59:
    if ( !MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_28;
    v32 = KeGetCurrentThread();
    if ( ((__int64)v32[1].Queue & 4) != 0 || (*((_DWORD *)&v32[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v43 & 1) != 0
           && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v43 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v33 = *(unsigned __int16 *)(v48 + 174);
      v34 = *(_QWORD *)(qword_140C67048 + 8 * v33);
      if ( (BYTE8(v49) & 0x40) != 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140C67048 + 8 * v33), 1056LL)
        || *(_QWORD *)(v34 + 17280) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v35 = *(_QWORD *)(v34 + 17216);
      v36 = v35 - 1;
      if ( !v35 )
        v36 = 0LL;
      if ( v36 < 0x9F )
      {
        v37 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v37 & 0xC) != 8
          && (v36 < 0x20 && (_UNKNOWN *)v34 == &MiSystemPartition
           || ((v37 & 2) == 0 || v36 < 0x21) && (*(_DWORD *)(v34 + 4) & 0x10) == 0) )
        {
          MiWaitForFreePage(v34);
        }
      }
      FileExtents = 873;
    }
LABEL_30:
    if ( (BYTE8(v49) & 2) != 0 )
      MiCopyOnWriteCheckConditions(v48, 3221225495LL);
    if ( (BYTE8(v49) & 4) != 0 )
      MiCopyOnWriteCheckConditions(v48, 3221226548LL);
    if ( !P[1] )
      break;
    v22 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) == 0 )
      goto LABEL_64;
    if ( *v22 == 1 || *v22 == 2 )
    {
      v22[1] = 1;
LABEL_64:
      v5 = 0LL;
      goto LABEL_65;
    }
    if ( *v22 != 6 )
      goto LABEL_64;
LABEL_65:
    v23 = ListEntry[0];
    MiInitializePageFaultPacket(2, P[1], 0, v5, (__int64)v42);
    DWORD2(v49) |= 8u;
    v6 = v42[0];
    ListEntry[0] = v23;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return (unsigned int)FileExtents;
}
