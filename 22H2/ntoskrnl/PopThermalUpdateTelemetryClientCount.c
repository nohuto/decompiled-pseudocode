/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140387BCC
 * Callers:
 *     PopThermalZoneAdd @ 0x1408247B0 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14084EE80 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140982F78 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140983228 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
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
  PopReleaseRwLock(&PopThermalTelemetryLock);
}
