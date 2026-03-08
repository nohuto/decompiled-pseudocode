/*
 * XREFs of Match @ 0x1C0057800
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     Match_32 @ 0x1C00578E8 (Match_32.c)
 *     Match_64 @ 0x1C0057A00 (Match_64.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
