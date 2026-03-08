/*
 * XREFs of HUBDSM_UpdatingDeviceStatusToU1Disabled @ 0x1C0025630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_UpdatingDeviceStatusToU1Disabled(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 2216LL), 0xFFFFFFFB);
  return 4077LL;
}
