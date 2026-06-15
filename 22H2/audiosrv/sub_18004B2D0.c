/*
 * XREFs of sub_18004B2D0 @ 0x18004B2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_18001F7C0 @ 0x18001F7C0 (sub_18001F7C0.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18004BA74 @ 0x18004BA74 (sub_18004BA74.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

char __fastcall sub_18004B2D0(__int64 a1, __int16 **a2)
{
  __int16 *v2; // r15
  __int64 v4; // r13
  unsigned int v5; // ebp
  char v6; // bl
  __int64 v7; // rcx
  int **v8; // rax
  int *v9; // rdi
  __int64 v10; // rax
  int v12; // esi
  __int64 v13; // r14
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  if ( sub_18001F7C0(*a2) && (unsigned __int8)sub_18004BA74(*(_QWORD *)(a1 + 8), v2 + 12) )
    return 1;
  v4 = *(_QWORD *)(a1 + 8);
  v14 = *(_OWORD *)(a1 + 16);
  sub_18001E240(v4, v15, 0, &v14, 0);
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 224);
    if ( (signed int)v5 >= *(_DWORD *)(v7 + 8) )
      return 0;
    v8 = (int **)sub_18004B9B4(v7, v5);
    v9 = *v8;
    v10 = *(_QWORD *)*v8 - v15[0];
    if ( !v10 )
      v10 = *((_QWORD *)v9 + 1) - v15[1];
    if ( !v10 )
    {
      v12 = 0;
      if ( v9[6] > 0 )
        break;
    }
LABEL_7:
    ++v5;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 < 0 || v12 >= v9[6] )
    {
      sub_1800BB2C8(3221225612LL);
      JUMPOUT(0x18004B3EBLL);
    }
    if ( (unsigned int)sub_18004B400(v2, **(_QWORD **)(v13 + *((_QWORD *)v9 + 2))) )
      return v6;
    ++v12;
    v13 += 8LL;
    if ( v12 >= v9[6] )
      goto LABEL_7;
  }
}
