/*
 * XREFs of SepGetSystemSigningLevel @ 0x1405D0080
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
