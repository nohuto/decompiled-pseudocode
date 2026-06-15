/*
 * XREFs of unknown_libname_208 @ 0x1800464A8
 * Callers:
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 * Callees:
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_208(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return sub_180046F70(result);
  return result;
}
