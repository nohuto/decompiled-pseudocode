__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v6 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v10, 0, 1);
  v8 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v7 + 16));
    v6 = *(unsigned __int16 *)(v8 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v6;
}
