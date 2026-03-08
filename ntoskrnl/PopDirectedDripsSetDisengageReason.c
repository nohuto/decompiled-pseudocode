/*
 * XREFs of PopDirectedDripsSetDisengageReason @ 0x1402F2F84
 * Callers:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140584B8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1409991B0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F3054 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsSetDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C3EE04);
  v2 = _InterlockedOr(&dword_140C3EE04, 1 << a1);
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) == 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
