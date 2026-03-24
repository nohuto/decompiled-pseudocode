/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403AF158
 * Callers:
 *     PopThermalZoneAdd @ 0x14079AA40 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14079AC80 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E2C38 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408E2EE8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x140348B50 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
