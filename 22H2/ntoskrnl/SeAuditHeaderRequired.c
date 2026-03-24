/*
 * XREFs of SeAuditHeaderRequired @ 0x1402D2980
 * Callers:
 *     ObpAllocateObject @ 0x14064C950 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D5E2 || byte_140C1D5E3 || byte_140C1D5FA || byte_140C1D5FB);
}
