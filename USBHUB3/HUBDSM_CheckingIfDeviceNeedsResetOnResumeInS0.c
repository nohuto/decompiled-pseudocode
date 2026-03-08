/*
 * XREFs of HUBDSM_CheckingIfDeviceNeedsResetOnResumeInS0 @ 0x1C0023E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceNeedsResetOnResumeInS0(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1644LL) & 0x2000) != 0 ? 4089 : 4061;
}
