/*
 * XREFs of SepCreateLogonSessionTrack @ 0x14076B35C
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x14076B330 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x140B69A18 (SepRmDbInitialization.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

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
