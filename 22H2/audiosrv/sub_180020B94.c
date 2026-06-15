/*
 * XREFs of sub_180020B94 @ 0x180020B94
 * Callers:
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180020B94(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rax
  BOOL v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // edi
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v5 = 0;
  v23 = xmmword_18015B798;
  if ( a2 || (unsigned int)((__int64 (*)(void))sub_1800234D0)() )
  {
    v6 = sub_1800233B0(a1 + 1656, v2);
    sub_1800230F0(v6);
    v7 = sub_1800233B0(a1 + 1672, v2);
    sub_1800230F0(v7);
    v8 = sub_1800233B0(a1 + 1688, v2);
    sub_1800230F0(v8);
    v9 = sub_1800234A0(a1 + 152, v2);
  }
  else
  {
    v9 = a1 + 168;
  }
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 8);
  if ( v11 <= 0 )
  {
LABEL_9:
    v10 = -1;
  }
  else
  {
    v12 = *(_QWORD *)v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 16LL * v10) - v23;
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 16LL * v10 + 8) - *((_QWORD *)&v23 + 1);
      if ( !v13 )
        break;
      if ( ++v10 >= v11 )
        goto LABEL_9;
    }
  }
  if ( v10 != -1 )
  {
    v14 = (unsigned int)sub_1800234D0(a1) || (_DWORD)v2 == 3;
    v15 = sub_1800233B0(a1 + 1672, v2);
    sub_18002732C(v15, &v20, v14);
    v16 = 0;
    v17 = v21;
    if ( v21 > 0 )
    {
      while ( 1 )
      {
        v23 = *(_OWORD *)sub_180023320(&v20, v16);
        v18 = sub_180023050(a1, (unsigned int)v2, 0LL);
        if ( (unsigned int)sub_180022EE0(v18, &v23) == -1 )
          break;
        if ( (int)++v16 >= v17 )
          goto LABEL_16;
      }
      v5 = 1;
    }
LABEL_16:
    v4 = v20;
  }
  if ( v4 )
    _o_free(v4);
  return v5;
}
