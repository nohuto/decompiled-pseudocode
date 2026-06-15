/*
 * XREFs of sub_180049150 @ 0x180049150
 * Callers:
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800272C0 @ 0x1800272C0 (sub_1800272C0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 *     sub_1800487C4 @ 0x1800487C4 (sub_1800487C4.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E18 @ 0x180048E18 (sub_180048E18.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_1800495DC @ 0x1800495DC (sub_1800495DC.c)
 *     sub_18004A5C4 @ 0x18004A5C4 (sub_18004A5C4.c)
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011A3A4 @ 0x18011A3A4 (sub_18011A3A4.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180049150(unsigned __int64 *a1, int a2)
{
  char v3; // r12
  unsigned int v4; // r15d
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __m128i v8; // xmm6
  int v9; // esi
  void *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rcx
  int v19; // eax
  int v20; // r15d
  int v21; // r13d
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // edx
  unsigned int v33; // [rsp+38h] [rbp-69h] BYREF
  __int64 v34; // [rsp+40h] [rbp-61h] BYREF
  __int64 v35[2]; // [rsp+48h] [rbp-59h] BYREF
  __m128i v36; // [rsp+58h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-39h] BYREF
  __int64 v38; // [rsp+70h] [rbp-31h]
  __int64 v39; // [rsp+78h] [rbp-29h] BYREF
  __int64 v40; // [rsp+80h] [rbp-21h] BYREF
  LPVOID *p_pv; // [rsp+88h] [rbp-19h]
  LPVOID v42; // [rsp+90h] [rbp-11h] BYREF
  char v43; // [rsp+98h] [rbp-9h]
  unsigned __int64 *v44; // [rsp+A0h] [rbp-1h]
  unsigned int *v45; // [rsp+A8h] [rbp+7h]
  char v46; // [rsp+B0h] [rbp+Fh]
  void *retaddr; // [rsp+100h] [rbp+5Fh]

  v33 = a2;
  v44 = a1;
  v45 = &v33;
  v3 = 1;
  v46 = 1;
  v4 = *(_DWORD *)(sub_180023050((__int64)a1, a2, 0) + 8);
  v5 = 0LL;
  v40 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = sub_180023050((__int64)a1, v33, 0);
      if ( v6 >= *(_DWORD *)(v7 + 8) )
        v8 = (__m128i)xmmword_18015B730;
      else
        v8 = *(__m128i *)sub_180023320(v7, v6);
      pv = 0LL;
      p_pv = &pv;
      v42 = 0LL;
      v43 = 1;
      v36 = v8;
      v9 = sub_180048308(a1, v33, &v36, &v42);
      if ( v43 )
      {
        v10 = *p_pv;
        *p_pv = v42;
        if ( v10 )
          CoTaskMemFree(v10);
      }
      if ( v9 < 0 )
      {
        sub_18004BD84(
          retaddr,
          8147LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v9);
        goto LABEL_53;
      }
      v35[0] = 0LL;
      v11 = sub_18001F490((unsigned __int16 *)pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, v35, 0.0, 0);
      v9 = v11;
      if ( v11 < 0 )
      {
        v28 = 8150LL;
        goto LABEL_50;
      }
      v11 = sub_18004BB48(pv);
      v9 = v11;
      if ( v11 < 0 )
        break;
      v36 = v8;
      v11 = sub_18004A848(a1, pv, &v36, v33, 0);
      v9 = v11;
      if ( v11 < 0 )
      {
        v28 = 8158LL;
LABEL_50:
        sub_18004BD84(
          retaddr,
          v28,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v11);
        goto LABEL_51;
      }
      v36 = v8;
      v39 = 0LL;
      v12 = sub_180048E60(a1, (__int64)&v36, v33, v35[0], &v39);
      v9 = v12;
      if ( v12 < 0 )
      {
        sub_18004BD84(
          retaddr,
          8165LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v12);
        goto LABEL_46;
      }
      v36 = v8;
      v34 = 0LL;
      v13 = sub_180048B1C(a1, (__int128 *)v36.m128i_i8, v33, v39, &v34, 0LL);
      v9 = v13;
      if ( v13 < 0 )
      {
        v27 = 8172LL;
LABEL_44:
        sub_18004BD84(
          retaddr,
          v27,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v13);
        sub_18000F708(&v34);
LABEL_46:
        sub_18000F708(&v39);
LABEL_51:
        sub_18000F708(v35);
LABEL_53:
        v29 = pv;
        pv = 0LL;
        if ( v29 )
          CoTaskMemFree(v29);
        v5 = v40;
        goto LABEL_36;
      }
      v36 = v8;
      v14 = v34;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 40LL))(v34);
      v13 = sub_18004A5C4(a1, v33, &v36, v15);
      v9 = v13;
      if ( v13 < 0 )
      {
        v27 = 8175LL;
        goto LABEL_44;
      }
      v36 = v8;
      sub_1800495DC(a1, v33, &v36, v14);
      v16 = v8.m128i_i64[0] - 0x4FD1B4939E90EA20LL;
      if ( v8.m128i_i64[0] == 0x4FD1B4939E90EA20LL )
        v16 = _mm_srli_si128(v8, 8).m128i_u64[0] + 0x30A9569EEC81575FLL;
      if ( !v16 && (unsigned int)sub_180020B94((__int64)a1, v33) )
      {
        v36 = v8;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 40LL))(v39);
        v13 = sub_1800487C4((__int64)a1, v33, (__int128 *)v36.m128i_i8, v17);
        v9 = v13;
        if ( v13 < 0 )
        {
          v27 = 8183LL;
          goto LABEL_44;
        }
        sub_180048E18(&v40, v39);
      }
      sub_18000F708(&v34);
      sub_18000F708(&v39);
      sub_18000F708(v35);
      v18 = pv;
      pv = 0LL;
      if ( v18 )
        CoTaskMemFree(v18);
      if ( ++v6 >= v4 )
      {
        v5 = v40;
        goto LABEL_24;
      }
    }
    v28 = 8152LL;
    goto LABEL_50;
  }
LABEL_24:
  if ( !(unsigned int)sub_180020B94((__int64)a1, v33) )
  {
LABEL_35:
    v3 = 0;
    v46 = 0;
    v9 = 0;
    goto LABEL_36;
  }
  if ( !v5 )
  {
    v9 = -2147418113;
    sub_18004BD84(
      retaddr,
      8195LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147549183LL);
    goto LABEL_36;
  }
  pv = 0LL;
  v38 = 0LL;
  v19 = sub_1800272C0((__int64)a1, v33, (__int64)&pv);
  v9 = v19;
  if ( v19 < 0 )
  {
    sub_18004BD84(
      retaddr,
      8198LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v19);
    goto LABEL_63;
  }
  v20 = 0;
  v21 = v38;
  if ( (int)v38 <= 0 )
  {
LABEL_34:
    sub_1800384A4((__int64 *)&pv);
    goto LABEL_35;
  }
  while ( 1 )
  {
    v36 = *(__m128i *)sub_180023320((__int64)&pv, v20);
    if ( (unsigned int)sub_1800229D0((__int64)a1, v33, &v36) )
      goto LABEL_33;
    v34 = 0LL;
    v35[0] = 0LL;
    v36 = *(__m128i *)sub_180023320((__int64)&pv, v20);
    v34 = 0LL;
    v35[0] = 0LL;
    v22 = sub_180048B1C(a1, (__int128 *)v36.m128i_i8, v33, v5, v35, &v34);
    v9 = v22;
    if ( v22 < 0 )
      break;
    v36 = *(__m128i *)sub_180023320((__int64)&pv, v20);
    v23 = v35[0];
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35[0] + 40LL))(v35[0]);
    v22 = sub_18004A5C4(a1, v33, &v36, v24);
    v9 = v22;
    if ( v22 < 0 )
    {
      v31 = 8228LL;
      goto LABEL_62;
    }
    v36 = *(__m128i *)sub_180023320((__int64)&pv, v20);
    sub_1800495DC(a1, v33, &v36, v23);
    v25 = v34;
    if ( v34 )
    {
      v36 = *(__m128i *)sub_180023320((__int64)&pv, v20);
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
      v22 = sub_18011A3A4(a1, v33, &v36, v30);
      v9 = v22;
      if ( v22 < 0 )
      {
        v31 = 8238LL;
        goto LABEL_62;
      }
    }
    sub_18000F708(v35);
    sub_18000F708(&v34);
LABEL_33:
    if ( ++v20 >= v21 )
      goto LABEL_34;
  }
  v31 = 8223LL;
LABEL_62:
  sub_18004BD84(
    retaddr,
    v31,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v22);
  sub_18000F708(v35);
  sub_18000F708(&v34);
LABEL_63:
  sub_1800384A4((__int64 *)&pv);
LABEL_36:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 )
  {
    v46 = 0;
    v32 = 2;
    if ( v33 != 3 )
      v32 = 0;
    sub_180047FDC((__int64)a1, v32);
  }
  return (unsigned int)v9;
}
