/*
 * XREFs of sub_1800711F0 @ 0x1800711F0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

int __fastcall sub_1800711F0(void *a1, __int64 a2)
{
  char v3; // bl
  int result; // eax

  v3 = a2;
  result = unknown_libname_207((__int64)a1 + 8, a2);
  if ( v3 )
    return sub_18006A148(a1);
  return result;
}
