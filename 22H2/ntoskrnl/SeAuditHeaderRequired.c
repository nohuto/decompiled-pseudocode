/*
 * XREFs of SeAuditHeaderRequired @ 0x1402AF890
 * Callers:
 *     ObpAllocateObject @ 0x14072FBB0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C37442 || byte_140C37443 || byte_140C3745A || byte_140C3745B);
}
