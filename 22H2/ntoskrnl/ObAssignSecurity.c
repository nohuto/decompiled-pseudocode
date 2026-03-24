/*
 * XREFs of ObAssignSecurity @ 0x140772FF0
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x1406DBD9C (ObpAssignSecurity.c)
 */

__int64 __fastcall ObAssignSecurity(__int64 a1, __int64 a2, void *a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}
