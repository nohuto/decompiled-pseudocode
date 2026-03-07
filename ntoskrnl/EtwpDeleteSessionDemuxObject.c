void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _QWORD *v1; // rdi
  struct _LIST_ENTRY *Flink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Flink[256], 0LL);
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[3] = 0LL;
    if ( (_QWORD *)v1[4] == v1 + 4 )
    {
      RtlRbRemoveNode((unsigned __int64 *)&Flink[255], (unsigned __int64)v1);
      ExFreePoolWithTag(v1, 0);
    }
    ExReleasePushLockEx((__int64 *)&Flink[256], 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
