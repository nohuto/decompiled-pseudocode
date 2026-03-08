/*
 * XREFs of HUBDSM_CheckingIfDeviceArmedForWakeOnResume @ 0x1C0023E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceArmedForWakeOnResume(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) & 2) != 0 ? 4089 : 4061;
}
