/*
 * XREFs of SeAuditHeaderRequired @ 0x1403521D0
 * Callers:
 *     ObpAllocateObject @ 0x1406FF230 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D5C2 || byte_140C1D5C3 || byte_140C1D5DA || byte_140C1D5DB);
}
