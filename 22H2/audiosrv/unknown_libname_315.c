/*
 * XREFs of unknown_libname_315 @ 0x1800F9BB4
 * Callers:
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 * Callees:
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_315(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1800FA128(v2);
  *a1 = 0LL;
  return result;
}
