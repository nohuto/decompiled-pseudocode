/*
 * XREFs of sub_180022C90 @ 0x180022C90
 * Callers:
 *     sub_1800375D0 @ 0x1800375D0 (sub_1800375D0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 * Callees:
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 */

bool __fastcall sub_180022C90(__int64 a1, __int128 *a2, int a3)
{
  __int128 v4; // xmm0
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // edx
  _QWORD *v9; // r8
  __int64 v10; // rax
  bool v11; // zf
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v11 = (unsigned int)sub_180022EE0(a1, a2) == -1;
    return !v11;
  }
  v4 = *a2;
  v11 = *(_BYTE *)(a1 + 52) == 0;
  v13 = *a2;
  v5 = sub_180022DE0(a1, &v13, v11);
  if ( v5 == -1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      goto LABEL_9;
    v7 = *(_DWORD *)(v6 + 8);
    v8 = 0;
    if ( v7 <= 0 )
      goto LABEL_9;
    while ( 1 )
    {
      v9 = (_QWORD *)(*(_QWORD *)v6 + 16LL * v8);
      v10 = *v9 - v4;
      if ( *v9 == (_QWORD)v4 )
        v10 = v9[1] - *((_QWORD *)&v4 + 1);
      if ( !v10 )
        break;
      if ( ++v8 >= v7 )
        goto LABEL_9;
    }
    if ( v8 == -1 )
LABEL_9:
      v6 = 0LL;
    v11 = v6 == 0;
    return !v11;
  }
  return *(_QWORD *)sub_180023320(a1 + 32, v5) != 0LL;
}
