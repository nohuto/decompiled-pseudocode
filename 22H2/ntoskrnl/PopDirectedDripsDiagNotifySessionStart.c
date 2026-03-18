/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140885C5C
 * Callers:
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
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
    qword_140C38EE0 = a1;
    dword_140C38EE8 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
