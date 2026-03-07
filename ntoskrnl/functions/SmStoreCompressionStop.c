int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 ProcessPartition; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD **v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+50h] [rbp-20h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  BugCheckParameter2[1] = 0LL;
  memset(&Event, 0, sizeof(Event));
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v3 = SmpKeyedStoreEntryGet(ProcessPartition + 2072, &Process, 0, 0);
  v4 = v3;
  if ( v3 )
    v5 = *(unsigned __int16 *)(v3 + 16);
  else
    v5 = *(_DWORD *)(ProcessPartition + 2112);
  if ( v5 != -1 )
  {
    v11 = ProcessPartition;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    BugCheckParameter2[0] = 0LL;
    BugCheckParameter2[2] = (ULONG_PTR)SmpFlushStorePages;
    BugCheckParameter2[3] = (ULONG_PTR)&v11;
    ExQueueWorkItemToPartition(BugCheckParameter2, 0, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 1936));
    LODWORD(v3) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v4 )
    {
      SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 1);
      if ( a1 )
      {
        v8 = (_DWORD **)SmKmStoreRefFromStoreIndex(ProcessPartition, v5 & 0x3FF);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v9, *v8, 0LL);
      }
      LODWORD(v3) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v15, v6, v7);
      if ( (int)v3 < 0 )
        LODWORD(v3) = SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 2);
    }
  }
  return v3;
}
