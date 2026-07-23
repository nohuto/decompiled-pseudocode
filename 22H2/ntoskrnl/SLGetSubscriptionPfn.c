/*
 * XREFs of SLGetSubscriptionPfn @ 0x14094DF88
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     sub_1403B7A0C @ 0x1403B7A0C (sub_1403B7A0C.c)
 *     _local_unwind @ 0x1403D1490 (_local_unwind.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r15d
  PVOID v5; // rax
  int v7; // r12d
  ULONG_PTR v8; // rcx
  signed __int64 *v9; // rbx
  _OWORD *PoolWithTag; // rcx
  __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  int v12; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 *v15; // [rsp+48h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v17; // [rsp+A8h] [rbp+20h]

  v15 = &v11;
  v12 = 0;
  P = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( *(_BYTE *)(a1 + 46856) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (signed __int64 *)(a1 + 46840);
    ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
    if ( *(_BYTE *)(a1 + 46856) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x82uLL, 0x20534C53u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741595;
        local_unwind(v15, &loc_14094E054);
      }
      *PoolWithTag = *(_OWORD *)(a1 + 46858);
      PoolWithTag[1] = *(_OWORD *)(a1 + 46874);
      PoolWithTag[2] = *(_OWORD *)(a1 + 46890);
      PoolWithTag[3] = *(_OWORD *)(a1 + 46906);
      PoolWithTag[4] = *(_OWORD *)(a1 + 46922);
      PoolWithTag[5] = *(_OWORD *)(a1 + 46938);
      PoolWithTag[6] = *(_OWORD *)(a1 + 46954);
      PoolWithTag[7] = *(_OWORD *)(a1 + 46970);
      *((_WORD *)PoolWithTag + 64) = *(_WORD *)(a1 + 46986);
    }
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    v8 = (ULONG_PTR)v9;
  }
  else
  {
    v12 = sub_1403B7A0C(a1, (__int64)&qword_140983C50, 0LL, 0LL, 0, (__int64)&NumberOfBytes);
    if ( v12 == -1073741789 )
    {
      v4 = NumberOfBytes;
      v5 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        v12 = -1073741595;
        goto LABEL_7;
      }
      v12 = sub_1403B7A0C(a1, (__int64)&qword_140983C50, 0LL, (__int64)v5, v4, (__int64)&NumberOfBytes);
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      v7 = v12;
      if ( v12 >= 0 )
        memmove((void *)(a1 + 46858), P, v4);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741772 )
        *(_BYTE *)(a1 + 46856) = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    v8 = a1 + 46840;
  }
  KeAbPostRelease(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a2 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v12;
}
