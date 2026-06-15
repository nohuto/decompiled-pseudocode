/*
 * XREFs of sub_180113800 @ 0x180113800
 * Callers:
 *     sub_1801133A0 @ 0x1801133A0 (sub_1801133A0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 */

__int64 __fastcall sub_180113800(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rsi
  _OWORD *v4; // rbx
  int v5; // edx
  _OWORD *v7; // rdi
  __int128 v8; // xmm1
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 2LL;
  v4 = a3;
  if ( (unsigned int)(a3[2] - 2) > 1 )
  {
    v5 = 640;
LABEL_3:
    sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\defaultdevice.h", -2147024809);
    return 2147942487LL;
  }
  if ( (int)a3[3] >= 9 )
  {
    v5 = 641;
    goto LABEL_3;
  }
  v7 = (_OWORD *)(a1 + 64);
  if ( *a3 != *(_DWORD *)(a1 + 64) )
  {
    v5 = 642;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 68) != a3[1] )
  {
    v5 = 643;
    goto LABEL_3;
  }
  if ( !sub_180111BF0((_QWORD *)(a1 + 16), a2) )
  {
    v5 = 644;
    goto LABEL_3;
  }
  do
  {
    *v7 = *v4;
    v7[1] = v4[1];
    v7[2] = v4[2];
    v7[3] = v4[3];
    v7[4] = v4[4];
    v7[5] = v4[5];
    v7[6] = v4[6];
    v7 += 8;
    v8 = v4[7];
    v4 += 8;
    *(v7 - 1) = v8;
    --v3;
  }
  while ( v3 );
  *v7 = *v4;
  *((_DWORD *)v7 + 4) = *((_DWORD *)v4 + 4);
  return 0LL;
}
