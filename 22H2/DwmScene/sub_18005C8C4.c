/*
 * XREFs of sub_18005C8C4 @ 0x18005C8C4
 * Callers:
 *     sub_180002ED0 @ 0x180002ED0 (sub_180002ED0.c)
 *     sub_1800030D0 @ 0x1800030D0 (sub_1800030D0.c)
 *     sub_1800031C0 @ 0x1800031C0 (sub_1800031C0.c)
 *     sub_1800032B0 @ 0x1800032B0 (sub_1800032B0.c)
 *     sub_1800033A0 @ 0x1800033A0 (sub_1800033A0.c)
 *     sub_180003490 @ 0x180003490 (sub_180003490.c)
 *     sub_180003580 @ 0x180003580 (sub_180003580.c)
 *     sub_180003670 @ 0x180003670 (sub_180003670.c)
 *     sub_180003760 @ 0x180003760 (sub_180003760.c)
 *     sub_180003850 @ 0x180003850 (sub_180003850.c)
 *     sub_180003940 @ 0x180003940 (sub_180003940.c)
 *     sub_180003A30 @ 0x180003A30 (sub_180003A30.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000FF40 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_18005C7A8 @ 0x18005C7A8 (sub_18005C7A8.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800CF3A0 @ 0x1800CF3A0 (sub_1800CF3A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_18005C8C4()
{
  __int64 v0; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  const void **v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const void **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  const void **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  const void **v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const void **v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  const void **v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int128 Src; // [rsp+28h] [rbp-49h] BYREF
  __m128i si128; // [rsp+38h] [rbp-39h]
  __int128 v124; // [rsp+48h] [rbp-29h] BYREF
  __int128 v125; // [rsp+58h] [rbp-19h]
  __int128 v126; // [rsp+68h] [rbp-9h] BYREF
  __int128 v127; // [rsp+78h] [rbp+7h]
  _QWORD v128[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v129; // [rsp+98h] [rbp+27h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_180219610 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219610);
    if ( dword_180219610 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B0AF0;
      *((_QWORD *)&Src + 1) = &unk_1801B1230;
      *(_QWORD *)&v125 = 0x100000005LL;
      v126 = Src;
      v127 = v125;
      sub_18005C7A8();
      v5 = (_QWORD *)sub_1800CF2C8(v128);
      v6 = sub_180054FC4(v5, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v6;
      si128 = *((__m128i *)v6 + 1);
      v6[2] = 0LL;
      v6[3] = (const void *)15;
      *(_BYTE *)v6 = 0;
      v7 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v7;
      v125 = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 15LL;
      *(_BYTE *)v7 = 0;
      byte_18021960C = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v8 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v8 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v8, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v8);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v9 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v9 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v9 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v9);
      }
      Init_thread_footer(&dword_180219610);
    }
  }
  if ( dword_180219618 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219618);
    if ( dword_180219618 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B1230;
      *((_QWORD *)&Src + 1) = &unk_1801B1A78;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v10 = (_QWORD *)sub_1800CF2C8(v128);
      v11 = sub_180054FC4(v10, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v11;
      si128 = *((__m128i *)v11 + 1);
      v11[2] = 0LL;
      v11[3] = (const void *)15;
      *(_BYTE *)v11 = 0;
      v12 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v12;
      v125 = *((_OWORD *)v12 + 1);
      v12[2] = 0LL;
      v12[3] = 15LL;
      *(_BYTE *)v12 = 0;
      byte_180219614 = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v13 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v13 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v13);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v14 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v14 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
      Init_thread_footer(&dword_180219618);
    }
  }
  if ( dword_180219620 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219620);
    if ( dword_180219620 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B1A80;
      *((_QWORD *)&Src + 1) = &unk_1801B2334;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v15 = (_QWORD *)sub_1800CF2C8(v128);
      v16 = sub_180054FC4(v15, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v16;
      si128 = *((__m128i *)v16 + 1);
      v16[2] = 0LL;
      v16[3] = (const void *)15;
      *(_BYTE *)v16 = 0;
      v17 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v17;
      v125 = *((_OWORD *)v17 + 1);
      v17[2] = 0LL;
      v17[3] = 15LL;
      *(_BYTE *)v17 = 0;
      byte_18021961C = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v18 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v18 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v18 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v18, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v18);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v19 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      Init_thread_footer(&dword_180219620);
    }
  }
  if ( dword_180219628 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219628);
    if ( dword_180219628 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B2340;
      *((_QWORD *)&Src + 1) = &unk_1801B2CFC;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v20 = (_QWORD *)sub_1800CF2C8(v128);
      v21 = sub_180054FC4(v20, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v21;
      si128 = *((__m128i *)v21 + 1);
      v21[2] = 0LL;
      v21[3] = (const void *)15;
      *(_BYTE *)v21 = 0;
      v22 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v22;
      v125 = *((_OWORD *)v22 + 1);
      v22[2] = 0LL;
      v22[3] = 15LL;
      *(_BYTE *)v22 = 0;
      byte_180219624 = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v23 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v23 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v23 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v23, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v23);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v24 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v24 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v24 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v24, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v24);
      }
      Init_thread_footer(&dword_180219628);
    }
  }
  if ( dword_180219630 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219630);
    if ( dword_180219630 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B2D00;
      *((_QWORD *)&Src + 1) = &unk_1801B34FC;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v25 = (_QWORD *)sub_1800CF2C8(v128);
      v26 = sub_180054FC4(v25, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v26;
      si128 = *((__m128i *)v26 + 1);
      v26[2] = 0LL;
      v26[3] = (const void *)15;
      *(_BYTE *)v26 = 0;
      v27 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v27;
      v125 = *((_OWORD *)v27 + 1);
      v27[2] = 0LL;
      v27[3] = 15LL;
      *(_BYTE *)v27 = 0;
      byte_18021962C = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v28 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v28 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v28 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v28, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v28);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v29 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v29 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v29 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v29, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v29);
      }
      Init_thread_footer(&dword_180219630);
    }
  }
  if ( dword_180219638 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219638);
    if ( dword_180219638 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B3500;
      *((_QWORD *)&Src + 1) = &unk_1801B3E04;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v30 = (_QWORD *)sub_1800CF2C8(v128);
      v31 = sub_180054FC4(v30, 0LL, "BackgroundUnlit/ShaderModel40/", 0x1EuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v31;
      si128 = *((__m128i *)v31 + 1);
      v31[2] = 0LL;
      v31[3] = (const void *)15;
      *(_BYTE *)v31 = 0;
      v32 = std::string::append(&Src, "/Pixel", 6uLL);
      v125 = 0uLL;
      v124 = *(_OWORD *)v32;
      v125 = *((_OWORD *)v32 + 1);
      v32[2] = 0LL;
      v32[3] = 15LL;
      *(_BYTE *)v32 = 0;
      byte_180219634 = sub_1800CF3A0(&v124, &v126);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v33 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v33 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v33 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v33, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v33);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v129 + 1) >= 0x10uLL )
      {
        v34 = v128[0];
        if ( (unsigned __int64)(*((_QWORD *)&v129 + 1) + 1LL) >= 0x1000 )
        {
          v34 = *(_QWORD *)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - v34 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v34, *((_QWORD *)&v129 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v34);
      }
      Init_thread_footer(&dword_180219638);
    }
  }
  if ( dword_180219640 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219640);
    if ( dword_180219640 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B3E10;
      *((_QWORD *)&Src + 1) = &unk_1801B4774;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v35 = sub_1800CF2C8(&Src);
      v36 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v35);
      v37 = sub_18002C218((__int64)v128, v36, "/Pixel");
      byte_18021963C = sub_1800CF3A0(v37, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219640);
    }
  }
  if ( dword_180219648 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219648);
    if ( dword_180219648 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B4780;
      *((_QWORD *)&Src + 1) = &unk_1801B51EC;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v38 = sub_1800CF2C8(&Src);
      v39 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v38);
      v40 = sub_18002C218((__int64)v128, v39, "/Pixel");
      byte_180219644 = sub_1800CF3A0(v40, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219648);
    }
  }
  if ( dword_180219650 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219650);
    if ( dword_180219650 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B51F0;
      *((_QWORD *)&Src + 1) = &unk_1801B5B38;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v41 = sub_1800CF2C8(&Src);
      v42 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v41);
      v43 = sub_18002C218((__int64)v128, v42, "/Pixel");
      byte_18021964C = sub_1800CF3A0(v43, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219650);
    }
  }
  if ( dword_180219658 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219658);
    if ( dword_180219658 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B5B40;
      *((_QWORD *)&Src + 1) = &unk_1801B6590;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v44 = sub_1800CF2C8(&Src);
      v45 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v44);
      v46 = sub_18002C218((__int64)v128, v45, "/Pixel");
      byte_180219654 = sub_1800CF3A0(v46, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219658);
    }
  }
  if ( dword_180219660 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219660);
    if ( dword_180219660 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B6590;
      *((_QWORD *)&Src + 1) = &unk_1801B7040;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v47 = sub_1800CF2C8(&Src);
      v48 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v47);
      v49 = sub_18002C218((__int64)v128, v48, "/Pixel");
      byte_18021965C = sub_1800CF3A0(v49, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219660);
    }
  }
  if ( dword_180219668 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219668);
    if ( dword_180219668 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B7040;
      *((_QWORD *)&Src + 1) = &unk_1801B7BF8;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v50 = sub_1800CF2C8(&Src);
      v51 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v50);
      v52 = sub_18002C218((__int64)v128, v51, "/Pixel");
      byte_180219664 = sub_1800CF3A0(v52, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219668);
    }
  }
  if ( dword_180219670 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219670);
    if ( dword_180219670 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B7C00;
      *((_QWORD *)&Src + 1) = &unk_1801B85F8;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v53 = sub_1800CF2C8(&Src);
      v54 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v53);
      v55 = sub_18002C218((__int64)v128, v54, "/Pixel");
      byte_18021966C = sub_1800CF3A0(v55, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219670);
    }
  }
  if ( dword_180219678 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219678);
    if ( dword_180219678 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B8600;
      *((_QWORD *)&Src + 1) = &unk_1801B9100;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v56 = sub_1800CF2C8(&Src);
      v57 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v56);
      v58 = sub_18002C218((__int64)v128, v57, "/Pixel");
      byte_180219674 = sub_1800CF3A0(v58, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219678);
    }
  }
  if ( dword_180219680 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219680);
    if ( dword_180219680 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B9100;
      *((_QWORD *)&Src + 1) = &unk_1801B9C60;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v59 = sub_1800CF2C8(&Src);
      v60 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v59);
      v61 = sub_18002C218((__int64)v128, v60, "/Pixel");
      byte_18021967C = sub_1800CF3A0(v61, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219680);
    }
  }
  if ( dword_180219688 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219688);
    if ( dword_180219688 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B9C60;
      *((_QWORD *)&Src + 1) = &unk_1801BA8C8;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v62 = sub_1800CF2C8(&Src);
      v63 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18002C218((__int64)v128, v63, "/Pixel");
      byte_180219684 = sub_1800CF3A0(v64, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219688);
    }
  }
  if ( dword_180219690 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219690);
    if ( dword_180219690 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BA8D0;
      *((_QWORD *)&Src + 1) = &unk_1801BAABC;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v65 = sub_1800CF2C8(&Src);
      v66 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v65);
      v67 = sub_18002C218((__int64)v128, v66, "/Pixel");
      byte_18021968C = sub_1800CF3A0(v67, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219690);
    }
  }
  if ( dword_180219698 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219698);
    if ( dword_180219698 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BAAC0;
      *((_QWORD *)&Src + 1) = &unk_1801BC650;
      *(_QWORD *)&v129 = 0x100000005LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v68 = sub_1800CF2C8(&Src);
      v69 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v68);
      v70 = sub_18002C218((__int64)v128, v69, "/Pixel");
      byte_180219694 = sub_1800CF3A0(v70, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219698);
    }
  }
  if ( dword_1802196A0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196A0);
    if ( dword_1802196A0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v71 = sub_1800CF2C8(&Src);
      v72 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v71);
      v73 = sub_18002C218((__int64)v128, v72, "/Vertex");
      byte_18021969C = sub_1800CF3A0(v73, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196A0);
    }
  }
  if ( dword_1802196A8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196A8);
    if ( dword_1802196A8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v74 = sub_1800CF2C8(&Src);
      v75 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v74);
      v76 = sub_18002C218((__int64)v128, v75, "/Vertex");
      byte_1802196A4 = sub_1800CF3A0(v76, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196A8);
    }
  }
  if ( dword_1802196B0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196B0);
    if ( dword_1802196B0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v77 = sub_1800CF2C8(&Src);
      v78 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v77);
      v79 = sub_18002C218((__int64)v128, v78, "/Vertex");
      byte_1802196AC = sub_1800CF3A0(v79, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196B0);
    }
  }
  if ( dword_1802196B8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196B8);
    if ( dword_1802196B8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v80 = sub_1800CF2C8(&Src);
      v81 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v80);
      v82 = sub_18002C218((__int64)v128, v81, "/Vertex");
      byte_1802196B4 = sub_1800CF3A0(v82, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196B8);
    }
  }
  if ( dword_1802196C0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196C0);
    if ( dword_1802196C0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v83 = sub_1800CF2C8(&Src);
      v84 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v83);
      v85 = sub_18002C218((__int64)v128, v84, "/Vertex");
      byte_1802196BC = sub_1800CF3A0(v85, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196C0);
    }
  }
  if ( dword_1802196C8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196C8);
    if ( dword_1802196C8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v86 = sub_1800CF2C8(&Src);
      v87 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v86);
      v88 = sub_18002C218((__int64)v128, v87, "/Vertex");
      byte_1802196C4 = sub_1800CF3A0(v88, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196C8);
    }
  }
  if ( dword_1802196D0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196D0);
    if ( dword_1802196D0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v89 = sub_1800CF2C8(&Src);
      v90 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v89);
      v91 = sub_18002C218((__int64)v128, v90, "/Vertex");
      byte_1802196CC = sub_1800CF3A0(v91, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196D0);
    }
  }
  if ( dword_1802196D8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196D8);
    if ( dword_1802196D8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v92 = sub_1800CF2C8(&Src);
      v93 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v92);
      v94 = sub_18002C218((__int64)v128, v93, "/Vertex");
      byte_1802196D4 = sub_1800CF3A0(v94, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196D8);
    }
  }
  if ( dword_1802196E0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196E0);
    if ( dword_1802196E0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v95 = sub_1800CF2C8(&Src);
      v96 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v95);
      v97 = sub_18002C218((__int64)v128, v96, "/Vertex");
      byte_1802196DC = sub_1800CF3A0(v97, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196E0);
    }
  }
  if ( dword_1802196E8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196E8);
    if ( dword_1802196E8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v98 = sub_1800CF2C8(&Src);
      v99 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v98);
      v100 = sub_18002C218((__int64)v128, v99, "/Vertex");
      byte_1802196E4 = sub_1800CF3A0(v100, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196E8);
    }
  }
  if ( dword_1802196F0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196F0);
    if ( dword_1802196F0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v101 = sub_1800CF2C8(&Src);
      v102 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v101);
      v103 = sub_18002C218((__int64)v128, v102, "/Vertex");
      byte_1802196EC = sub_1800CF3A0(v103, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196F0);
    }
  }
  if ( dword_1802196F8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802196F8);
    if ( dword_1802196F8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v104 = sub_1800CF2C8(&Src);
      v105 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v104);
      v106 = sub_18002C218((__int64)v128, v105, "/Vertex");
      byte_1802196F4 = sub_1800CF3A0(v106, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802196F8);
    }
  }
  if ( dword_180219700 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219700);
    if ( dword_180219700 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v107 = sub_1800CF2C8(&Src);
      v108 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v107);
      v109 = sub_18002C218((__int64)v128, v108, "/Vertex");
      byte_1802196FC = sub_1800CF3A0(v109, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219700);
    }
  }
  if ( dword_180219708 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219708);
    if ( dword_180219708 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v110 = sub_1800CF2C8(&Src);
      v111 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v110);
      v112 = sub_18002C218((__int64)v128, v111, "/Vertex");
      byte_180219704 = sub_1800CF3A0(v112, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219708);
    }
  }
  if ( dword_180219710 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219710);
    if ( dword_180219710 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v113 = sub_1800CF2C8(&Src);
      v114 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v113);
      v115 = sub_18002C218((__int64)v128, v114, "/Vertex");
      byte_18021970C = sub_1800CF3A0(v115, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219710);
    }
  }
  if ( dword_180219718 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219718);
    if ( dword_180219718 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v116 = sub_1800CF2C8(&Src);
      v117 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v116);
      v118 = sub_18002C218((__int64)v128, v117, "/Vertex");
      byte_180219714 = sub_1800CF3A0(v118, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219718);
    }
  }
  if ( dword_180219720 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219720);
    if ( dword_180219720 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BCD80;
      *((_QWORD *)&Src + 1) = &unk_1801BD198;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v119 = sub_1800CF2C8(&Src);
      v120 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v119);
      v121 = sub_18002C218((__int64)v128, v120, "/Vertex");
      byte_18021971C = sub_1800CF3A0(v121, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219720);
    }
  }
  if ( dword_180219728 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219728);
    if ( dword_180219728 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BC650;
      *((_QWORD *)&Src + 1) = &unk_1801BCD80;
      *(_QWORD *)&v129 = 0x100000001LL;
      v126 = Src;
      v127 = v129;
      sub_18005C7A8();
      v2 = sub_1800CF2C8(&Src);
      v3 = (_QWORD *)sub_180043BDC((__int64)&v124, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18002C218((__int64)v128, v3, "/Vertex");
      byte_180219724 = sub_1800CF3A0(v4, &v126);
      std::string::_Tidy_deallocate((__int64 *)&v124);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219728);
    }
  }
  return 0LL;
}
