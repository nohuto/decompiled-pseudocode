/*
 * XREFs of sub_18005B9E8 @ 0x18005B9E8
 * Callers:
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 * Callees:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_1800488A0 @ 0x1800488A0 (sub_1800488A0.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180119ED8 @ 0x180119ED8 (sub_180119ED8.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005B9E8(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 *v9; // rax
  int v10; // eax
  int v11; // ebx
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // esi
  __int64 *v22; // rax
  int v23; // eax
  __int64 *v24; // rsi
  unsigned int v25; // ebx
  __int128 **v26; // r12
  _OWORD *v27; // rdx
  int v28; // r12d
  int v29; // eax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36[2]; // [rsp+40h] [rbp-79h] BYREF
  int v37[4]; // [rsp+50h] [rbp-69h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+60h] [rbp-59h] BYREF
  __m256i v39; // [rsp+68h] [rbp-51h]
  __int64 (__fastcall ***v40)(); // [rsp+98h] [rbp-21h]
  __m256i v41; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v42; // [rsp+C0h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+5Fh]

  v2 = a2;
  v42 = xmmword_180160C78;
  v41.m256i_i64[0] = (__int64)a1;
  *(_OWORD *)&v41.m256i_u64[1] = xmmword_180160C78;
  v41.m256i_i32[6] = a2;
  v4 = a1 + 19;
  if ( (unsigned int)sub_180022F30(a1, a2) )
  {
    if ( *(_DWORD *)(sub_1800234A0(v4, v2) + 8) == 1 )
    {
      v5 = 209LL;
      if ( (_DWORD)v2 != 1 )
        v5 = 211LL;
      v6 = sub_1800233B0(&a1[v5], v2);
      v7 = v6;
      *(_OWORD *)v37 = xmmword_18015B810;
      v8 = sub_180022D60(v6, (__int128 *)v37, 1LL);
      if ( v8 && *(_DWORD *)(v8 + 48) && (unsigned int)sub_1800488A0((__int64)a1) == 9 )
      {
        v22 = (__int64 *)sub_1800234A0(v4, v2);
        v23 = sub_180022EE0(v22, &xmmword_18015B810);
        v38 = off_180155CC8;
        v39 = v41;
        v40 = &v38;
        *(_OWORD *)v37 = xmmword_18015B810;
        v11 = sub_180059784(v7, v37, 1, (int)&v42, 1, v23 != -1, (__int64)&v38);
        if ( v11 < 0 )
        {
          v15 = 1513;
          goto LABEL_13;
        }
        return 0LL;
      }
      v9 = (__int64 *)sub_1800234A0(v4, v2);
      v10 = sub_180022EE0(v9, &xmmword_18015B810);
      v40 = 0LL;
      *(_OWORD *)v37 = xmmword_18015B810;
      v11 = sub_180059784(v7, v37, 1, (int)&v42, 1, v10 != -1, (__int64)&v38);
      if ( v11 >= 0 )
        return 0LL;
      v15 = 1518;
      goto LABEL_13;
    }
    *(_QWORD *)v36 = sub_1800233B0(a1 + 209, v2);
    v24 = (__int64 *)sub_1800234A0(v4, v2);
    memset(v37, 0, sizeof(v37));
    v25 = 0;
    v26 = off_1801567D0;
    do
    {
      if ( (unsigned int)sub_180022EE0(v24, *v26) != -1 )
        sub_1800273F8((__int64)v37, v27);
      ++v25;
      ++v26;
    }
    while ( v25 < 4 );
    v28 = v36[0];
    if ( v37[2] <= 0
      || (v40 = 0LL,
          v29 = sub_180059888(*(__int64 *)v36, (__int64)v37, 1u, (__int64)&v42, 1, 1, (__int64)&v38),
          v11 = v29,
          v29 >= 0) )
    {
      if ( (_DWORD)v2 == 1 )
        goto LABEL_50;
      v30 = (__int64 *)sub_1800234A0(v4, v2);
      if ( (unsigned int)sub_180022EE0(v30, &xmmword_18015B798) != -1 )
        goto LABEL_50;
      v31 = (__int64 *)sub_1800234A0(v4, v2);
      if ( (unsigned int)sub_180022EE0(v31, &xmmword_18015B810) == -1 )
        goto LABEL_50;
      v32 = sub_1800234A0(v4, v2);
      if ( !(unsigned int)sub_1800273F8(v32, &xmmword_18015B798) )
      {
        v11 = -2147024882;
        v17 = -2147024882;
        v16 = 1553;
        goto LABEL_16;
      }
      v33 = sub_1800234A0(v4, v2);
      if ( !(unsigned int)sub_18011E9F8(v33, &xmmword_18015B810) )
      {
        v11 = -2147418113;
        v17 = -2147418113;
        v16 = 1556;
        goto LABEL_16;
      }
      v34 = sub_18004B060(a1 + 215, v2);
      if ( !(unsigned int)sub_180119ED8(v34, v35, &xmmword_18015B810) )
      {
        v11 = -2147024882;
        v17 = -2147024882;
        v16 = 1557;
        goto LABEL_16;
      }
      *(_DWORD *)sub_180055010(a1 + 213, v2) = 1;
      v40 = 0LL;
      *(_OWORD *)v41.m256i_i8 = xmmword_18015B798;
      v29 = sub_180059784(v28, &v41, 1, (int)&v42, 1, 0, (__int64)&v38);
      v11 = v29;
      if ( v29 >= 0 )
      {
LABEL_50:
        sub_1800384A4((__int64 *)v37);
        return 0LL;
      }
      v16 = 1561;
    }
    else
    {
      v16 = 1542;
    }
    v17 = v29;
LABEL_16:
    sub_18004BD84(
      (int)retaddr,
      v16,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v17);
    sub_1800384A4((__int64 *)v37);
    return (unsigned int)v11;
  }
  v13 = (__int64 *)sub_1800234A0(v4, v2);
  sub_1800384A4(v13);
  v14 = sub_1800234A0(v4, v2);
  if ( !(unsigned int)sub_1800273F8(v14, &xmmword_18015B798) )
  {
    v15 = 1456;
LABEL_11:
    v11 = -2147024882;
    goto LABEL_13;
  }
  *(_DWORD *)sub_180055010(a1 + 213, v2) = 1;
  v18 = sub_18004B060(a1 + 215, v2);
  if ( !(unsigned int)sub_180119ED8(v18, v19, &xmmword_18015B730) )
  {
    v15 = 1460;
    goto LABEL_11;
  }
  v20 = sub_1800233B0(a1 + 209, v2);
  v21 = v20;
  v36[0] = 0;
  *(_OWORD *)v37 = xmmword_18015B810;
  v11 = sub_180020F10(v20, (__int128 *)v37, 0, v36, 0LL, 1u);
  if ( v11 >= 0 )
  {
    if ( v36[0] && (unsigned int)sub_1800488A0((__int64)a1) == 9 )
    {
      v38 = off_180155CC8;
      v39 = v41;
      v40 = &v38;
      *(_OWORD *)v37 = xmmword_18015B810;
      v11 = sub_180059784(v21, v37, 1, (int)&v42, 1, 1, (__int64)&v38);
      if ( v11 < 0 )
      {
        v15 = 1478;
        goto LABEL_13;
      }
    }
    else
    {
      v40 = 0LL;
      *(_OWORD *)v37 = xmmword_18015B810;
      v11 = sub_180059784(v21, v37, 1, (int)&v42, 1, 1, (__int64)&v38);
      if ( v11 < 0 )
      {
        v15 = 1482;
        goto LABEL_13;
      }
    }
    v40 = 0LL;
    *(_OWORD *)v37 = xmmword_18015B798;
    v11 = sub_180059784(v21, v37, 1, (int)&v42, 2, 0, (__int64)&v38);
    if ( v11 >= 0 )
      return 0LL;
    v15 = 1486;
  }
  else
  {
    v15 = 1468;
  }
LABEL_13:
  sub_18004BD84(
    (int)retaddr,
    v15,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v11);
  return (unsigned int)v11;
}
