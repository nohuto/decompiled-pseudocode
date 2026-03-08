/*
 * XREFs of HUBDSM_CheckingIfSetSelShouldBeSkipped @ 0x1C0024CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSetSelShouldBeSkipped(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1644LL) & 0x100) != 0 ? 4089 : 4061;
}
