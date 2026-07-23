/*
 * XREFs of PopFxStopDeviceAccounting @ 0x14056D27C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140282874 (PopFxUpdateAccountingActiveTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxMergeActiveTimeAccounting @ 0x14056B960 (PopFxMergeActiveTimeAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140572154 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x14057276C (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1408EA2B0 (PopDiagTraceFxComponentAccounting.c)
 */

unsigned __int64 PopFxStopDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // rbx
  __int64 v4; // r12
  UNICODE_STRING *p_DestinationString; // r15
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // esi
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r8
  _DWORD *v19; // r10
  int v20; // eax
  KIRQL v21; // al
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  int v27; // eax
  _DWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // [rsp+30h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v34[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v35; // [rsp+68h] [rbp-60h]
  _OWORD v36[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+90h] [rbp-38h]

  result = (unsigned int)PopFxDeviceAccountingLevel;
  DestinationString = 0LL;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = PopFxDeviceList;
    v32 = MEMORY[0xFFFFF78000000008];
    while ( (ULONG_PTR *)v3 != &PopFxDeviceList )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
      {
        if ( *(_QWORD *)(v3 + 1200) )
        {
          p_DestinationString = (UNICODE_STRING *)(v3 + 1192);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&cchOriginalDestLength);
          p_DestinationString = &DestinationString;
        }
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 600));
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            PopFxUpdateAccountingActiveTime(v3 + 600, v2, 0x47868C00uLL);
            PopFxMergeActiveTimeAccounting(v7);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v3 + 600));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v12 = (v11 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v11;
                if ( v12 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
          PopDiagTraceFxDeviceAccounting(v4, v3 + 600, p_DestinationString, *(_QWORD *)(v3 + 632));
        }
        v13 = 0;
        if ( *(_DWORD *)(v3 + 828) )
        {
          do
          {
            v14 = *(_QWORD *)(*(_QWORD *)(v3 + 832) + 8LL * v13);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 200));
            if ( (PopFxDeviceAccountingLevel & 1) != 0 )
            {
              PopFxUpdateAccountingActiveTime(v14 + 200, v32, 0x47868C00uLL);
              PopFxMergeActiveTimeAccounting(v16);
            }
            KxReleaseSpinLock((PKSPIN_LOCK)(v14 + 200));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v17 = KeGetCurrentIrql();
                if ( v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
                {
                  v18 = KeGetCurrentPrcb();
                  v19 = v18->SchedulerAssist;
                  v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                  v12 = (v20 & v19[5]) == 0;
                  v19[5] &= v20;
                  if ( v12 )
                    KiRemoveSystemWorkPriorityKick((__int64)v18);
                }
              }
            }
            __writecr8(v15);
            PopDiagTraceFxComponentAccounting(
              v4,
              *(_DWORD *)(v14 + 16),
              v14 + 200,
              (_DWORD)p_DestinationString,
              *(_QWORD *)(v14 + 232));
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v3 + 828) );
          v2 = v32;
        }
      }
      v3 = *(_QWORD *)v3;
    }
    v21 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v22 = qword_140C24850;
    v23 = qword_140C24858;
    v36[0] = xmmword_140C24860;
    v24 = v21;
    v36[1] = xmmword_140C24870;
    v37 = qword_140C24880;
    v34[0] = xmmword_140C24888;
    v34[1] = xmmword_140C24898;
    v35 = qword_140C248A8;
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v28 = v26->SchedulerAssist;
          v12 = (v27 & v28[5]) == 0;
          v28[5] &= v27;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
      }
    }
    __writecr8(v24);
    PopDiagTraceFxGlobalDeviceAccounting(v22, v23, v36, v34);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
  }
  return result;
}
