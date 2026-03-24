/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x1407ABA14
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x1405B2FA4 (ExpSetLicenseTamperState.c)
 *     sub_1407ABC58 @ 0x1407ABC58 (sub_1407ABC58.c)
 *     sub_1407ABCBC @ 0x1407ABCBC (sub_1407ABCBC.c)
 *     ntoskrnl_24 @ 0x14094D630 (ntoskrnl_24.c)
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
  void *v10; // rcx
  char v11; // r15
  int v12; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h]
  char v16; // [rsp+A0h] [rbp+18h]

  v12 = 0;
  v16 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_BYTE *)(a1 + 46992) )
  {
    v12 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 46828) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a1 + 46824) )
      v3 = -1073741772;
    v12 = v3;
  }
  else
  {
    v16 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v4 = v12;
  if ( v12 >= 0 && v16 == 1 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( *(_BYTE *)(a1 + 46828) == 1 )
      goto LABEL_30;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v8 = sub_1407ABC58(a1);
      v12 = v8;
      if ( v8 < 0 )
        goto LABEL_30;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 46832);
      if ( !v7 )
        goto LABEL_28;
      v8 = v12;
    }
    if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      ExpSetLicenseTamperState(a1, 2);
    v9 = (_DWORD *)(a1 + 46824);
    v10 = (void *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 46824) )
    {
      LOBYTE(v6) = 1;
      v8 = sub_1407ABCBC(v7, v6, a1 + 24, 2925LL, a1 + 46824);
      v12 = v8;
      v10 = (void *)(a1 + 24);
    }
    if ( v8 >= 0 )
    {
      if ( *v9 )
      {
        qsort(v10, (unsigned int)*v9, 0x10uLL, sub_1407B1F20);
        *(_BYTE *)(a1 + 46828) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 46828) = 1;
        v12 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v8 != -1073741789 )
    {
LABEL_30:
      v11 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = v12;
      goto LABEL_12;
    }
LABEL_28:
    v12 = -1073741762;
    *(_BYTE *)(a1 + 46992) = 1;
    v15 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v15 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return v4;
}
