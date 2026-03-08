/*
 * XREFs of SeAuditHeaderRequired @ 0x14030F2A0
 * Callers:
 *     ObpAllocateObject @ 0x1407BA8D0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C37040 || byte_140C37041 || byte_140C37058 || byte_140C37059);
}
