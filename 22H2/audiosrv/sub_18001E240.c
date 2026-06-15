/*
 * XREFs of sub_18001E240 @ 0x18001E240
 * Callers:
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_18005BBBC @ 0x18005BBBC (sub_18005BBBC.c)
 *     sub_180065320 @ 0x180065320 (sub_180065320.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 * Callees:
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18001E240(__int64 a1, __int64 *a2, int a3, _QWORD *a4, int a5)
{
  int v6; // r11d
  __int64 v7; // rax
  int v8; // r10d
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r11
  __int64 v17; // rax
  _OWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1 + 1720) )
  {
    v17 = sub_180118A38(v18, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v17);
  }
  v7 = *(_QWORD *)(a1 + 1728);
  v8 = *(_DWORD *)(v7 + 24LL * a3 + 16);
  if ( v8 <= 0 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v7 + 24LL * a3);
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16LL * v6) - *a4;
    if ( !v13 )
      v13 = *(_QWORD *)(v12 + 16LL * v6 + 8) - a4[1];
    if ( !v13 )
      break;
    if ( ++v6 >= v8 )
      goto LABEL_3;
  }
  if ( v6 == -1 )
  {
LABEL_3:
    v9 = *(_OWORD *)a4;
  }
  else
  {
    v18[0] = *(_OWORD *)a4;
    v14 = sub_18004B060(a1 + 1720, a3);
    v15 = sub_18011B780(v14, v18);
    if ( v15 == -1 )
    {
      v9 = xmmword_18015B730;
    }
    else
    {
      if ( v15 < 0 || v15 >= *(_DWORD *)(v16 + 16) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      v9 = *(_OWORD *)(*(_QWORD *)(v16 + 8) + 16LL * v15);
    }
  }
  v18[0] = v9;
  *(_OWORD *)a2 = v9;
  if ( !a5 )
  {
    v10 = *a2;
    if ( !*a2 )
      v10 = a2[1];
    if ( !v10 )
      *(_OWORD *)a2 = xmmword_18015B798;
  }
  return a2;
}
