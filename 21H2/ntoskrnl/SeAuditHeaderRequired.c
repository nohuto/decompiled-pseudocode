/*
 * XREFs of SeAuditHeaderRequired @ 0x1402A7BE0
 * Callers:
 *     ObpAllocateObject @ 0x14072E5D0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1B3A0 || byte_140C1B3A1 || byte_140C1B3B8 || byte_140C1B3B9);
}
