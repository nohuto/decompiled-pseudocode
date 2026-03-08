/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0257424
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0257C98 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C02591B0 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0019A58 (ComputeChecksum.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     Log @ 0x1C014B004 (Log.c)
 *     MulFD6 @ 0x1C014B146 (MulFD6.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 */

__int64 __fastcall ComputeRGBLUTAA(__int64 a1, __int128 *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int16 v20; // ax
  __int128 v21; // xmm0
  int v22; // r14d
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned __int64 v25; // rax
  bool v26; // zf
  int v27; // r10d
  unsigned int v28; // eax
  unsigned int v29; // r11d
  unsigned int v30; // eax
  int v31; // r11d
  unsigned int v32; // eax
  int v33; // r11d
  int v34; // eax
  int v35; // r10d
  __int64 v36; // r12
  int v37; // edx
  int v38; // ecx
  char v39; // r13
  int v40; // ebx
  __int64 v41; // rax
  int v42; // edx
  int v43; // r13d
  char *v44; // rcx
  char *v45; // rax
  int v46; // edx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // r15d
  int v53; // edx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // ebx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // edi
  __int64 v68; // rbx
  int v69; // r8d
  int v70; // eax
  int v71; // eax
  int v72; // r15d
  int v73; // eax
  int v74; // eax
  __int64 result; // rax
  unsigned __int8 *v76; // rbx
  char v77; // r13
  int v78; // r11d
  _OWORD *v79; // r8
  _WORD *v80; // r10
  int v81; // edi
  _WORD *v82; // rsi
  __int64 v83; // r14
  unsigned int v84; // ecx
  unsigned int v85; // r9d
  unsigned int v86; // kr08_4
  __int64 v87; // rcx
  _OWORD *v88; // rax
  __int128 v89; // xmm1
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // kr0C_4
  char v93; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+24h] [rbp-DCh]
  _BYTE *v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+38h] [rbp-C8h]
  int v97; // [rsp+54h] [rbp-ACh]
  int v98; // [rsp+58h] [rbp-A8h]
  int v99; // [rsp+5Ch] [rbp-A4h]
  int v100; // [rsp+60h] [rbp-A0h]
  int v101; // [rsp+64h] [rbp-9Ch]
  int v102; // [rsp+68h] [rbp-98h]
  char v103; // [rsp+6Ch] [rbp-94h]
  int v104; // [rsp+70h] [rbp-90h]
  int v105; // [rsp+74h] [rbp-8Ch]
  int v106; // [rsp+78h] [rbp-88h]
  _DWORD *v107; // [rsp+88h] [rbp-78h]
  __int128 v108; // [rsp+90h] [rbp-70h]
  __int128 v109; // [rsp+A0h] [rbp-60h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  __int64 v111; // [rsp+B8h] [rbp-48h]
  char *v112; // [rsp+C0h] [rbp-40h]
  char *v113; // [rsp+C8h] [rbp-38h]
  __int128 v115; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v116; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v117; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v118; // [rsp+108h] [rbp+8h]
  __int128 v119; // [rsp+110h] [rbp+10h] BYREF
  __int128 v120; // [rsp+120h] [rbp+20h] BYREF
  __int128 v121; // [rsp+130h] [rbp+30h]
  __int128 v122; // [rsp+140h] [rbp+40h]
  __int128 v123; // [rsp+150h] [rbp+50h]
  __int128 v124; // [rsp+160h] [rbp+60h]
  __int128 v125; // [rsp+170h] [rbp+70h]
  __int128 v126; // [rsp+180h] [rbp+80h]
  __int128 v127; // [rsp+190h] [rbp+90h]
  __int128 v128; // [rsp+1A0h] [rbp+A0h]
  __int128 v129; // [rsp+1B0h] [rbp+B0h]
  __int128 v130; // [rsp+1C0h] [rbp+C0h]
  __int128 v131; // [rsp+1D0h] [rbp+D0h]
  __int128 v132; // [rsp+1E0h] [rbp+E0h]
  int v133; // [rsp+1F0h] [rbp+F0h]
  int v134; // [rsp+200h] [rbp+100h]
  int v135; // [rsp+204h] [rbp+104h]
  int v136; // [rsp+208h] [rbp+108h]
  _DWORD v137[4]; // [rsp+210h] [rbp+110h]
  __int64 v138; // [rsp+220h] [rbp+120h]
  __int64 v139; // [rsp+228h] [rbp+128h]
  __int64 v140; // [rsp+230h] [rbp+130h]

  v108 = 0LL;
  v109 = 0LL;
  v5 = a1;
  v6 = SGDGetSessionState(a1);
  v7 = 0LL;
  v8 = *(__int128 *)((char *)a2 + 72);
  v110 = *(_QWORD *)(v6 + 48);
  v119 = *(__int128 *)((char *)a2 + 56);
  v9 = *(__int128 *)((char *)a2 + 88);
  v120 = v8;
  v10 = *(__int128 *)((char *)a2 + 104);
  v121 = v9;
  v11 = *(__int128 *)((char *)a2 + 120);
  v122 = v10;
  v12 = *(__int128 *)((char *)a2 + 136);
  v123 = v11;
  v13 = *(__int128 *)((char *)a2 + 152);
  v124 = v12;
  v14 = *(__int128 *)((char *)a2 + 184);
  v125 = v13;
  v126 = *(__int128 *)((char *)a2 + 168);
  v15 = *(__int128 *)((char *)a2 + 200);
  v127 = v14;
  v16 = *(__int128 *)((char *)a2 + 216);
  v128 = v15;
  v17 = *(__int128 *)((char *)a2 + 232);
  v129 = v16;
  v18 = *(__int128 *)((char *)a2 + 248);
  v130 = v17;
  v19 = *(__int128 *)((char *)a2 + 264);
  LODWORD(v6) = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v131 = v18;
  *(_QWORD *)&v18 = *((_QWORD *)a2 + 2);
  v132 = v19;
  v133 = v6;
  v20 = 255;
  v21 = *a2;
  v22 = v119;
  v118 = v18;
  v23 = *(__int128 *)((char *)a2 + 40);
  v117 = v21;
  v24 = *(__int128 *)((char *)a2 + 24);
  v116 = v23;
  v115 = v24;
  if ( (v119 & 0x2000) == 0 )
    v20 = 0;
  HIWORD(v118) = v20;
  WORD2(v118) = v20;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v25 = DWORD1(v116);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v136 = 1000000;
  v135 = 1000000;
  v134 = 1000000;
  v137[2] = v25;
  v137[1] = v25;
  v137[0] = v25;
  v140 = 0LL;
  v139 = 0LL;
  v138 = 0LL;
  if ( (v22 & 0x40000) != 0 )
  {
    DWORD2(v115) = MulFD6(299000, SHIDWORD(v115));
    LODWORD(v116) = MulFD6(114000, SHIDWORD(v115));
    *(_WORD *)((char *)&v116 + 9) = 256;
    HIDWORD(v115) -= DWORD2(v115) + v116;
    v7 = 0LL;
    WORD1(v115) = 0;
    BYTE1(v115) = 0;
    BYTE11(v116) = 2;
  }
  else if ( (v22 & 0x10000) != 0 )
  {
    v26 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v134 = *(_DWORD *)(v5 + 468);
    v135 = *(_DWORD *)(v5 + 464);
    v136 = *(_DWORD *)(v5 + 460);
    if ( !v26 )
    {
      v138 = v5 + 524;
      v139 = v5 + 500;
      v140 = v5 + 476;
    }
  }
  v27 = HIDWORD(v116);
  if ( (v22 & 0x20000) == 0 )
    v27 = 1000000;
  HIDWORD(v116) = v27;
  v28 = ComputeChecksum((char *)&v119 + 4, v22 & 0x40321000, 0xCu);
  v30 = ComputeChecksum((char *)&v120, v28, v29);
  v32 = ComputeChecksum((char *)&v117, v30, v31 + 12);
  v34 = ComputeChecksum((char *)&v115, v32, v33 + 20);
  v36 = 256LL;
  v37 = *(unsigned __int16 *)(v5 + 7058);
  v38 = *(unsigned __int16 *)(v5 + 7056);
  v39 = v115;
  v106 = v37;
  if ( *a3 != v34 )
  {
    *a3 = v34;
    v40 = v22 & 0x1000;
    *(_WORD *)(v5 + 7056) = 256;
    if ( (v22 & 0x1000) != 0 )
    {
      v41 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v108 = *(_OWORD *)((char *)&RegData + v41);
      v109 = *(_OWORD *)((char *)&RegData + v41 + 16);
    }
    v107 = a3 + 7;
    v100 = DWORD1(v116) - 1;
    v93 = v39 & 1;
    v104 = 1000000 - v35;
    v42 = 3;
    if ( !(v39 & 1) && (v22 & 0x100000) != 0 )
      v7 = *(_BYTE **)(v5 + 7064);
    v43 = HIDWORD(v116);
    v44 = (char *)&v116 + 12;
    v95 = v7;
    v102 = ~(DWORD1(v116) - 1);
    v45 = (char *)&v120 + 12;
    while ( 1 )
    {
      v112 = v45 - 4;
      v113 = v44 - 1;
      v105 = v42 - 1;
      v46 = *((_DWORD *)v45 - 4);
      v97 = *((_DWORD *)v45 - 1);
      v47 = (unsigned __int8)*(v44 - 1);
      v96 = v46;
      v101 = *(&v134 + v47);
      v99 = v137[v47];
      DWORD1(v116) = v99;
      v103 = *((_BYTE *)&v115 + v47 + 1);
      v48 = *((_DWORD *)&v115 + v47 + 2);
      v111 = *(&v138 + v47);
      v49 = 0;
      v94 = 0;
      v98 = v48;
      do
      {
        v50 = DivFD6(v49, 255);
        v51 = 0;
        v52 = v50;
        if ( (v22 & 2) != 0 )
        {
          v50 = RaisePower(v50, v96, 0);
          v51 = 0;
        }
        if ( (v22 & 8) != 0 )
        {
          if ( v50 <= (int)v122 )
          {
            v53 = DWORD2(v122);
            goto LABEL_25;
          }
          if ( v50 < SDWORD1(v122) )
          {
            v50 -= v122;
            v53 = v123;
LABEL_25:
            v50 = MulFD6(v50, v53);
          }
          else
          {
            v50 = MulFD6(v50 - DWORD1(v122), SHIDWORD(v122)) + 1000000;
          }
          v51 = 0;
        }
        if ( (v22 & 0x10) != 0 )
        {
          v50 = MulFD6(v50, SHIDWORD(v120));
          v51 = 0;
        }
        if ( (v22 & 0x20) != 0 )
          v50 += v121;
        if ( (v22 & 0x100) != 0 )
        {
          v54 = Log(7 * v50 + 1000000);
          v50 = DivFD6(v54, *(_DWORD *)(v110 + 1104));
          v51 = 0;
        }
        if ( v50 >= 0 )
        {
          if ( v50 > 1000000 )
            v50 = 1000000;
        }
        else
        {
          v50 = 0;
        }
        v55 = 1000000 - v50;
        if ( (v22 & 0x200) == 0 )
          v55 = v50;
        if ( v40 )
        {
          if ( v55 > SDWORD1(v108) )
          {
            if ( v55 < SDWORD2(v108) )
            {
              if ( v55 <= 79996 )
              {
                v65 = DivFD6(v55, 9033000);
              }
              else
              {
                v63 = DivFD6(v55 + 160000, 1160000);
                v64 = MulFD6(v63, v63);
                v65 = MulFD6(v63, v64);
              }
              v66 = Log(v65);
              v59 = DWORD2(v109) + MulFD6(v66, SHIDWORD(v109));
            }
            else
            {
              v60 = DivFD6(v55 - DWORD2(v108), 1000000 - DWORD2(v108));
              v61 = RaisePower(v60, 2000000, 0);
              v62 = MulFD6(v61, 1000000 - DWORD2(v108));
              v59 = v109 + MulFD6(DWORD2(v108) + v62, SDWORD1(v109));
            }
          }
          else
          {
            v56 = DivFD6(v55, SDWORD1(v108));
            v57 = RaisePower(1000000 - v56, 1500000, 0);
            v58 = MulFD6(1000000 - v57, SDWORD1(v108));
            v59 = MulFD6(v58, SHIDWORD(v108));
          }
          v55 = (v59 + 50) / 100;
          v51 = 0;
        }
        if ( v55 >= 0 )
        {
          if ( v55 > 1000000 )
            v55 = 1000000;
        }
        else
        {
          v55 = 0;
        }
        if ( (v22 & 4) != 0 )
        {
          v55 = RaisePower(v55, v97, 0);
          v51 = 0;
        }
        if ( v7 )
        {
          *v7 = MulFD6(v55, 255);
          v55 = v52;
          v95 = v7 + 1;
          v51 = 0;
        }
        v67 = 1000000 - v55;
        if ( v93 )
          v67 = v55;
        if ( v111 )
        {
          LODWORD(v68) = -1;
          do
          {
            v68 = (unsigned int)(v68 + 1);
            v69 = v51;
            v51 = *(_DWORD *)(v111 + 4 * v68);
          }
          while ( v67 > v51 );
          v70 = DivFD6(v67 - v69, v51 - v69);
          v71 = ((_DWORD)v68 << 12) + MulFD6(v70, 4095);
        }
        else
        {
          v71 = MulFD6(v67, v98);
        }
        v72 = ((v102 & (v71 + v99)) << v103) | MulFD6(v100 & (unsigned int)(v71 + v99), v101);
        if ( v67 > v43 )
        {
          v73 = DivFD6(v67 - v43, v104);
          v74 = RaisePower(v73, 2000000, 0);
          v72 |= (unsigned int)MulFD6(v74, 1365) << 21;
        }
        v7 = v95;
        v49 = v94 + 1;
        v40 = v22 & 0x1000;
        *v107++ = v72;
        v94 = v49;
      }
      while ( v49 < 256 );
      v42 = v105;
      v45 = v112;
      v44 = v113;
      if ( !v105 )
      {
        v5 = a1;
        v38 = 256;
        v22 = v119;
        v39 = v115;
        v37 = v106;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v22 & 0x300000) == 0x300000 && v38 != v37 )
  {
    v76 = *(unsigned __int8 **)(v5 + 7064);
    v77 = v39 & 1;
    *(_WORD *)(v5 + 7056) = v37;
    *(_WORD *)(v5 + 7058) = v37;
    v78 = 127;
    v79 = v76 + 768;
    v80 = v76 + 2304;
    v81 = 127;
    v82 = v76 + 2304;
    v83 = 256LL;
    v84 = (v37 * ((unsigned int)(unsigned __int8)-(v77 != 0) + 65280) + 127) / 0xFF;
    v85 = (unsigned __int8)-(v77 != 0) + 65280 - v84;
    do
    {
      v86 = v81;
      v81 += v84;
      *v82++ = v86 / 0xFF;
      --v83;
    }
    while ( v83 );
    if ( v77 )
    {
      v87 = 4LL;
      v88 = v76 + 2304;
      do
      {
        *v79 = *v88;
        v79[1] = v88[1];
        v79[2] = v88[2];
        v79[3] = v88[3];
        v79[4] = v88[4];
        v79[5] = v88[5];
        v79[6] = v88[6];
        v79 += 8;
        v89 = v88[7];
        v88 += 8;
        *(v79 - 1) = v89;
        --v87;
      }
      while ( v87 );
    }
    else
    {
      v90 = 768;
      do
      {
        v91 = *v76++;
        *(_WORD *)v79 = v80[v91];
        v79 = (_OWORD *)((char *)v79 + 2);
        --v90;
      }
      while ( v90 );
    }
    do
    {
      v92 = v78;
      result = (unsigned int)(-2139062143 * v78);
      v78 += v85;
      *v80++ = v92 / 0xFF;
      --v36;
    }
    while ( v36 );
  }
  return result;
}
