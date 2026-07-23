/*
 * XREFs of SLGetSubscriptionPfn @ 0x14094E108
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407AB214 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     sub_1403B81DC @ 0x1403B81DC (sub_1403B81DC.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r15d
  PVOID v5; // rax
  int v7; // r12d
  ULONG_PTR v8; // rcx
  signed __int64 *v9; // rbx
  _OWORD *PoolWithTag; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+0h] [rbp-88h] BYREF
  int v15; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 *v18; // [rsp+48h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v20; // [rsp+A8h] [rbp+20h]

  v18 = &v14;
  v15 = 0;
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
        v15 = -1073741595;
        local_unwind(v18, &loc_14094E1D4);
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
    v15 = sub_1403B81DC(a1, (__int64)&qword_140983DC0, 0LL, 0LL, 0, (__int64)&NumberOfBytes);
    if ( v15 == -1073741789 )
    {
      v4 = NumberOfBytes;
      v5 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        v15 = -1073741595;
        goto LABEL_7;
      }
      v15 = sub_1403B81DC(a1, (__int64)&qword_140983DC0, 0LL, (__int64)v5, v4, (__int64)&NumberOfBytes);
    }
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      v7 = v15;
      if ( v15 >= 0 )
        memmove((void *)(a1 + 46858), P, v4);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741772 )
        *(_BYTE *)(a1 + 46856) = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 46840);
    v8 = a1 + 46840;
  }
  KeAbPostRelease(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  *a2 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v15;
}
