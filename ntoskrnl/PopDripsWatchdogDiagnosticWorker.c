/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x140999490
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PopDeepSleepEnabled @ 0x1402BBA98 (PopDeepSleepEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopCalculateIdleInformation @ 0x1403C2C3C (PopCalculateIdleInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14058F750 (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1409993BC (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409996C8 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140999904 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14099E044 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14099E1CC (PopDripsWatchdogTakeAction.c)
 */

char __fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rdi
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // r14
  struct _LIST_ENTRY *Flink; // rax
  ULONG v8; // ecx
  OWNER_ENTRY OwnerEntry; // xmm0
  ULONG NumberOfSharedWaiters; // eax
  __int64 v11; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int OwnerTable; // r12d
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-21h] BYREF
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int128 v20; // [rsp+50h] [rbp-9h]
  OWNER_ENTRY v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h]
  ULONG v23; // [rsp+78h] [rbp+1Fh]

  p_ActiveEntries = &Resource[3].ActiveEntries;
  v22 = 0LL;
  v23 = 0;
  v21 = 0LL;
  v19 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0
    && (p_ActiveEntries[45] & 2) != 0
    && (unsigned __int64)(v3 - *((_QWORD *)p_ActiveEntries + 23)) >= 0x1312D00 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    v17 = 0;
    v18 = 0LL;
    v16 = 0;
    PopCalculateIdleInformation((__int64)&v19);
    PopDripsWatchdogUpdateMetrics(
      (_DWORD)Resource,
      v3,
      (unsigned int)&v19,
      (unsigned int)&v17,
      (__int64)&v18,
      (__int64)&v16);
    v5 = 0LL;
    v6 = 0;
    if ( (_QWORD)v20 != -1LL )
    {
      Flink = Resource[6].SystemResourcesList.Flink;
      if ( Flink != (struct _LIST_ENTRY *)-1LL )
      {
        v6 = 1;
        v5 = v20 - (_QWORD)Flink;
      }
    }
    v8 = p_ActiveEntries[45];
    if ( (v8 & 4) == 0 )
    {
      OwnerEntry = Resource[5].OwnerEntry;
      NumberOfSharedWaiters = Resource[5].NumberOfSharedWaiters;
      v11 = *(_QWORD *)&Resource[5].ActiveEntries;
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      OwnerTable = (unsigned int)Resource[6].OwnerTable;
      p_ActiveEntries[45] = v8 | 4;
      v21 = OwnerEntry;
      v23 = NumberOfSharedWaiters;
      v22 = v11;
      PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v16 )
      {
        if ( !v17 && PopDeepSleepEnabled() )
          PopDeepSleepWatchdogTakeAction(&v21, Flink_high);
      }
      else if ( !qword_140CF78D8 )
      {
        PopDripsWatchdogTakeAction(&v21, Flink_high, OwnerTable);
      }
      PopDiagTraceCsDripsDivergence(v6, v18, v5);
      if ( v6 )
        PopDripsWatchdogCheckHwDivergence(v5, v18);
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      p_ActiveEntries[45] &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
