/*
 * XREFs of EditionAreAllAccessGranted @ 0x1C0159D20
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00F5C8C (CheckGrantedAccess.c)
 */

__int64 __fastcall EditionAreAllAccessGranted(ACCESS_MASK a1, ACCESS_MASK a2)
{
  return CheckGrantedAccess(a1, a2);
}
