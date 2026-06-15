/*
 * XREFs of sub_18005BBBC @ 0x18005BBBC
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 */

__int64 *__fastcall sub_18005BBBC(int *a1, __int64 *a2)
{
  __int128 *v3; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rax
  int v7; // r8d
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = (__int128 *)(a1 + 3);
  v5 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), a1[2]);
  if ( (unsigned int)sub_180022EE0(v5, v3) == -1 )
  {
    v6 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), a1[2]);
    v3 = &xmmword_18015B798;
    if ( (unsigned int)sub_180022EE0(v6, &xmmword_18015B798) == -1 )
      v3 = &xmmword_18015B810;
  }
  v7 = a1[2];
  v8 = *(_QWORD *)a1;
  v10 = *v3;
  sub_18001E240(v8, a2, v7, &v10, 1);
  return a2;
}
