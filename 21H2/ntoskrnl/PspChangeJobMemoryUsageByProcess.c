/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x140680630
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140318370 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x1402C3DCC (PspSendJobNotification.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406140A8 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x1406809A0 (PspScheduleEnforcementWorker.c)
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
  $C459BD0D405E8E46662177FB3D0A143F *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 i; // rdi
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  unsigned __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 1296) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  v30 = 0LL;
  v31 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v31 )
  {
    ExAcquirePushLockExclusiveEx(v31 + 1032, 0LL);
    a4 = v36;
    a3 = v35;
  }
  v8 = v31;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v36 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 1256);
  }
  v32 = v9;
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
          v27 = v10;
          if ( !v6 )
            v27 = v30;
          v6 = 0;
          v30 = v27;
          goto LABEL_28;
        }
      }
      else if ( v13 < v12 )
      {
        PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL);
        v26 = v10;
        if ( !v6 )
          v26 = v30;
        v6 = 0;
        v30 = v26;
        goto LABEL_28;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1336);
      v33 = v16;
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
            v29 |= v21;
          }
        }
      }
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 608) )
          *(_QWORD *)(v10 + 608) = v13;
        v11 = *(_QWORD *)(v35 + 1608);
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
      if ( v10 == v36 )
      {
        if ( v6 )
        {
          if ( v29 )
            PspScheduleEnforcementWorker(v8);
        }
        else
        {
          for ( i = v32; i != v30; i = *(_QWORD *)(i + 1072) )
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
      v30 = v10;
      v6 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(v35 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v35 + 1120), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v35 + 1088), 1);
      v16 = v33;
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
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v25 = &CurrentThread->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != v25 )
        KiCheckForKernelApcDelivery((__int64)v25);
    }
  }
  return v6;
}
