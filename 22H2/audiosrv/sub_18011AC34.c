/*
 * XREFs of sub_18011AC34 @ 0x18011AC34
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     sub_18005A8F0 @ 0x18005A8F0 (sub_18005A8F0.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BA5C8 @ 0x1800BA5C8 (sub_1800BA5C8.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 *     sub_180122224 @ 0x180122224 (sub_180122224.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011AC34(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // r12
  int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  int v19; // edi
  int v20; // r15d
  char v21; // bl
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  unsigned int v31; // [rsp+58h] [rbp-A8h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  GUID v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  int cchMax[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v36; // [rsp+A0h] [rbp-60h]
  LPOLESTR lpsz; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __m256i v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h] BYREF
  __m256i v44; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+50h]
  GUID rguid; // [rsp+160h] [rbp+60h] BYREF
  __int128 v48; // [rsp+170h] [rbp+70h] BYREF
  _WORD v49[1024]; // [rsp+180h] [rbp+80h] BYREF
  _UNKNOWN *retaddr; // [rsp+9D8h] [rbp+8D8h]

  v36 = a4;
  v31 = a3;
  v9 = a2;
  v34 = a5;
  v38 = a8;
  v11 = 0;
  v28 = 0LL;
  v48 = xmmword_18015B730;
  v29 = 0LL;
  v30 = 0LL;
  if ( !a2 )
    sub_180021ED0(a1, 0, &v48, 0LL, 0LL);
  v12 = sub_18006A18C(0x10uLL);
  *(_QWORD *)&v33.Data1 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v28 = v12;
  if ( !v12 )
  {
    v11 = -2147024882;
    goto LABEL_32;
  }
  v13 = sub_1800234A0((unsigned __int64 *)(a1 + 152), v9);
  sub_180067BDC((__int64)&v29, v13);
  v14 = sub_1800234A0((unsigned __int64 *)(a1 + 152), v9);
  if ( (_DWORD)v30 != *(_DWORD *)(v14 + 8) )
  {
    v11 = -2147024882;
    sub_18004BD84(
      (int)retaddr,
      4172,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      -2147024882);
    goto LABEL_32;
  }
  v15 = *(_QWORD *)sub_1800234A0((unsigned __int64 *)(a1 + 1736), v9);
  v16 = sub_1800234A0((unsigned __int64 *)(a1 + 1736), v9);
  v17 = sub_18005A458((__int64)&v29, *(_DWORD *)(v16 + 8), v15);
  v18 = v17;
  if ( v17 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4173,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v17);
    v11 = v18;
    goto LABEL_32;
  }
  v19 = 0;
  v20 = v30;
  if ( (int)v30 <= 0 )
  {
LABEL_31:
    v25 = v28;
    v28 = 0LL;
    *v38 = v25;
    goto LABEL_32;
  }
  v21 = a6;
  while ( 1 )
  {
    v33 = *(GUID *)sub_180023320((__int64)&v29, v19);
    sub_18001E240(a1, (__int64 *)&rguid, v9, &v33, 0);
    v33 = rguid;
    if ( !(unsigned int)sub_18011BFE4(a1, (unsigned int)&v33, v9, v34, v21, a7, (__int64)&v28) )
      goto LABEL_30;
    v22 = sub_18006A18C(0x30uLL);
    *(_QWORD *)&v33.Data1 = v22;
    if ( v22 )
    {
      *(GUID *)v22 = rguid;
      v22[2] = 0LL;
      v22[3] = 0LL;
      v22[4] = 0LL;
      v22[5] = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)&v33.Data1 = v22;
    if ( !v22 )
      break;
    *(_QWORD *)&v39 = v22;
    *((_QWORD *)&v39 + 1) = a1;
    v40.m256i_i32[0] = v9;
    *(GUID *)((char *)v40.m256i_i64 + 4) = rguid;
    v40.m256i_i64[3] = v34;
    LOBYTE(v41) = a6;
    *((_QWORD *)&v41 + 1) = a7;
    v42 = a9;
    v43 = v39;
    v44 = v40;
    v45 = v41;
    v46 = a9;
    *(GUID *)cchMax = rguid;
    v11 = sub_180116778(a1, v9, v31, v36, cchMax, &v43);
    if ( v11 < 0 )
      goto LABEL_38;
    if ( !*((_DWORD *)v22 + 6) )
    {
      pv[0] = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), pv) >= 0 )
      {
        *(_QWORD *)cchMax = 0LL;
        if ( (int)sub_1800BA5C8(
                    v49,
                    0x400uLL,
                    &lpsz,
                    (unsigned __int64 *)cchMax,
                    0,
                    L"[%s], connector [%d] has no supported formats for mode - ") >= 0 )
        {
          StringFromGUID2(&rguid, lpsz, cchMax[0]);
          sub_180122224(v23, v49);
        }
      }
      CoTaskMemFree(pv[0]);
      *(_DWORD *)(a1 + 220) = 1;
      v24 = v48 - *(_QWORD *)&rguid.Data1;
      if ( (_QWORD)v48 == *(_QWORD *)&rguid.Data1 )
        v24 = *((_QWORD *)&v48 + 1) - *(_QWORD *)rguid.Data4;
      if ( !v24 )
        *(_QWORD *)(a1 + 192) = 0LL;
    }
    if ( !(unsigned int)sub_18005A8F0((__int64)v28, &v33) )
    {
      v11 = -2147024882;
LABEL_38:
      sub_180119D08((__int64)v22);
      goto LABEL_32;
    }
    v21 = a6;
LABEL_30:
    if ( ++v19 >= v20 )
      goto LABEL_31;
  }
  v11 = -2147024882;
LABEL_32:
  sub_1800384A4(&v29);
  v26 = v28;
  if ( v28 )
  {
    if ( *v28 )
    {
      _o_free(*v28);
      *v26 = 0LL;
    }
    v26[1] = 0LL;
    sub_18006A148(v26);
  }
  return (unsigned int)v11;
}
