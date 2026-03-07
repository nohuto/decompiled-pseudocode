__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  unsigned __int64 v8; // rdi
  void *CurrentServerSilo; // rsi

  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 192LL, 1934386515LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0xC0uLL);
  v3[1].Count = *(unsigned __int64 *)a1;
  v3[3].Count = 1LL;
  v3[18].Count = 0LL;
  v3[17].Count = (unsigned __int64)&v3[16];
  v3[16].Count = (unsigned __int64)&v3[16];
  ExInitializePushLock(v3 + 19);
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    v3[23].Count = (unsigned __int64)&v3[22];
    v3[22].Count = (unsigned __int64)&v3[22];
  }
  v4 = (unsigned __int64)(unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (unsigned __int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == *(void **)(v8 + 160)
      && *(_DWORD *)a1 == *(_DWORD *)(v8 + 8)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(v8 + 12) )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20].Count = (unsigned __int64)CurrentServerSilo;
  v3->Count = *v5;
  *v5 = (unsigned __int64)v3;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
