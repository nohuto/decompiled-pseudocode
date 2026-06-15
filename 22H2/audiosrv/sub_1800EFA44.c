/*
 * XREFs of sub_1800EFA44 @ 0x1800EFA44
 * Callers:
 *     unknown_libname_121 @ 0x1800EFC78 (unknown_libname_121.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800EFA44(LPVOID **a1)
{
  LPVOID *v1; // rbx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    result = sub_18006A148(v1);
  }
  *a1 = 0LL;
  return result;
}
