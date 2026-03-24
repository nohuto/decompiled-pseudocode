/*
 * XREFs of Match @ 0x1C0069A10
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     Match_32 @ 0x1C0069AF8 (Match_32.c)
 *     Match_64 @ 0x1C0069C1C (Match_64.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
