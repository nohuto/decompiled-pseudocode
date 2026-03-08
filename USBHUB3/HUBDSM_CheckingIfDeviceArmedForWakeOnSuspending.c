/*
 * XREFs of HUBDSM_CheckingIfDeviceArmedForWakeOnSuspending @ 0x1C0024380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceArmedForWakeOnSuspending(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) & 4) != 0 ? 4089 : 4061;
}
