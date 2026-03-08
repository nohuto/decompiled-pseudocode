/*
 * XREFs of HUBMUX_ReleaseDevicePowerReference @ 0x1C0011940
 * Callers:
 *     HUBDSM_FlushingHubPowerDownEventsForFailedDevice @ 0x1C001F460 (HUBDSM_FlushingHubPowerDownEventsForFailedDevice.c)
 *     HUBDSM_FailedDeviceHubSuspended @ 0x1C001F540 (HUBDSM_FailedDeviceHubSuspended.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReleaseDevicePowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  KIRQL v4; // al
  signed __int32 v5; // ebx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 2320LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  if ( (a1[60] & 8) != 0 )
  {
    _InterlockedAnd(a1 + 60, 0xFFFFFFFB);
    _InterlockedAnd(a1 + 60, 0xFFFFFFFD);
    _InterlockedOr(a1 + 60, 1u);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 28));
    v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
    if ( v5 == 1 )
      HUBSM_AddEvent(v1 + 1264, 2018);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
  }
}
