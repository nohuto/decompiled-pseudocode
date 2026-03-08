/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x140980630
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099507C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1402F3054 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099C874 (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett
  unsigned int v6; // ebx
  __int64 v7; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v5 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v5 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    PopDeepSleepSetDisengageReason(8u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C3EE08, 0LL);
    byte_140C3EE11 = a2;
    dword_140C3EE14 = a1;
    byte_140C3EE18 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C3EE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C3EE08);
    KeAbPostRelease((ULONG_PTR)&qword_140C3EE08);
    v6 = 259;
    if ( a2 )
      PopDirectedDripsUmMarkTestDevices();
  }
  else
  {
    return 0;
  }
  return v6;
}
