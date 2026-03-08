/*
 * XREFs of ESM_CheckingIfIgnoreContextErrorOnEPStopFlagIsSet @ 0x1C0051660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfIgnoreContextErrorOnEPStopFlagIsSet(__int64 a1)
{
  return (*(_QWORD *)(**(_QWORD **)(a1 + 960) + 336LL) & 0x20) != 0 ? 33 : 21;
}
