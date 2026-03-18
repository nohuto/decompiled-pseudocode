/*
 * XREFs of rimDestroyDeadzone @ 0x1C018F0F4
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C01940B0 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0194C38 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void rimDestroyDeadzone()
{
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      if ( RIMDeadzone::s_pRimDeadzoneInstance )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C029A168 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
