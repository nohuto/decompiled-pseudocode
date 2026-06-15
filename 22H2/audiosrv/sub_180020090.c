/*
 * XREFs of sub_180020090 @ 0x180020090
 * Callers:
 *     sub_180002BB0 @ 0x180002BB0 (sub_180002BB0.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_1800C6990 @ 0x1800C6990 (sub_1800C6990.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D71D0 @ 0x1800D71D0 (sub_1800D71D0.c)
 *     sub_1800D9550 @ 0x1800D9550 (sub_1800D9550.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 * Callees:
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180047E7C @ 0x180047E7C (sub_180047E7C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 *     sub_18011E3D4 @ 0x18011E3D4 (sub_18011E3D4.c)
 *     sub_18011E410 @ 0x18011E410 (sub_18011E410.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180020090(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  unsigned int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r13
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  unsigned __int16 *v16; // rbx
  int v17; // eax
  int v18; // edx
  int v19; // edi
  unsigned __int16 v20; // r15
  __int64 v21; // r11
  unsigned __int16 v22; // r10
  int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // ax
  int v30; // ecx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdi
  void *v34; // rax
  void *v35; // rsi
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int16 *v43; // [rsp+60h] [rbp-39h]
  PROPVARIANT v44[2]; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int16 *v45; // [rsp+78h] [rbp-21h]
  __int128 v46; // [rsp+80h] [rbp-19h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+90h] [rbp-9h]
  __int128 v48; // [rsp+98h] [rbp-1h] BYREF
  int v49; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v7 = 0;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  v47 = v8;
  if ( a2 == 1 )
  {
    v13 = xmmword_18015A8C8;
    v15 = 8;
  }
  else
  {
    v10 = *a3;
    if ( !*a3 )
      v10 = a3[1];
    if ( v10 )
    {
      v46 = *(_OWORD *)a3;
      v11 = 0;
      v9 = qword_18019D7B0;
      while ( 1 )
      {
        v12 = qword_18019D7B0[2 * v11] - v46;
        if ( !v12 )
          v12 = qword_18019D7B0[2 * v11 + 1] - *((_QWORD *)&v46 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 9 )
        {
          v7 = -2147023728;
          sub_18004BD84(
            retaddr,
            6809LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            2147943568LL);
          goto LABEL_52;
        }
      }
      v13 = xmmword_1801602C0;
      v14 = 2;
      if ( a2 == 3 )
        v14 = 602;
      v15 = v11 + v14;
    }
    else
    {
      v13 = xmmword_18015C5A8;
      v15 = 0;
    }
  }
  v48 = v13;
  v49 = v15;
  v16 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v45 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          &v48,
          v44,
          v9);
  if ( v17 < 0 )
  {
    sub_18006D26C(
      retaddr,
      6816LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v17);
  }
  else if ( LOWORD(v44[0]) )
  {
    if ( LOWORD(v44[0]) == 65 )
    {
      if ( LODWORD(v44[1]) >= 0x12 && LODWORD(v44[1]) == v45[8] + 18LL )
        v16 = v45;
      else
        sub_18011E3D4(retaddr, 6829LL);
    }
    else
    {
      sub_18011E410(
        retaddr,
        6842LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        13LL,
        "unexpected vartype %d (0x%x)",
        LOWORD(v44[0]),
        LOWORD(v44[0]));
    }
  }
  *(_OWORD *)pvar = 0LL;
  v43 = 0LL;
  if ( v16 )
    goto LABEL_19;
  v37 = sub_180047E7C(a1, a2);
  v38 = v37;
  if ( v37 < 0 )
  {
    sub_18004BD84(
      retaddr,
      6852LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v37);
LABEL_75:
    v7 = v38;
    goto LABEL_51;
  }
  v39 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          &v48,
          pvar);
  v38 = v39;
  if ( v39 < 0 )
  {
    sub_18004BD84(
      retaddr,
      6855LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v39);
    goto LABEL_75;
  }
  if ( LOWORD(pvar[0]) != 65 )
  {
    v38 = -2147024883;
    sub_1800BC6FC(
      retaddr,
      6856LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147942413LL,
      "unexpected vartype %d (0x%x)",
      LOWORD(pvar[0]),
      LOWORD(pvar[0]));
    goto LABEL_75;
  }
  if ( !(unsigned int)sub_180047420(pvar) )
  {
    v38 = -2147024883;
    sub_18004BD84(
      retaddr,
      6857LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147942413LL);
    goto LABEL_75;
  }
  v16 = v43;
  if ( !v43 )
  {
    v40 = -2147467261;
LABEL_74:
    v38 = -2004287480;
    sub_1800BC6FC(
      retaddr,
      6865LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2290679816LL,
      "ValidateUncompressedWaveFormatEx returned 0x%08x",
      v40);
    goto LABEL_75;
  }
LABEL_19:
  if ( !v16[1] )
    goto LABEL_73;
  v18 = *((_DWORD *)v16 + 1);
  if ( !v18 )
    goto LABEL_73;
  v19 = *((_DWORD *)v16 + 2);
  if ( !v19 )
    goto LABEL_73;
  v20 = v16[6];
  if ( !v20 )
    goto LABEL_73;
  v21 = v16[8];
  if ( (unsigned __int16)v21 > 0x400u )
    goto LABEL_73;
  v22 = *v16;
  v23 = v16[1];
  if ( ((*v16 - 1) & 0xFFFD) == 0 )
  {
    if ( !(_WORD)v21
      && (v16[7] & 7) == 0
      && (unsigned __int16)v23 <= 2u
      && v19 == (v18 * (unsigned int)v16[7] * v23) >> 3 )
    {
      goto LABEL_41;
    }
    goto LABEL_73;
  }
  if ( v22 == 0xFFFE )
  {
    if ( (unsigned __int16)v21 < 0x16u )
      goto LABEL_73;
    v24 = 0x10000000000001LL - *((_QWORD *)v16 + 3);
    if ( *((_QWORD *)v16 + 3) == 0x10000000000001LL )
      v24 = 0x719B3800AA000080LL - *((_QWORD *)v16 + 4);
    if ( !v24 )
      goto LABEL_33;
    v25 = 0x10000000000003LL - *((_QWORD *)v16 + 3);
    if ( *((_QWORD *)v16 + 3) == 0x10000000000003LL )
      v25 = 0x719B3800AA000080LL - *((_QWORD *)v16 + 4);
    if ( !v25 )
    {
LABEL_33:
      v26 = 0x10000000000001LL - *((_QWORD *)v16 + 3);
      if ( *((_QWORD *)v16 + 3) == 0x10000000000001LL )
        v26 = 0x719B3800AA000080LL - *((_QWORD *)v16 + 4);
      if ( v26 )
      {
        v27 = v16[7];
        v28 = v27;
        if ( v27 == 32 || v27 == 64 )
        {
LABEL_37:
          v29 = v16[9];
          if ( v29 )
          {
            if ( v28 >= v29 )
            {
              v30 = v23 * v28;
              if ( v19 == (unsigned int)(v18 * v30) >> 3 && v20 == v30 / 8 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        v28 = v16[7];
        v20 = v16[6];
        if ( ((v28 - 8) & 0xFFE7) == 0 )
          goto LABEL_37;
      }
LABEL_73:
      v40 = -2147024809;
      goto LABEL_74;
    }
  }
LABEL_41:
  if ( ((v22 - 1) & 0xFFFD) != 0 )
  {
    if ( v22 != 0xFFFE )
      goto LABEL_83;
    v31 = 0x10000000000001LL - *((_QWORD *)v16 + 3);
    if ( !v31 )
      v31 = 0x719B3800AA000080LL - *((_QWORD *)v16 + 4);
    if ( v31 )
    {
      v32 = 0x10000000000003LL - *((_QWORD *)v16 + 3);
      if ( !v32 )
        v32 = 0x719B3800AA000080LL - *((_QWORD *)v16 + 4);
      if ( v32 )
      {
LABEL_83:
        v40 = 1;
        goto LABEL_74;
      }
    }
  }
  v33 = v16[8];
  v34 = CoTaskMemAlloc(v21 + 18);
  v35 = v34;
  if ( !v34 )
  {
    *a4 = 0LL;
    v38 = -2147024882;
    sub_18004BD84(
      retaddr,
      6867LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147942414LL);
    goto LABEL_75;
  }
  memcpy(v34, v16, v33 + 18);
  *a4 = v35;
LABEL_51:
  PropVariantClear(pvar);
  PropVariantClear(v44);
LABEL_52:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
