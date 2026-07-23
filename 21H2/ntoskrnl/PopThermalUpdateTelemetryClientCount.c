/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403A8D58
 * Callers:
 *     PopThermalZoneAdd @ 0x140791D90 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x140791FD0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408E2FF8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
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
