/*
 * XREFs of SLGetSubscriptionPfn @ 0x1409F7548
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x14081A004 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     sub_1403890A8 @ 0x1403890A8 (sub_1403890A8.c)
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r14d
  void *v5; // rax
  volatile signed __int64 *v7; // rsi
  int v8; // r15d
  _OWORD *Pool2; // rcx
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  int v11; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  __int64 *v14; // [rsp+48h] [rbp-30h]
  unsigned int v15; // [rsp+90h] [rbp+18h] BYREF
  struct _KTHREAD *v16; // [rsp+98h] [rbp+20h]

  v14 = &v10;
  v11 = 0;
  P = 0LL;
  v4 = 0;
  v15 = 0;
  if ( *(_BYTE *)(a1 + 46856) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 46840);
    ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
    if ( *(_BYTE *)(a1 + 46856) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(256LL, 130LL, 542329939LL);
      P = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741595;
        local_unwind((ULONG_PTR)v14, (__int64)&loc_1409F7616);
      }
      *Pool2 = *(_OWORD *)(a1 + 46858);
      Pool2[1] = *(_OWORD *)(a1 + 46874);
      Pool2[2] = *(_OWORD *)(a1 + 46890);
      Pool2[3] = *(_OWORD *)(a1 + 46906);
      Pool2[4] = *(_OWORD *)(a1 + 46922);
      Pool2[5] = *(_OWORD *)(a1 + 46938);
      Pool2[6] = *(_OWORD *)(a1 + 46954);
      Pool2[7] = *(_OWORD *)(a1 + 46970);
      *((_WORD *)Pool2 + 64) = *(_WORD *)(a1 + 46986);
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  }
  else
  {
    v11 = sub_1403890A8(a1, (__int64)&qword_140A754B0, 0LL, 0LL, 0, (__int64)&v15);
    if ( v11 == -1073741789 )
    {
      v4 = v15;
      v5 = (void *)ExAllocatePool2(256LL, v15, 542329939LL);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        v11 = -1073741595;
        goto LABEL_7;
      }
      v11 = sub_1403890A8(a1, (__int64)&qword_140A754B0, 0LL, (__int64)v5, v4, (__int64)&v15);
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 46840);
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      v8 = v11;
      if ( v11 >= 0 )
        memmove((void *)(a1 + 46858), P, v4);
      if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741772 )
        *(_BYTE *)(a1 + 46856) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  }
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a2 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
