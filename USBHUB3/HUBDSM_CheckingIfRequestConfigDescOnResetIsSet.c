/*
 * XREFs of HUBDSM_CheckingIfRequestConfigDescOnResetIsSet @ 0x1C0023680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfRequestConfigDescOnResetIsSet(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1644LL) & 0x10) != 0 ? 4089 : 4061;
}
