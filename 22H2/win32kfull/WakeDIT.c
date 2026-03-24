/*
 * XREFs of WakeDIT @ 0x1C010BA54
 * Callers:
 *     RequestInputSinkInfoFromPoint @ 0x1C0004CF4 (RequestInputSinkInfoFromPoint.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0058830 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C010B9F0 (EditionInitiateMouseEventProcessing.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01D93D0 (EditionExtensibility_WakeMITForInterceptCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeDIT(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( gbDIT )
  {
    _m_prefetchw(&gdwDITWakeReason);
    if ( (_InterlockedOr(&gdwDITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghDITEvent, 0LL);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwDitIgnoredWakeReasons, a1);
  }
  return result;
}
