/*
 * XREFs of sub_18006D254 @ 0x18006D254
 * Callers:
 *     sub_18006CFE8 @ 0x18006CFE8 (sub_18006CFE8.c)
 *     sub_18006D254 @ 0x18006D254 (sub_18006D254.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18006D254 @ 0x18006D254 (sub_18006D254.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D254(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D254(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    unknown_libname_101(v6 + 8);
  }
  return result;
}
