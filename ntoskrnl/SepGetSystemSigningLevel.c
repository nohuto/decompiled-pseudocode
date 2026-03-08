/*
 * XREFs of SepGetSystemSigningLevel @ 0x14078A520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char SepGetSystemSigningLevel()
{
  char v0; // cl

  v0 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    return SeILSigningPolicyRuntime;
  return v0;
}
