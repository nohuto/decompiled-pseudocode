/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140880E7C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

ULONG __fastcall PopDirectedDripsDiagNotifySessionStart(__int64 a1, int a2)
{
  ULONG result; // eax
  ULONG v5; // ett

  _m_prefetchw(&PopDirectedDripsState);
  result = PopDirectedDripsState.HandleAttributes;
  do
  {
    v5 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)&PopDirectedDripsState, result, result);
  }
  while ( v5 != result );
  if ( (result & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    qword_140C38AC0 = a1;
    dword_140C38AC8 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
