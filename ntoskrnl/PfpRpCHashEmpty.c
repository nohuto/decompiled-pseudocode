/*
 * XREFs of PfpRpCHashEmpty @ 0x14084C7DC
 * Callers:
 *     PfpRpControlRequestReset @ 0x14084C784 (PfpRpControlRequestReset.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  int v3; // r9d
  int v4; // r10d
  unsigned int v7; // eax
  unsigned int v8; // eax
  volatile signed __int64 *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  HIDWORD(v14) = 0;
  v3 = 1 << *(_DWORD *)(a2 + 8);
  v4 = -1;
  v7 = v3;
  if ( v3 )
  {
    do
    {
      ++v4;
      v7 >>= 1;
    }
    while ( v7 );
  }
  LODWORD(v14) = 0;
  v8 = v4 + 1;
  if ( ((v3 - 1) & v3) == 0 )
    v8 = v4;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = v8;
  v9 = (volatile signed __int64 *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v11 = KeGetCurrentThread();
  v12 = *(void **)a2;
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  *(_OWORD *)a2 = v13;
  *(_QWORD *)(a2 + 16) = v14;
  if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
