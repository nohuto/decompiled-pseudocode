/*
 * XREFs of PopDirectedDripsNotify @ 0x140872AF4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099057C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140990734 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140999010 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099C874 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1402F2F84 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402F2FE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1402F3054 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x140584A94 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x140880DE0 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x140880E7C (PopDirectedDripsDiagNotifySessionStart.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsSendSessionData @ 0x140980CA8 (PopDirectedDripsSendSessionData.c)
 */

ULONG __fastcall PopDirectedDripsNotify(int a1, char *a2)
{
  ULONG result; // eax
  __int64 v4; // r8
  ULONG v5; // ett
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  ULONG v16; // ett
  unsigned int v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  result = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = result;
    v5 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)&PopDirectedDripsState, result, result);
  }
  while ( v5 != result );
  if ( (result & 1) == 0 )
    return result;
  v6 = 0;
  if ( a1 > 5 )
  {
    v7 = (unsigned int)(a1 - 6);
    if ( !(_DWORD)v7 )
      return PopDirectedDripsEngage(v7, *a2, v4);
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return result;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
        if ( !--dword_140C3EE48 )
          PopDirectedDripsClearDisengageReason(1);
      }
      else
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
        if ( ++dword_140C3EE48 == 1 )
          PopDirectedDripsSetDisengageReason(1);
      }
      goto LABEL_18;
    }
    _m_prefetchw(&PopDirectedDripsState);
    result = PopDirectedDripsState.HandleAttributes;
    do
    {
      v16 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)&PopDirectedDripsState, result, result);
    }
    while ( v16 != result );
    if ( (result & 0x800) != 0 )
      return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C3EDB8, 0LL);
  }
  else
  {
    if ( a1 == 5 )
    {
      v6 = 0x2000;
LABEL_31:
      v14 = v6 | 0x1000;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
      if ( qword_140C3EF90 == *(_QWORD *)a2 )
      {
        if ( dword_140C3EF98 )
        {
          _m_prefetchw(&PopDirectedDripsState);
          v15 = v14 | PopDirectedDripsState.HandleAttributes;
          if ( (v14 & _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, v14)) != v14 || dword_140C3EDB4 )
            PopQueueDirectedDripsWork(v15, 0x800uLL);
        }
      }
LABEL_18:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C3EE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C3EE08);
      return KeAbPostRelease((ULONG_PTR)&qword_140C3EE08);
    }
    if ( !a1 )
    {
      dword_140C3EDFC = 0;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
      qword_140C3EF90 = *(_QWORD *)a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C3EE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C3EE08);
      KeAbPostRelease((ULONG_PTR)&qword_140C3EE08);
      PopDirectedDripsQueryMitigationStatus(&v17, 0LL, 0LL);
      return PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v17);
    }
    v10 = a1 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_26;
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          return result;
LABEL_26:
        dword_140C3EDB4 = 0;
        return result;
      }
      goto LABEL_31;
    }
    v13 = *(_QWORD *)a2;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
    *(_DWORD *)(v13 + 208) = dword_140C3EDFC;
    qword_140C3EF90 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C3EE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C3EE08);
    KeAbPostRelease((ULONG_PTR)&qword_140C3EE08);
    return PopDirectedDripsSendSessionData();
  }
  return result;
}
