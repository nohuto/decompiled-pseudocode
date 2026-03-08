/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403901F8
 * Callers:
 *     PopThermalZoneAdd @ 0x1408296E0 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14084BAD0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140980178 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v4[0] = 0LL;
      v4[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v4);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer, 0LL, v2, v3);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
