/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x1406A41F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsSetCurrentThreadPrefetching @ 0x1406A47E0 (PsSetCurrentThreadPrefetching.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406A4DB4 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int32 v7; // eax
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD **)(v1 + 8);
  v3 = v2[8];
  v4 = v2[9];
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v7 >= *(_DWORD *)(v1 + 32) )
      break;
    v8 = v7;
    v9 = *(void **)(v3 + 8LL * v7);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    v10 = *(unsigned int *)(v4 + 4 * v8);
    if ( (int)v10 >= 0 )
    {
      LOBYTE(v5) = 1;
      PfSnCleanupPrefetchSectionInfo(v2[7] + 56 * v10, v2, v5);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
