void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r14
  ULONG_PTR v3; // r9
  char *v4; // rbx
  void *SharedVm; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 ProcessPartition; // r15
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 *v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // rax
  ULONG_PTR v17; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v20; // rax
  void *v21; // rcx

  v1 = BugCheckParameter2 + 1664;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) )
    {
      v16 = *(_QWORD **)v4;
      v17 = 0LL;
      while ( v16 )
      {
        v17 = (ULONG_PTR)v16;
        v16 = (_QWORD *)*v16;
      }
      if ( !v17 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v17 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v17, 0LL, *(_QWORD *)(v17 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
        if ( !v21 )
          break;
        ExFreePoolWithTag(v21, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables(BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v7, 4LL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v10 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 376);
    if ( v11 )
      MiDeleteAweInfo(BugCheckParameter2, v11);
    ExCleanupAutoExpandPushLock(v10 + 392);
  }
  v12 = (unsigned __int64 *)*((_QWORD *)SharedVm + 5);
  if ( v12 )
  {
    MiEmptyPageAccessLog(v12);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v13 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2, -4LL, BugCheckParameter2, 0LL);
  MiReturnCommit(ProcessPartition, 4 - v6, v9);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v14 = *(_QWORD **)(BugCheckParameter2 + 1368);
  if ( v14 )
    MiReleaseProcessReferenceToSessionDataPage(v14);
  v15 = *(void **)(BugCheckParameter2 + 2552);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  MiContractPagingFiles(ProcessPartition);
}
