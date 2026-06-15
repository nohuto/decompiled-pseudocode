/*
 * XREFs of unknown_libname_302 @ 0x1800EA490
 * Callers:
 *     unknown_libname_119 @ 0x1800EE05A (unknown_libname_119.c)
 * Callees:
 *     sub_1800EA77C @ 0x1800EA77C (sub_1800EA77C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_302(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1800EA77C(v2);
  *a1 = 0LL;
  return result;
}
