/*
 * XREFs of PopFxStopDeviceAccounting @ 0x14058975C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxPauseDeviceAccounting @ 0x140588B84 (PopFxPauseDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140590CC4 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x1405912FC (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x14098C04C (PopDiagTraceFxComponentAccounting.c)
 */

__int64 PopFxStopDeviceAccounting()
{
  __int64 result; // rax
  char v1; // r12
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rsi
  char v6; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int j; // esi
  unsigned __int64 v13; // r15
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  int v24; // eax
  _DWORD *v25; // r9
  char v26; // [rsp+38h] [rbp-D0h]
  _QWORD *v27; // [rsp+40h] [rbp-C8h]
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[6]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v30[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-20h]
  _OWORD v32[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v33; // [rsp+110h] [rbp+8h]

  memset(v29, 0, sizeof(v29));
  result = (unsigned int)PopFxAccountingGroup;
  v1 = 0;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( PopFxAccountingGroup )
  {
    if ( PopFxAccountingGroup == 1 )
      PopFxPauseDeviceAccounting();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v4 = *(_QWORD *)(i + 48);
      if ( v4 )
      {
        if ( *(_QWORD *)(i + 1200) )
        {
          LODWORD(v27) = i + 1192;
        }
        else
        {
          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)&cchOriginalDestLength);
          v27 = &DestinationString[1];
        }
        v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        if ( *(_DWORD *)(i + 616) )
        {
          v6 = 1;
          v29[0] = *(_OWORD *)(i + 632);
          v29[1] = *(_OWORD *)(i + 648);
          v29[2] = *(_OWORD *)(i + 664);
          v29[3] = *(_OWORD *)(i + 680);
          v29[4] = *(_OWORD *)(i + 696);
          v29[5] = *(_OWORD *)(i + 712);
          v1 = *(_DWORD *)(i + 612) < 5u;
        }
        else
        {
          v6 = 0;
        }
        KxReleaseSpinLock((volatile signed __int64 *)(i + 600));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v5);
        if ( v6 )
          PopDiagTraceFxDeviceAccounting(v4, (unsigned int)v29, (_DWORD)v27, v29[0], v1);
        v1 = 0;
        for ( j = 0; j < *(_DWORD *)(i + 828); v1 = 0 )
        {
          DestinationString[0] = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j);
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DestinationString[0] + 200LL));
          if ( *(_DWORD *)(DestinationString[0] + 216LL) )
          {
            v1 = 1;
            v29[0] = *(_OWORD *)(DestinationString[0] + 232LL);
            v29[1] = *(_OWORD *)(DestinationString[0] + 248LL);
            v29[2] = *(_OWORD *)(DestinationString[0] + 264LL);
            v29[3] = *(_OWORD *)(DestinationString[0] + 280LL);
            v29[4] = *(_OWORD *)(DestinationString[0] + 296LL);
            v29[5] = *(_OWORD *)(DestinationString[0] + 312LL);
            v26 = *(_DWORD *)(DestinationString[0] + 212LL) != -1;
          }
          else
          {
            v26 = 0;
          }
          KxReleaseSpinLock((volatile signed __int64 *)(DestinationString[0] + 200LL));
          if ( KiIrqlFlags )
          {
            v14 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
            {
              v15 = KeGetCurrentPrcb();
              v16 = v15->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v11 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick((__int64)v15);
            }
          }
          __writecr8(v13);
          if ( v1 )
            PopDiagTraceFxComponentAccounting(
              v4,
              *(_DWORD *)(DestinationString[0] + 16LL),
              (unsigned int)v29,
              (_DWORD)v27,
              v29[0],
              v26);
          ++j;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v18 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v19 = qword_140C3EA70;
    v20 = qword_140C3EA78;
    v32[0] = xmmword_140C3EA80;
    v21 = v18;
    v32[1] = xmmword_140C3EA90;
    v33 = qword_140C3EAA0;
    v30[0] = xmmword_140C3EAA8;
    v30[1] = xmmword_140C3EAB8;
    v31 = qword_140C3EAC8;
    KxReleaseSpinLock((volatile signed __int64 *)&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v25 = v23->SchedulerAssist;
        v11 = (v24 & v25[5]) == 0;
        v25[5] &= v24;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
    __writecr8(v21);
    return PopDiagTraceFxGlobalDeviceAccounting(v19, v20, v32, v30);
  }
  return result;
}
