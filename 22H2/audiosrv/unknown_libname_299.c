/*
 * XREFs of unknown_libname_299 @ 0x1800E33EC
 * Callers:
 *     sub_18007BCA0 @ 0x18007BCA0 (sub_18007BCA0.c)
 * Callees:
 *     sub_1800E3C78 @ 0x1800E3C78 (sub_1800E3C78.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_299(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1800E3C78(v2);
  *a1 = 0LL;
  return result;
}
