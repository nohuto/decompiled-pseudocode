/*
 * XREFs of sub_1800375D0 @ 0x1800375D0
 * Callers:
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 * Callees:
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

bool __fastcall sub_1800375D0(__int64 a1, int a2, __int128 *a3)
{
  unsigned __int64 v4; // rdi
  int v6; // ebx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 0;
  if ( sub_1800234D0(a1) || (_DWORD)v4 == 3 )
    v6 = 1;
  v9 = *a3;
  v7 = sub_1800233B0((unsigned __int64 *)(a1 + 1656), v4);
  return sub_180022C90(v7, &v9, v6);
}
