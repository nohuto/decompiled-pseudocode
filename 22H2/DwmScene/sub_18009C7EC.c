/*
 * XREFs of sub_18009C7EC @ 0x18009C7EC
 * Callers:
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_18009C7EC @ 0x18009C7EC (sub_18009C7EC.c)
 *     sub_180126F86 @ 0x180126F86 (sub_180126F86.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_18009C7EC @ 0x18009C7EC (sub_18009C7EC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009C7EC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18009C7EC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065AF4(v6 + 4, 0);
  }
  return result;
}
