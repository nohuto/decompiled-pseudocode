/*
 * XREFs of HUBDSM_CheckingIfSetIsochDelayShouldBeSkipped @ 0x1C0024C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSetIsochDelayShouldBeSkipped(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1644LL) & 0x1000) != 0 ? 4089 : 4061;
}
