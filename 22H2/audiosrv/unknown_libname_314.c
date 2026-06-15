/*
 * XREFs of unknown_libname_314 @ 0x1800F9B8C
 * Callers:
 *     sub_1800FE683 @ 0x1800FE683 (sub_1800FE683.c)
 *     sub_1800FEAC6 @ 0x1800FEAC6 (sub_1800FEAC6.c)
 * Callees:
 *     sub_1800FA0E0 @ 0x1800FA0E0 (sub_1800FA0E0.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_314(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = sub_1800FA0E0();
  *a1 = 0LL;
  return result;
}
