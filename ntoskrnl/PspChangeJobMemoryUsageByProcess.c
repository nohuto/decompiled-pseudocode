/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1407000C4 (MmAssignProcessToJob.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406FC2C4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406FEEF4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x140789F6C (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 i; // rdi
  int v28; // [rsp+24h] [rbp-64h]
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
  v29 = 0LL;
  v30 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1296LL);
  v28 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v30 )
  {
    ExAcquirePushLockExclusiveEx(v30 + 1248, 0LL);
    a3 = v34;
    a4 = v35;
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
        ExAcquirePushLockExclusiveEx(v10 + 1248, 0LL);
      v12 = *(_QWORD *)(v10 + 1192);
      v13 = v12 + a2;
      if ( a2 <= 0 )
      {
        if ( v13 > v12 )
        {
          PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL, 1LL);
          v25 = v10;
          if ( !v6 )
            v25 = v29;
          v6 = 0;
          v19 = v25;
          v29 = v25;
          goto LABEL_30;
        }
      }
      else if ( v13 < v12 )
      {
        PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL, 1LL);
        v24 = v10;
        if ( !v6 )
          v24 = v29;
        v6 = 0;
        v19 = v24;
        v29 = v24;
        goto LABEL_30;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1552);
      v32 = v16;
      if ( (v15 & 0x200000) != 0 && v16 > *(_QWORD *)(v10 + 688) )
        v14 = a2 > 0;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 680) && a2 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 1192) = v13;
LABEL_19:
        if ( *(_QWORD *)(v10 + 1200) )
        {
          v23 = 512LL;
          if ( a2 <= 0 )
            v23 = 0x8000LL;
          v28 |= PspGetJobMemoryUsageNotificationViolations(v10, v13, v16, v23);
        }
      }
LABEL_20:
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 704) )
          *(_QWORD *)(v10 + 704) = v13;
        v11 = *(_QWORD *)(v34 + 1608);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1248));
        KeAbPostRelease(v10 + 1248);
      }
      if ( v11 )
      {
        if ( v11 > *(_QWORD *)(v10 + 696) )
        {
          _m_prefetchw((const void *)(v10 + 696));
          v17 = *(_QWORD *)(v10 + 696);
          if ( v11 > v17 )
          {
            do
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 696), v11, v17);
            }
            while ( v17 != v18 && v11 > v17 );
          }
        }
      }
      v19 = v29;
LABEL_30:
      v10 = *(_QWORD *)(v10 + 1288);
      v20 = 1LL;
      if ( v10 == v35 )
      {
        if ( v6 )
        {
          if ( v28 )
            PspScheduleEnforcementWorker(v8, v16, 0x8000LL, 1LL);
        }
        else
        {
          for ( i = v31; i != v19; i = *(_QWORD *)(i + 1288) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1248, 0LL);
            *(_QWORD *)(i + 1192) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v8, 0LL, v20);
          }
        }
        goto LABEL_34;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 1192) = v13;
    }
    else if ( v6 )
    {
      v26 = v10;
      v6 = 0;
      goto LABEL_68;
    }
    v26 = v29;
LABEL_68:
    v29 = v26;
    if ( *(_QWORD *)(v10 + 552) && (*(_DWORD *)(v10 + 1088) & 0x200) != 0 && (*(_DWORD *)(v34 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v34 + 1120), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v34 + 1088), 1);
      v16 = v32;
    }
    if ( !v6 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_34:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1248));
    KeAbPostRelease(v8 + 1248);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
