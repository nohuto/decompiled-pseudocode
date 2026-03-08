/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x140999A7C
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140829020 (PopLidSwitchReliabilityUpdateCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // esi
  unsigned __int8 v2; // bl

  v0 = byte_140C394E0;
  v1 = 0;
  v2 = byte_140C394E0;
  if ( !BYTE1(PopPowerButtonSuppression) && byte_140C394E0 == 1 )
    v2 = 2;
  if ( HIDWORD(PopPowerButtonSuppression) == v2 )
  {
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C394D0);
  }
  else
  {
    HIDWORD(PopPowerButtonSuppression) = v2;
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C394D0);
    v1 = -1073741822;
    if ( qword_140C6AC40 )
      v1 = qword_140C6AC40(v2);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
  }
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE3(PopBsdPowerTransitionExtension) = v0;
    BYTE4(PopBsdPowerTransitionExtension) = v2;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  return v1;
}
