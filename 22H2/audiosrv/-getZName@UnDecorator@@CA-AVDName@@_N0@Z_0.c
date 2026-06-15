/*
 * XREFs of ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     sub_18005A4BC @ 0x18005A4BC (sub_18005A4BC.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnDecorator::getZName(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // r15d
  int i; // r12d
  int v11; // eax
  bool v12; // zf
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // esi
  int v24; // r12d
  int j; // r15d
  int v26; // eax
  bool v27; // zf
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-29h] BYREF
  int v32; // [rsp+38h] [rbp-21h]
  int v33; // [rsp+3Ch] [rbp-1Dh]
  __int64 v34; // [rsp+40h] [rbp-19h] BYREF
  __int64 v35; // [rsp+48h] [rbp-11h] BYREF
  __int64 v36; // [rsp+50h] [rbp-9h] BYREF
  int v37; // [rsp+58h] [rbp-1h]
  int v38; // [rsp+5Ch] [rbp+3h]
  __int128 v39; // [rsp+60h] [rbp+7h] BYREF
  __int64 v40; // [rsp+70h] [rbp+17h] BYREF
  __int64 v41; // [rsp+78h] [rbp+1Fh]

  v2 = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  if ( !*(_DWORD *)(a1 + 216) )
  {
LABEL_2:
    v4 = sub_18005A4BC(a1, 0LL, &v35);
    if ( v4 >= 0 )
    {
      v5 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 0LL);
      sub_180067BDC(&v36, v5);
      v6 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 0LL);
      if ( v37 == *(_DWORD *)(v6 + 8) )
      {
        v7 = *(_QWORD *)sub_1800234A0((unsigned __int64 *)(a1 + 1736), 0LL);
        v8 = sub_1800234A0((unsigned __int64 *)(a1 + 1736), 0LL);
        v4 = sub_18005A458(&v36, *(unsigned int *)(v8 + 8), v7);
        if ( v4 >= 0 )
        {
          v9 = 0;
          v3 = v35;
          if ( v37 <= 0 )
          {
LABEL_14:
            v16 = v2;
            v2 = 0LL;
            *(_QWORD *)(a1 + 232) = v16;
            v17 = v3;
            v3 = 0LL;
            *(_QWORD *)(a1 + 224) = v17;
          }
          else
          {
            while ( 1 )
            {
              v39 = *(_OWORD *)sub_180023320((__int64)&v36, v9);
              sub_18001E240(a1, &v40, 0, &v39, 0);
              for ( i = 0; ; ++i )
              {
                v11 = *(_DWORD *)(v3 + 8);
                v12 = i == v11;
                if ( i >= v11 )
                  break;
                v13 = (_QWORD *)sub_18004B9B4(v3, i);
                v14 = (_QWORD *)*v13;
                v15 = *(_QWORD *)*v13 - v40;
                if ( !v15 )
                  v15 = v14[1] - v41;
                if ( !v15 )
                {
                  v12 = i == *(_DWORD *)(v3 + 8);
                  break;
                }
              }
              if ( v12 )
                break;
              if ( ++v9 >= v37 )
                goto LABEL_14;
            }
            v4 = -2147023728;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    v3 = v35;
    goto LABEL_15;
  }
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v4 = sub_18005A4BC(a1, 3LL, &v34);
  if ( v4 < 0 )
  {
LABEL_22:
    sub_1800384A4(&v31);
    v2 = v34;
    goto LABEL_15;
  }
  v19 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 3uLL);
  sub_180067BDC(&v31, v19);
  v20 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 3uLL);
  if ( v32 != *(_DWORD *)(v20 + 8) )
  {
    v4 = -2147024882;
    goto LABEL_22;
  }
  v21 = *(_QWORD *)sub_1800234A0((unsigned __int64 *)(a1 + 1736), 3uLL);
  v22 = sub_1800234A0((unsigned __int64 *)(a1 + 1736), 3uLL);
  v4 = sub_18005A458(&v31, *(unsigned int *)(v22 + 8), v21);
  if ( v4 < 0 )
    goto LABEL_22;
  v23 = 0;
  v2 = v34;
  v24 = v32;
  if ( v32 <= 0 )
  {
LABEL_34:
    sub_1800384A4(&v31);
    goto LABEL_2;
  }
  while ( 1 )
  {
    v39 = *(_OWORD *)sub_180023320((__int64)&v31, v23);
    sub_18001E240(a1, &v40, 3, &v39, 0);
    for ( j = 0; ; ++j )
    {
      v26 = *(_DWORD *)(v2 + 8);
      v27 = j == v26;
      if ( j >= v26 )
        break;
      v28 = (_QWORD *)sub_18004B9B4(v2, j);
      v29 = (_QWORD *)*v28;
      v30 = *(_QWORD *)*v28 - v40;
      if ( !v30 )
        v30 = v29[1] - v41;
      if ( !v30 )
      {
        v27 = j == *(_DWORD *)(v2 + 8);
        break;
      }
    }
    if ( v27 )
      break;
    if ( ++v23 >= v24 )
      goto LABEL_34;
  }
  v4 = -2147023728;
  sub_1800384A4(&v31);
LABEL_15:
  sub_1800384A4(&v36);
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      _o_free(*(_QWORD *)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    sub_18006A148(v3, 16LL);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      _o_free(*(_QWORD *)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    sub_18006A148(v2, 16LL);
  }
  return (unsigned int)v4;
}
