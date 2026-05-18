/*
 * XREFs of sub_18004073C @ 0x18004073C
 * Callers:
 *     sub_18003F3C0 @ 0x18003F3C0 (sub_18003F3C0.c)
 *     sub_180063BA4 @ 0x180063BA4 (sub_180063BA4.c)
 * Callees:
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 *__fastcall sub_18004073C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rdi

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v7 = sub_18002B7A0(a1, a3);
  sub_180022FE0((__int64)(v7 + 4), 0);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
