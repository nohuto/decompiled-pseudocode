/*
 * XREFs of sub_180059A8C @ 0x180059A8C
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 *     sub_180059EF8 @ 0x180059EF8 (sub_180059EF8.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_18005A3E4 @ 0x18005A3E4 (sub_18005A3E4.c)
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     sub_1801230A8 @ 0x1801230A8 (sub_1801230A8.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180059A8C(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned __int64 v5; // rdi
  int v7; // r9d
  int v8; // r14d
  __int64 v9; // rdx
  int v10; // ecx
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // ecx
  __int128 v16; // xmm0
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // eax
  __int128 v23; // xmm0
  int v24; // eax
  __int128 v25; // xmm1
  int v26; // ecx
  LPVOID v27; // rbx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  LPVOID v31; // rbx
  __int64 v32; // rax
  int v33; // ebx
  __int128 v35; // xmm0
  int v36; // eax
  __int128 v37; // xmm1
  int v38; // ecx
  LPVOID v39; // rbx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  int v45; // r9d
  LPVOID v46; // rbx
  __int64 v47; // rax
  int v48; // eax
  int v49; // edx
  LPVOID v50; // rbx
  __int64 v51; // rax
  int v52; // edx
  int v53; // r9d
  int v54; // edx
  _OWORD *v55; // rax
  __int64 v56; // rax
  LPVOID v57[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+60h] [rbp-A0h]
  LPVOID pv; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v61; // [rsp+78h] [rbp-88h] BYREF
  __int128 v62; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-20h] BYREF
  int v71; // [rsp+F0h] [rbp-10h]
  __int128 v72; // [rsp+100h] [rbp+0h] BYREF
  int v73; // [rsp+110h] [rbp+10h]
  _BYTE *v74; // [rsp+120h] [rbp+20h]
  _BYTE v75[56]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v76; // [rsp+160h] [rbp+60h]
  _UNKNOWN *retaddr; // [rsp+1A8h] [rbp+A8h]
  LPVOID v78; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v79; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v80; // [rsp+1C0h] [rbp+C0h] BYREF

  v80 = a3;
  v5 = a2;
  if ( *(_DWORD *)sub_180055010((unsigned __int64 *)(a1 + 64), a2) )
  {
    if ( (v5 & 0xFFFFFFFC) != 0 || (_DWORD)v5 == 2 )
      return 0LL;
    v65 = 0LL;
    v8 = 0;
    v66 = 0LL;
    v69[0] = 0LL;
    v69[1] = 0LL;
    v64 = 0uLL;
    v67 = 0LL;
    v68 = 0LL;
    v9 = *(_QWORD *)(a1 + 80);
    if ( !v9 )
    {
LABEL_18:
      v57[0] = 0LL;
      v80 = 0;
      v61 = 0LL;
      v79 = 0;
      pv = 0LL;
      LODWORD(v78) = 0;
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          v23 = xmmword_180160B70;
          v24 = 11;
          v25 = xmmword_180160B58;
          v26 = 19;
        }
        else
        {
          if ( (_DWORD)v5 != 3 )
          {
            v14 = -2147023728;
            v45 = -2147023728;
            v54 = 2325;
            goto LABEL_43;
          }
          v23 = xmmword_180172C58;
          v24 = 8;
          v25 = xmmword_180172C40;
          v26 = 16;
        }
      }
      else
      {
        v23 = xmmword_180160990;
        v24 = 5;
        v25 = xmmword_180160B40;
        v26 = 13;
      }
      v58 = v23;
      v59 = v24;
      v62 = v25;
      v63 = v26;
      v70 = v25;
      v71 = v26;
      v72 = v23;
      v73 = v24;
      sub_180054490(
        *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
        (__int64)&v72,
        (__int64 *)&v70,
        &v80,
        (GUID **)v57);
      v27 = v57[0];
      v28 = sub_1800233B0((unsigned __int64 *)(a1 + 1656), v5);
      v29 = sub_180059EF8(v28, &v65, v80, v27);
      v14 = v29;
      if ( v29 < 0 )
      {
        v54 = 2327;
      }
      else
      {
        v29 = sub_18005A3E4(v30, (unsigned int)v5, &v58, &v62);
        v14 = v29;
        if ( v29 < 0 )
        {
          v54 = 2329;
        }
        else
        {
          v72 = v62;
          v73 = v63;
          v70 = v58;
          v71 = v59;
          sub_180054490(
            *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
            (__int64)&v70,
            (__int64 *)&v72,
            &v79,
            (GUID **)&v61);
          v31 = v61;
          v32 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v5);
          v29 = sub_180059EF8(v32, v69, v79, v31);
          v14 = v29;
          if ( v29 < 0 )
          {
            v54 = 2331;
          }
          else
          {
            if ( (_DWORD)v5 )
            {
              if ( (_DWORD)v5 != 3 )
                goto LABEL_26;
              v35 = xmmword_180172B38;
              v36 = 10;
              v37 = xmmword_180172BE0;
              v38 = 18;
            }
            else
            {
              v35 = xmmword_180160978;
              v36 = 7;
              v37 = xmmword_180160B28;
              v38 = 15;
            }
            v72 = v37;
            v73 = v38;
            v70 = v35;
            v71 = v36;
            sub_180054490(
              *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
              (__int64)&v70,
              (__int64 *)&v72,
              (unsigned int *)&v78,
              (GUID **)&pv);
            v39 = pv;
            v40 = sub_1800233B0((unsigned __int64 *)(a1 + 1688), v5);
            v29 = sub_180059EF8(v40, &v64, (unsigned int)v78, v39);
            v14 = v29;
            if ( v29 >= 0 )
            {
LABEL_26:
              v33 = 0;
              if ( v8 > 0 )
              {
                do
                {
                  v41 = (_QWORD *)sub_180023320((__int64)&v65, v33);
                  if ( (unsigned int)sub_180022EE0(v69, v41) == -1 )
                  {
                    v55 = (_OWORD *)sub_180023320((__int64)&v65, v33);
                    if ( !(unsigned int)sub_1800273F8((__int64)&v67, v55) )
                    {
                      v14 = -2147024882;
                      v45 = -2147024882;
                      v54 = 2354;
                      goto LABEL_43;
                    }
                  }
                  ++v33;
                }
                while ( v33 < v8 );
                if ( (int)v68 > 0 )
                {
                  v74 = v75;
                  v76 = 0LL;
                  v56 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v5);
                  v29 = sub_180059888(v56, (__int64)&v67, 0, 0LL, 2, 1, (__int64)v75);
                  v14 = v29;
                  if ( v29 < 0 )
                  {
                    v54 = 2361;
                    goto LABEL_42;
                  }
                }
              }
              CoTaskMemFree(pv);
              pv = 0LL;
              CoTaskMemFree(v61);
              v61 = 0LL;
              CoTaskMemFree(v57[0]);
              v57[0] = 0LL;
              sub_1800384A4(&v67);
              sub_1800384A4((__int64 *)&v64);
              sub_1800384A4(v69);
              sub_1800384A4(&v65);
              return 0LL;
            }
            v54 = 2337;
          }
        }
      }
LABEL_42:
      v45 = v29;
LABEL_43:
      sub_18004BD84(
        (int)retaddr,
        v54,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v45);
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(v61);
      v61 = 0LL;
      CoTaskMemFree(v57[0]);
      v57[0] = 0LL;
LABEL_44:
      sub_1800384A4(&v67);
      sub_1800384A4((__int64 *)&v64);
      sub_1800384A4(v69);
      sub_1800384A4(&v65);
      return v14;
    }
    v10 = v5;
    if ( (_DWORD)v5 )
    {
      v10 = v5 - 1;
      if ( (_DWORD)v5 == 1 )
      {
        v11 = xmmword_180160C30;
        v12 = 12;
      }
      else
      {
        if ( (_DWORD)v5 != 3 )
        {
          v52 = 2300;
          v14 = -2147023728;
          v53 = -2147023728;
          goto LABEL_62;
        }
        v11 = xmmword_180172C28;
        v12 = 9;
      }
    }
    else
    {
      v11 = xmmword_180160C18;
      v12 = 6;
    }
    v58 = v11;
    v59 = v12;
    LOBYTE(v7) = 1;
    v13 = sub_18005A220(v10, v9, (unsigned int)&v58, v7, (__int64)v69);
    v14 = v13;
    if ( v13 < 0 )
    {
      v53 = v13;
      v52 = 2301;
    }
    else
    {
      v15 = v5;
      if ( (_DWORD)v5 )
      {
        v15 = v5 - 1;
        if ( (_DWORD)v5 == 1 )
        {
          v16 = xmmword_180160C00;
          v17 = 11;
        }
        else
        {
          v16 = xmmword_180172C70;
          v17 = 8;
        }
      }
      else
      {
        v16 = xmmword_180160BE8;
        v17 = 5;
      }
      v58 = v16;
      v59 = v17;
      v18 = sub_18005A220(v15, *(_QWORD *)(a1 + 80), (unsigned int)&v58, 0, (__int64)&v65);
      v14 = v18;
      if ( v18 < 0 )
      {
        v53 = v18;
        v52 = 2305;
      }
      else
      {
        if ( (int)v5 > 1 )
        {
          v20 = xmmword_180172C88;
          v21 = 10;
        }
        else
        {
          v20 = xmmword_180160B88;
          v21 = 7;
        }
        v58 = v20;
        v59 = v21;
        v22 = sub_18005A220(v19, *(_QWORD *)(a1 + 80), (unsigned int)&v58, 0, (__int64)&v64);
        v14 = v22;
        if ( v22 >= 0 )
        {
          v8 = v66;
          goto LABEL_18;
        }
        v53 = v22;
        v52 = 2309;
      }
    }
LABEL_62:
    sub_18004BD84(
      (int)retaddr,
      v52,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v53);
    goto LABEL_44;
  }
  if ( (_DWORD)v5 == 3 )
    return 0LL;
  v42 = (__int64 *)sub_1800234A0((unsigned __int64 *)(a1 + 152), v5);
  sub_1800384A4(v42);
  v43 = sub_1800234A0((unsigned __int64 *)(a1 + 152), v5);
  v44 = sub_18005A458(v43, 1LL, &xmmword_18015B810);
  v14 = v44;
  if ( v44 >= 0 )
  {
    if ( !a4 || (_DWORD)v5 )
      return 0LL;
    v57[0] = 0LL;
    v80 = 0;
    v78 = 0LL;
    v79 = 0;
    v58 = xmmword_180160AC0;
    v59 = 0;
    v62 = xmmword_180160AD8;
    v63 = 1;
    sub_180054490(
      *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
      (__int64)&v62,
      (__int64 *)&v58,
      &v80,
      (GUID **)v57);
    v58 = xmmword_180160AC0;
    v59 = 0;
    v62 = xmmword_180160AF0;
    v63 = 2;
    sub_180054490(
      *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
      (__int64)&v62,
      (__int64 *)&v58,
      &v79,
      (GUID **)&v78);
    v64 = xmmword_18015B810;
    v46 = v57[0];
    v47 = sub_1800233B0((unsigned __int64 *)(a1 + 1656), v5);
    v48 = sub_1801230A8(v47, &v64, v80, v46);
    v14 = v48;
    if ( v48 >= 0 )
    {
      v64 = xmmword_18015B810;
      v50 = v78;
      v51 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v5);
      v48 = sub_1801230A8(v51, &v64, v79, v50);
      v14 = v48;
      if ( v48 >= 0 )
      {
        CoTaskMemFree(v78);
        v78 = 0LL;
        CoTaskMemFree(v57[0]);
        return 0LL;
      }
      v49 = 2282;
    }
    else
    {
      v49 = 2281;
    }
    sub_18004BD84(
      (int)retaddr,
      v49,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v48);
    CoTaskMemFree(v78);
    v78 = 0LL;
    CoTaskMemFree(v57[0]);
    return v14;
  }
  sub_18004BD84(
    (int)retaddr,
    2264,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v44);
  return v14;
}
