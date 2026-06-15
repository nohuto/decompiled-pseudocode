/*
 * XREFs of sub_1800271DC @ 0x1800271DC
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 *     sub_180048500 @ 0x180048500 (sub_180048500.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18011BA2C @ 0x18011BA2C (sub_18011BA2C.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

__int128 *__fastcall sub_1800271DC(unsigned __int64 *a1, __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r11
  int v8; // r8d
  int v9; // ecx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 *result; // rax
  __int64 v14; // r11

  if ( sub_1800234D0((__int64)a1) )
  {
    v4 = sub_1800233B0(a1 + 207, 0LL);
    sub_1800230F0(v4);
    v5 = sub_1800233B0(a1 + 209, 0LL);
    sub_1800230F0(v5);
    v6 = sub_1800233B0(a1 + 211, 0LL);
    sub_1800230F0(v6);
    v7 = sub_1800234A0(a1 + 19, 0LL);
  }
  else
  {
    v7 = (__int64)(a1 + 21);
  }
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 )
  {
    v9 = 0;
    if ( v8 <= 0 )
    {
LABEL_11:
      v9 = -1;
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v9);
        v11 = *v10 - 0x4FD1B4939E90EA20LL;
        if ( *v10 == 0x4FD1B4939E90EA20LL )
          v11 = v10[1] + 0x30A9569EEC81575FLL;
        if ( !v11 )
          break;
        if ( ++v9 >= v8 )
          goto LABEL_11;
      }
    }
    if ( v9 == -1 )
    {
      if ( (unsigned int)sub_180022EE0((__int64 *)v7, &xmmword_18015B810) == -1 )
        v12 = *(_OWORD *)sub_180023320(v14, 0);
      else
        v12 = xmmword_18015B810;
    }
    else
    {
      v12 = xmmword_18015B798;
    }
  }
  else
  {
    v12 = xmmword_18015B730;
  }
  result = a2;
  *a2 = v12;
  return result;
}
