/*
 * XREFs of pDCIAdjClr @ 0x1C02583A8
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C0252A88 (HT_CreateHalftoneBrush.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0252C14 (HT_CreateStandardMonoPattern.c)
 *     HT_HalftoneBitmap @ 0x1C025325C (HT_HalftoneBitmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     Log @ 0x1C014B004 (Log.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     CompareMemory @ 0x1C014C736 (CompareMemory.c)
 *     AdjustSrcDevGamma @ 0x1C0256104 (AdjustSrcDevGamma.c)
 *     ComputeColorSpaceXForm @ 0x1C0257078 (ComputeColorSpaceXForm.c)
 *     GenCMYMaskXlate @ 0x1C0257F10 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C0258144 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // r8
  unsigned int i; // ecx
  unsigned int v16; // eax
  char *v17; // rax
  char *v18; // r12
  int v19; // r15d
  __int16 v20; // r8
  __int16 v21; // dx
  __int16 v22; // si
  __int64 v23; // xmm0_8
  __int16 v24; // cx
  char v25; // r8d^2
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // ecx
  __int16 v42; // cx
  char v43; // r14
  int v44; // eax
  __m128i v45; // xmm2
  int v46; // r11d
  unsigned int v47; // ebx
  int v48; // ebx
  char v49; // r15
  __int64 v50; // r15
  unsigned __int16 epi16; // ax
  int v52; // eax
  unsigned int v53; // ebx
  int v54; // r12d
  __int64 v55; // rdx
  int v56; // r15d
  int v57; // ecx
  unsigned int v58; // ecx
  __int64 v59; // xmm0_8
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  int v73; // eax
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  int v77; // ebx
  int v78; // esi
  char v79; // r8
  unsigned __int8 v80; // r9
  char v81; // dl
  int v82; // ecx
  char v83; // al
  char *v84; // rcx
  __int64 v85; // rax
  int v86; // ecx
  int v87; // ecx
  char v88; // al
  __int64 v89; // r9
  int v90; // eax
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  int v103; // eax
  __int16 v105; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+30h] [rbp-D0h]
  __int128 v107; // [rsp+38h] [rbp-C8h]
  __int128 v108; // [rsp+48h] [rbp-B8h]
  __int16 v109; // [rsp+58h] [rbp-A8h]
  char *v110; // [rsp+60h] [rbp-A0h]
  __int64 v111; // [rsp+68h] [rbp-98h]
  __int128 v112; // [rsp+70h] [rbp-90h] BYREF
  __int128 v113; // [rsp+80h] [rbp-80h]
  __int128 v114; // [rsp+90h] [rbp-70h] BYREF
  __m256i v115; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v116; // [rsp+C0h] [rbp-40h]
  __int128 v117; // [rsp+D0h] [rbp-30h]
  __int128 v118; // [rsp+E0h] [rbp-20h]
  __int128 v119; // [rsp+F0h] [rbp-10h]
  __int128 v120; // [rsp+100h] [rbp+0h] BYREF
  __int128 v121; // [rsp+110h] [rbp+10h]
  __int128 v122; // [rsp+120h] [rbp+20h]
  __int128 v123; // [rsp+130h] [rbp+30h]
  __int128 v124; // [rsp+140h] [rbp+40h]
  int v125; // [rsp+150h] [rbp+50h]
  __int128 v126; // [rsp+160h] [rbp+60h] BYREF
  __int64 v127; // [rsp+170h] [rbp+70h]
  __int128 v128; // [rsp+178h] [rbp+78h] BYREF
  __int64 v129; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    v13 = *(_QWORD *)(SGDGetSessionState(v12) + 48);
    v111 = v13;
    if ( (a5 & 0x200) != 0 && *(_DWORD *)(v13 + 80) )
    {
      *(_DWORD *)(v13 + 80) = 0;
      v14 = (unsigned int *)(v13 + 84);
      for ( i = 1; i < 0x100; ++i )
      {
        v16 = (i - 16777217) / i;
        *v14++ = v16;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v17 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v17;
      v110 = v17;
      v18 = v17;
      if ( v17 )
      {
        v19 = *(_DWORD *)(v11 + 184);
        DWORD1(v107) = a6;
        v20 = a5 | 8;
        v105 = v19;
        if ( (v19 & 0x80u) == 0 )
          v20 = a5;
        if ( HIBYTE(a6) == 1 || (v21 = v20, HIBYTE(a6) == 0xFE) && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v21 = v20 | 0x41;
        v22 = v21 & 0xFFEF;
        v109 = v21 & 0x10;
        if ( (v21 & 8) == 0 )
          v22 = v21;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v23 = a2[1].m128i_i64[0];
        v24 = _mm_cvtsi128_si32(*a2);
        v126 = (__int128)*a2;
        v127 = v23;
        if ( v24 != 24 || (v25 = BYTE2(v126), (WORD1(v126) & 0xFFFC) != 0) )
        {
          v126 = DefaultCA;
          v25 = BYTE2(DefaultCA);
          v127 = 0LL;
        }
        v26 = *(_QWORD *)(v11 + 212);
        v128 = *(_OWORD *)(v11 + 196);
        v27 = *(_OWORD *)(v11 + 220);
        v129 = v26;
        v28 = *(_OWORD *)(v11 + 236);
        WORD1(v126) = v25 & 3;
        v112 = v27;
        v29 = *(_OWORD *)(v11 + 252);
        v113 = v28;
        v30 = *(_OWORD *)(v11 + 268);
        v114 = v29;
        v31 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v115.m256i_i8 = v30;
        v32 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v115.m256i_u64[2] = v31;
        v33 = *(_OWORD *)(v11 + 316);
        v116 = v32;
        v34 = *(_OWORD *)(v11 + 332);
        v117 = v33;
        v35 = *(_OWORD *)(v11 + 348);
        v118 = v34;
        v36 = *(_OWORD *)(v11 + 364);
        v119 = v35;
        v37 = *(_OWORD *)(v11 + 380);
        v120 = v36;
        v38 = *(_OWORD *)(v11 + 396);
        v121 = v37;
        v39 = *(_OWORD *)(v11 + 412);
        v122 = v38;
        v40 = *(_OWORD *)(v11 + 428);
        v41 = *(_DWORD *)(v11 + 444);
        v123 = v39;
        v124 = v40;
        v125 = v41;
        if ( WORD2(v126) > 8u )
          WORD2(v126) = 0;
        if ( WORD3(v126) >= 0x540u )
        {
          if ( WORD3(v126) > 0xFDE8u )
            WORD3(v126) = -536;
        }
        else
        {
          WORD3(v126) = 1344;
        }
        if ( WORD4(v126) >= 0x540u )
        {
          if ( WORD4(v126) > 0xFDE8u )
            WORD4(v126) = -536;
        }
        else
        {
          WORD4(v126) = 1344;
        }
        if ( WORD5(v126) >= 0x540u )
        {
          if ( WORD5(v126) > 0xFDE8u )
            WORD5(v126) = -536;
        }
        else
        {
          WORD5(v126) = 1344;
        }
        if ( WORD6(v126) > 0xFA0u )
          WORD6(v126) = 4000;
        if ( HIWORD(v126) >= 0x1770u )
        {
          if ( HIWORD(v126) > 0x2710u )
            HIWORD(v126) = 10000;
        }
        else
        {
          HIWORD(v126) = 6000;
        }
        if ( (__int16)v127 >= -100 )
        {
          if ( (__int16)v127 > 100 )
            LOWORD(v127) = 100;
        }
        else
        {
          LOWORD(v127) = -100;
        }
        if ( SWORD1(v127) >= -100 )
        {
          if ( SWORD1(v127) > 100 )
            WORD1(v127) = 100;
        }
        else
        {
          WORD1(v127) = -100;
        }
        v42 = WORD2(v127);
        if ( SWORD2(v127) >= -100 )
        {
          if ( SWORD2(v127) > 100 )
          {
            v42 = 100;
            WORD2(v127) = 100;
          }
        }
        else
        {
          v42 = -100;
          WORD2(v127) = -100;
        }
        if ( SHIWORD(v127) >= -100 )
        {
          if ( SHIWORD(v127) > 100 )
            HIWORD(v127) = 100;
        }
        else
        {
          HIWORD(v127) = -100;
        }
        if ( (v22 & 1) != 0 || v42 == -100 )
          HIDWORD(v127) = 65436;
        v43 = 2;
        if ( (v22 & 2) != 0 )
          WORD1(v126) = v25 & 2 | 1;
        LOWORD(v126) = v22 & 0x8059;
        v44 = AdjustSrcDevGamma(v11, (__int64)&v112, (unsigned __int16 *)&v126, HIBYTE(a6), v22);
        v45 = (__m128i)v126;
        v46 = 0;
        if ( !v44 && (unsigned int)CompareMemory((__int64)&v126, (char *)&v128, 24) )
        {
          v47 = v112;
          goto LABEL_103;
        }
        v48 = v112 & 0x1007;
        LODWORD(v112) = v48;
        if ( (v22 & 0x40) != 0 )
        {
          v48 |= 0x2000u;
          LODWORD(v112) = v48;
        }
        v49 = _mm_cvtsi128_si32(_mm_srli_si128(v45, 2));
        if ( (v49 & 2) != 0 )
        {
          if ( *(_DWORD *)(v111 + 1104) == v46 )
            *(_DWORD *)(v111 + 1104) = Log(8000000);
          v48 |= 0x100u;
          LODWORD(v112) = v48;
        }
        if ( (v49 & 1) != 0 )
        {
          v48 |= 0x200u;
          LODWORD(v112) = v48;
        }
        v50 = v11 + (-(__int64)((v48 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v45) ^ (unsigned __int16)v128) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            (unsigned int *)(v11 + (-(__int64)((v48 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72),
            (__int64)&v120 + 4,
            -1);
          v48 = v112;
        }
        epi16 = _mm_extract_epi16(v45, 2);
        if ( epi16 != WORD2(v128) )
        {
          ComputeColorSpaceXForm(v11, (unsigned int *)(v11 + 36), (__int64)&v115.m256i_i64[2] + 4, epi16);
          v48 = v112;
        }
        if ( (v48 & 0x2000) != 0 )
        {
          v46 = 0;
        }
        else
        {
          v52 = CompareMemory(v50, (char *)(v11 + 36), 36);
          v46 = 0;
          if ( !v52 )
          {
            v53 = v48 | 0x8000;
            goto LABEL_84;
          }
        }
        v53 = v48 & 0xFFFF7FFF;
LABEL_84:
        v54 = (unsigned __int16)_mm_extract_epi16(v45, 6);
        v55 = (unsigned int)(100 * v54);
        v56 = (unsigned __int16)_mm_extract_epi16(v45, 7);
        v115.m256i_i32[0] = 100 * v54;
        v115.m256i_i32[1] = 100 * v56;
        if ( v54 || 100 * v56 != 1000000 )
        {
          v47 = v53 | 8;
          LODWORD(v112) = v47;
          v115.m256i_i32[2] = DivFD6(0, v55);
          v115.m256i_i32[3] = DivFD6(0, 100 * (10000 - v56));
          v115.m256i_i32[4] = DivFD6(1000000, 100 * (v56 - v54));
          v46 = 0;
        }
        else
        {
          v47 = v53 & 0xFFFFFFF7;
          v115.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v115.m256i_i64[1] + 4) = 0LL;
          LODWORD(v112) = v47;
          *(__int64 *)((char *)v115.m256i_i64 + 4) = 1000000LL;
        }
        if ( (_WORD)v127 )
        {
          v47 |= 0x10u;
          HIDWORD(v113) = RaisePower(1015000, (__int16)v127, 2);
          LODWORD(v112) = v47;
          v46 = 0;
        }
        if ( WORD1(v127) )
        {
          v47 |= 0x20u;
          LODWORD(v112) = v47;
          LODWORD(v114) = 3750 * SWORD1(v127);
        }
        if ( (v47 & 0x2000) != 0 )
        {
          LOWORD(v19) = v105;
        }
        else
        {
          v57 = 10000 * SWORD2(v127);
          DWORD1(v114) = v57 + 1000000;
          if ( v57 )
          {
            v47 |= 0x40u;
            LODWORD(v112) = v47;
          }
          if ( HIWORD(v127) )
          {
            TintAngle(SHIWORD(v127), v55, (int *)&v114 + 2, (int *)&v114 + 3);
            v47 = v112 | 0x80;
            LODWORD(v112) = v112 | 0x80;
            v46 = 0;
          }
          LOWORD(v19) = v105;
          v58 = v47;
          if ( (v105 & 4) != 0 && (v47 & 0x1001) == 0x1000 )
          {
            v47 |= 0x400u;
            LODWORD(v112) = v47;
            if ( (v105 & 1) != 0 )
            {
              v47 = v58 | 0xC00;
              LODWORD(v112) = v58 | 0xC00;
            }
          }
        }
        v59 = v127;
        v60 = v113;
        v18 = v110;
        *(__m128i *)(v11 + 196) = v45;
        *(_QWORD *)(v11 + 212) = v59;
        *(_OWORD *)(v11 + 220) = v112;
        v61 = v114;
        *(_OWORD *)(v11 + 236) = v60;
        v62 = *(_OWORD *)v115.m256i_i8;
        *(_OWORD *)(v11 + 252) = v61;
        v63 = *(_OWORD *)&v115.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v62;
        v64 = v116;
        *(_OWORD *)(v11 + 284) = v63;
        v65 = v117;
        *(_OWORD *)(v11 + 300) = v64;
        v66 = v118;
        *(_OWORD *)(v11 + 316) = v65;
        v67 = v119;
        *(_OWORD *)(v11 + 332) = v66;
        v68 = v120;
        *(_OWORD *)(v11 + 348) = v67;
        v69 = v121;
        *(_OWORD *)(v11 + 364) = v68;
        v70 = v122;
        *(_OWORD *)(v11 + 380) = v69;
        v71 = v123;
        *(_OWORD *)(v11 + 396) = v70;
        v72 = v124;
        v73 = v125;
        *(_OWORD *)(v11 + 412) = v71;
        *(_OWORD *)(v11 + 428) = v72;
        *(_DWORD *)(v11 + 444) = v73;
LABEL_103:
        v74 = v47 & 0x3DB4BFFF;
        LODWORD(v112) = v74;
        if ( (v74 & 0x97FE) == 0 )
        {
          v74 |= 0x80000000;
          LODWORD(v112) = v74;
        }
        if ( (v74 & 0x84C0) == 0 || (v74 & 0x2000) != 0 )
        {
          v74 |= 0x40000000u;
          LODWORD(v112) = v74;
        }
        if ( (v22 & 0x20) != 0 || (v19 & 0x1000) != 0 )
        {
          v74 |= 0x80000u;
          LODWORD(v112) = v74;
        }
        v75 = v74;
        if ( (v22 & 0x80u) != 0 )
        {
          v74 |= 0x100000u;
          LODWORD(v112) = v74;
          if ( (v22 & 0x100) != 0 )
          {
            v74 = v75 | 0x300000;
LABEL_116:
            LODWORD(v112) = v74;
            goto LABEL_117;
          }
          if ( (v22 & 0x200) != 0 )
          {
            v74 = v75 | 0x900000;
            LODWORD(v112) = v75 | 0x900000;
          }
          if ( (v22 & 0x400) != 0 )
          {
            v74 |= 0x1000000u;
            goto LABEL_116;
          }
        }
LABEL_117:
        if ( (v22 & 4) != 0 )
        {
          v74 |= 0x4000u;
          LODWORD(v112) = v74;
        }
        HIDWORD(v108) = 1000000;
        v129 = 0LL;
        LODWORD(v107) = 67372032;
        BYTE4(v107) = 3;
        v128 = 0LL;
        if ( (v74 & 0x2000) != 0 )
        {
          v74 |= 0x40000u;
          LOBYTE(v107) = 1;
          LODWORD(v112) = v74;
          v76 = 0xFFFF;
          DWORD1(v108) = v46;
        }
        else
        {
          DWORD1(v108) = 4096;
          v76 = 4095;
        }
        DWORD2(v107) = v76;
        HIDWORD(v107) = v76;
        LODWORD(v108) = v76;
        switch ( HIBYTE(a6) )
        {
          case 1u:
            BYTE6(v107) = v46;
            goto LABEL_168;
          case 2u:
            goto LABEL_131;
          case 5u:
          case 6u:
            WORD1(v107) = 0;
            *(_QWORD *)&v108 = 255LL;
            BYTE1(v107) = v46;
            *((_QWORD *)&v107 + 1) = 0xFF000000FFLL;
            *(_QWORD *)((char *)&v128 + 4) = 0x200000001LL;
            goto LABEL_168;
          case 0xFCu:
            if ( BYTE2(a6) )
            {
              v88 = BYTE2(a6);
              if ( BYTE2(a6) != 4 )
                v88 = v46;
              BYTE6(v107) = v88;
            }
            LODWORD(v108) = 126975;
            *((_QWORD *)&v107 + 1) = 0x3EFFF0001EFFFLL;
            v129 = -1LL;
            *(_QWORD *)&v128 = 0x7E00000001F0000LL;
            *((_QWORD *)&v128 + 1) = -134217728LL;
            WORD1(v107) = 3849;
            goto LABEL_168;
          case 0xFDu:
            *(_QWORD *)&v128 = 0x3E00000001F0000LL;
            LODWORD(v108) = 126975;
            *((_QWORD *)&v107 + 1) = 0x1EFFF0001EFFFLL;
            v129 = 0x7FFF7FFF7FFF7FFFLL;
            *((_QWORD *)&v128 + 1) = 0x7FFF7FFF7C000000LL;
            WORD1(v107) = 3593;
            goto LABEL_168;
        }
        if ( HIBYTE(a6) != 254 )
        {
          if ( HIBYTE(a6) != 255 )
          {
LABEL_168:
            *(__m128i *)v18 = v45;
            v89 = (unsigned __int8)BYTE1(DstOrderTable[BYTE6(v107)]);
            DWORD2(v108) = DstOrderTable[BYTE6(v107)];
            v90 = *((_DWORD *)&v128 + v89);
            *(_OWORD *)(v18 + 24) = v107;
            *((_QWORD *)v18 + 2) = v127;
            *(_OWORD *)(v18 + 40) = v108;
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 868) = v90;
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 864) = *((_DWORD *)&v128 + BYTE10(v108));
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 860) = *((_DWORD *)&v128 + BYTE11(v108));
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 880) = *((_DWORD *)&v128 + v89 + 3);
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 876) = *((_DWORD *)&v128 + BYTE10(v108) + 3);
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 872) = *((_DWORD *)&v128 + BYTE11(v108) + 3);
            v91 = v113;
            *(_OWORD *)(v18 + 56) = v112;
            v92 = v114;
            *(_OWORD *)(v18 + 72) = v91;
            v93 = *(_OWORD *)v115.m256i_i8;
            *(_OWORD *)(v18 + 88) = v92;
            v94 = *(_OWORD *)&v115.m256i_u64[2];
            *(_OWORD *)(v18 + 104) = v93;
            v95 = v116;
            *(_OWORD *)(v18 + 120) = v94;
            v96 = v117;
            *(_OWORD *)(v18 + 136) = v95;
            v97 = v118;
            *(_OWORD *)(v18 + 152) = v96;
            *(_OWORD *)(v18 + 168) = v97;
            v98 = v120;
            *(_OWORD *)(v18 + 184) = v119;
            v99 = v121;
            *(_OWORD *)(v18 + 200) = v98;
            v100 = v122;
            *(_OWORD *)(v18 + 216) = v99;
            v101 = v123;
            *(_OWORD *)(v18 + 232) = v100;
            v102 = v124;
            v103 = v125;
            *(_OWORD *)(v18 + 248) = v101;
            *(_OWORD *)(v18 + 264) = v102;
            *((_DWORD *)v18 + 70) = v103;
            *((_QWORD *)v18 + 36) = v11 + 32;
            *((_QWORD *)v18 + 37) = v11 + 808;
            *((_QWORD *)v18 + 38) = v11 + 832;
            return v11;
          }
          BYTE6(v107) = 4;
          LODWORD(v112) = v74 | 0x4000;
LABEL_131:
          LODWORD(v128) = 0x100000;
          *(_QWORD *)((char *)&v128 + 4) = 0x40000000200000LL;
          HIDWORD(v128) = 0x10000;
          v129 = 0x4000000020000LL;
          WORD1(v107) = 1541;
          DWORD1(v108) = v46;
          goto LABEL_168;
        }
        if ( (v19 & 0x100) == 0 )
        {
          *(_QWORD *)&v128 = 0x38000000070000LL;
          LODWORD(v108) = 20479;
          *((_QWORD *)&v107 + 1) = 0x4FFF00004FFFLL;
          LODWORD(v112) = v74 & 0xFFFEFFFF;
          DWORD2(v128) = 29360128;
          WORD1(v107) = 2567;
          BYTE6(v107) = 4;
          goto LABEL_168;
        }
        v77 = v74 | 0x10000;
        LOBYTE(v106) = v46;
        LODWORD(v112) = v77;
        v78 = v19 & 0x2000;
        if ( *(_BYTE *)(v11 + 804) != (_BYTE)v46 )
        {
          GenCMYMaskXlate(
            (_BYTE *)(v11 + 548),
            v78,
            *(unsigned __int8 *)(v11 + 448),
            *(unsigned __int8 *)(v11 + 449),
            *(unsigned __int8 *)(v11 + 450));
          LOBYTE(v46) = 0;
          *(_BYTE *)(v11 + 804) = 0;
        }
        if ( (v19 & 0x2000) != 0 )
        {
          LOWORD(v106) = -254;
        }
        else
        {
          v43 = v106;
          BYTE1(v106) = v46;
        }
        HIBYTE(v106) = -(v78 != 0);
        BYTE2(v106) = *(_BYTE *)(v11 + 452) ^ HIBYTE(v106);
        if ( (v19 & 0x200) != 0 )
        {
          WORD3(v107) = -1280;
          *(_QWORD *)((char *)&v128 + 4) = 0xFF000000FF0000LL;
          LODWORD(v128) = 16711680;
LABEL_158:
          HIDWORD(v129) = v106;
          LODWORD(v129) = v106;
          HIDWORD(v128) = v106;
          goto LABEL_168;
        }
        v79 = 7;
        v80 = *(_BYTE *)(v11 + 453);
        v81 = 10;
        WORD1(v107) = 2567;
        DWORD2(v107) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
        HIDWORD(v107) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
        LODWORD(v108) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
        LODWORD(v128) = *(unsigned __int16 *)(v11 + 458);
        DWORD1(v128) = *(unsigned __int16 *)(v11 + 456);
        DWORD2(v128) = *(unsigned __int16 *)(v11 + 454);
        if ( (unsigned int)v80 - 4 < 2 )
        {
          if ( v80 == 4 )
          {
            BYTE7(v107) = -7;
          }
          else
          {
            BYTE7(v107) = -8;
            v43 |= 1u;
          }
          v77 |= 0x400000u;
          LOBYTE(v106) = v43 & 3;
          v84 = (char *)*(&p8BPPXlate + (v43 & 3));
          v85 = 292LL;
          if ( v80 != 4 )
            v85 = 365LL;
          BYTE2(v106) = v84[v85];
          v83 = *v84;
          v82 = 249 - (v80 != 4);
        }
        else
        {
          v82 = 250;
          WORD1(v107) = 2310;
          BYTE7(v107) = -6;
          v79 = 6;
          v81 = 9;
          if ( (v19 & 0x2000) == 0 )
          {
LABEL_150:
            if ( *(_DWORD *)(v11 + 472) )
            {
              HIDWORD(v108) = *(_DWORD *)(v11 + 472);
              LODWORD(v112) = v77 | 0x20000;
              BYTE1(v107) = v46;
              BYTE2(v107) = v79 - 4;
              BYTE3(v107) = v81 - 4;
              v86 = v82 - 248;
              if ( v86 )
              {
                v87 = v86 - 1;
                if ( v87 )
                {
                  if ( v87 == 1 )
                    BYTE7(v107) = -9;
                }
                else
                {
                  BYTE7(v107) = -10;
                }
              }
              else
              {
                BYTE7(v107) = -11;
              }
            }
            BYTE6(v107) = v46;
            goto LABEL_158;
          }
          v77 |= 0x2000000u;
          BYTE2(v106) = *(_BYTE *)(v11 + 803);
          v83 = *(_BYTE *)(v11 + 548);
        }
        HIBYTE(v106) = v83;
        LODWORD(v112) = v77;
        goto LABEL_150;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
