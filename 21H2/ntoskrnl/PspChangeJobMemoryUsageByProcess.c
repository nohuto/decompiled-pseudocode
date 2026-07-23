/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1405DB0D0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MmAssignProcessToJob @ 0x1406F55A0 (MmAssignProcessToJob.c)
 * Callees:
 *     PspSendJobNotification @ 0x14024234C (PspSendJobNotification.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PspScheduleEnforcementWorker @ 0x1405DB440 (PspScheduleEnforcementWorker.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14067DD08 (PspUnlockJobMemoryLimitsExclusive.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 i; // rdi
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 1296) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v28 = 0;
  v29 = 0LL;
  v30 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v30 )
  {
    ExAcquirePushLockExclusiveEx(v30 + 1032, 0LL);
    a4 = v35;
    a3 = v34;
  }
  v8 = v30;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v35 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 1256);
  }
  v31 = v9;
  v10 = v9;
  if ( v9 != a4 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v8 )
        ExAcquirePushLockExclusiveEx(v10 + 1032, 0LL);
      v12 = *(_QWORD *)(v10 + 976);
      v13 = v12 + a2;
      if ( a2 <= 0 )
      {
        if ( v13 > v12 )
        {
          PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL);
          v26 = v10;
          if ( !v6 )
            v26 = v29;
          v6 = 0;
          v29 = v26;
          goto LABEL_28;
        }
      }
      else if ( v13 < v12 )
      {
        PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL);
        v25 = v10;
        if ( !v6 )
          v25 = v29;
        v6 = 0;
        v29 = v25;
        goto LABEL_28;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1336);
      v32 = v16;
      if ( (v15 & 0x200000) != 0 && v16 > *(_QWORD *)(v10 + 592) )
        v14 = a2 > 0;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 584) && a2 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 976) = v13;
LABEL_19:
        if ( v6 )
        {
          v17 = *(_QWORD *)(v10 + 984);
          if ( v17 )
          {
            v20 = *(_QWORD *)(v17 + 40);
            if ( (*(_DWORD *)v17 & 0x200000) == 0 )
              v16 = v13;
            v21 = 0;
            if ( v20 && a2 > 0 && v16 > v20 )
              v21 = 512;
            v22 = *(_QWORD *)(v17 + 32);
            if ( v22 && a2 <= 0 && v16 < v22 )
              v21 |= 0x8000u;
            v28 |= v21;
          }
        }
      }
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 608) )
          *(_QWORD *)(v10 + 608) = v13;
        v11 = *(_QWORD *)(v34 + 1608);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 1032);
        KeAbPostRelease(v10 + 1032);
      }
      if ( v11 && v11 > *(_QWORD *)(v10 + 600) )
      {
        _m_prefetchw((const void *)(v10 + 600));
        v23 = *(_QWORD *)(v10 + 600);
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 600), v11, v23);
        }
        while ( v23 != v24 && v11 > v23 );
      }
LABEL_28:
      v10 = *(_QWORD *)(v10 + 1072);
      if ( v10 == v35 )
      {
        if ( v6 )
        {
          if ( v28 )
            PspScheduleEnforcementWorker(v8, 1LL);
        }
        else
        {
          for ( i = v31; i != v29; i = *(_QWORD *)(i + 1072) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1032, 0LL);
            *(_QWORD *)(i + 976) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v8, 0LL);
          }
        }
        goto LABEL_32;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 976) = v13;
    }
    else if ( v6 )
    {
      v29 = v10;
      v6 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(v34 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v34 + 1120), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v34 + 1088), 1);
      v16 = v32;
    }
    goto LABEL_19;
  }
LABEL_32:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 1032);
    KeAbPostRelease(v8 + 1032);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
