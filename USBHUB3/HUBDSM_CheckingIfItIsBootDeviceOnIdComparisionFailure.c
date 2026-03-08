/*
 * XREFs of HUBDSM_CheckingIfItIsBootDeviceOnIdComparisionFailure @ 0x1C001F1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfItIsBootDeviceOnIdComparisionFailure(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) & 0x20) != 0 ? 4089 : 4061;
}
