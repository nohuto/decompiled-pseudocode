/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x14081A5DC
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x14081A004 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x140607004 (ExpSetLicenseTamperState.c)
 *     sub_14081A850 @ 0x14081A850 (sub_14081A850.c)
 *     sub_14081A8B4 @ 0x14081A8B4 (sub_14081A8B4.c)
 *     ntoskrnl_24 @ 0x1409F6C30 (ntoskrnl_24.c)
 */

__int64 __fastcall ExpLoadAndSortLicensingCacheDescriptors(__int64 a1)
{
  signed __int64 *v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r14d
  _DWORD *v9; // r12
  char v10; // al
  int v11; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v13; // [rsp+48h] [rbp-40h]
  char v14; // [rsp+98h] [rbp+10h]
  char v15; // [rsp+A0h] [rbp+18h]

  v11 = 0;
  v15 = 0;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_BYTE *)(a1 + 46992) )
  {
    v11 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 46828) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a1 + 46824) )
      v3 = -1073741772;
    v11 = v3;
  }
  else
  {
    v15 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v4 = v11;
  if ( v11 >= 0 && v15 == 1 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( *(_BYTE *)(a1 + 46828) != 1 )
    {
      v7 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 )
      {
        v8 = sub_14081A850(a1);
        v11 = v8;
        if ( v8 >= 0 )
        {
LABEL_18:
          if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
            ExpSetLicenseTamperState(a1, 2);
          v9 = (_DWORD *)(a1 + 46824);
          if ( !*(_DWORD *)(a1 + 46824) )
          {
            LOBYTE(v6) = 1;
            v8 = sub_14081A8B4(v7, v6, a1 + 24, 2925LL, a1 + 46824);
            v11 = v8;
          }
          if ( v8 < 0 )
          {
            if ( v8 == -1073741789 )
            {
              v11 = -1073741762;
              *(_BYTE *)(a1 + 46992) = 1;
              v14 = 1;
            }
          }
          else if ( *v9 )
          {
            qsort((void *)(a1 + 24), (unsigned int)*v9, 0x10uLL, sub_140831820);
            *(_BYTE *)(a1 + 46828) = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 46828) = 1;
            v11 = -1073741772;
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 46832);
        if ( v7 )
        {
          v8 = v11;
          goto LABEL_18;
        }
        v11 = -1073741762;
        *(_BYTE *)(a1 + 46992) = 1;
        v14 = 1;
      }
    }
    v10 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v4 = v11;
  }
  if ( v14 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return v4;
}
