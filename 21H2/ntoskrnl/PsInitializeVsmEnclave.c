/*
 * XREFs of PsInitializeVsmEnclave @ 0x14090E0B0
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408D31F8 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     VslInitializeEnclave @ 0x14088FCFC (VslInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, __int64 a2, ULONG a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *PoolWithQuotaTag; // rsi
  volatile signed __int64 *v11; // r15
  int v12; // ecx
  int v13; // ebp
  __int64 v14; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  CurrentThread = KeGetCurrentThread();
  PoolWithQuotaTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v12 = *(_DWORD *)(a1 + 44);
  if ( v12 )
  {
    if ( v12 == 1 )
      v13 = -1073740528;
    else
      v13 = -1073740526;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a1 + 76) )
  {
    LODWORD(v14) = 0;
LABEL_12:
    v13 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), a1 + 80, (struct _MDL *)a2, a3, a4, a5, (_DWORD *)(a1 + 40));
    if ( v13 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v14;
        *PoolWithQuotaTag = 0LL;
        if ( (unsigned int)v14 > 1 )
        {
          v16 = PoolWithQuotaTag + 5;
          v17 = PoolWithQuotaTag;
          v18 = (unsigned int)(v14 - 1);
          do
          {
            *v16 = v17;
            v17 += 5;
            v16 += 5;
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a1 + 120) = PoolWithQuotaTag;
        v19 = &PoolWithQuotaTag[5 * (unsigned int)(v14 - 1)];
        PoolWithQuotaTag = 0LL;
        *(_QWORD *)(a1 + 128) = v19;
      }
      *(_DWORD *)(a1 + 44) = 1;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      v13 = 0;
      *(_QWORD *)(a1 + 56) = a1 + 56;
    }
    goto LABEL_19;
  }
  if ( a3 != 8 || *(_DWORD *)a2 != 8 )
    return 3221225476LL;
  v14 = *(unsigned int *)(a2 + 4);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 40 * v14, 0x74457350u);
  if ( PoolWithQuotaTag )
    goto LABEL_12;
  v13 = -1073741670;
LABEL_19:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v13;
}
