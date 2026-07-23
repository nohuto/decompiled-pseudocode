/*
 * XREFs of SeAuditHeaderRequired @ 0x14035CF20
 * Callers:
 *     ObpAllocateObject @ 0x140716610 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C1D5E2 || byte_140C1D5E3 || byte_140C1D5FA || byte_140C1D5FB);
}
