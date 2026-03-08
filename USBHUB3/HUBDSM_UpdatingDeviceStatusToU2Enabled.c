/*
 * XREFs of HUBDSM_UpdatingDeviceStatusToU2Enabled @ 0x1C0025690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_UpdatingDeviceStatusToU2Enabled(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 2216LL), 8u);
  return 4077LL;
}
