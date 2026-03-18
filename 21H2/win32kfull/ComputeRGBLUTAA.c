/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0094050
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0093DC8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C025F874 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C00945A4 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00945F0 (MulFD6.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 *     Log @ 0x1C00957B4 (Log.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(_DWORD *a1, __int128 *a2, _DWORD *a3)
{
  _DWORD *v3; // rsi
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int16 v18; // ax
  __int128 v19; // xmm0
  int v20; // r14d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int v27; // eax
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r11d
  int v31; // eax
  int v32; // r10d
  __int64 v33; // r12
  int v34; // edx
  int v35; // ecx
  char v36; // r13
  __int64 result; // rax
  int v38; // ebx
  int v39; // ecx
  int v40; // esi
  char v41; // al
  _BYTE *v42; // r14
  char *v43; // rdx
  char *v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // r15
  unsigned int v47; // ecx
  unsigned int v48; // eax
  int v49; // eax
  int v50; // edx
  int v51; // edi
  __int64 v52; // rcx
  signed int v53; // edi
  int v54; // eax
  int v55; // r15d
  __int64 v56; // rdx
  bool v57; // zf
  __int64 v58; // rax
  unsigned int v59; // eax
  int v60; // eax
  int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  int v66; // eax
  __int64 v67; // rbx
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rbx
  int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
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
  unsigned int v86; // kr04_4
  __int64 v87; // rcx
  _OWORD *v88; // rax
  __int128 v89; // xmm1
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // kr08_4
  int v93; // [rsp+24h] [rbp-DCh]
  int v94; // [rsp+28h] [rbp-D8h]
  _BYTE *v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+30h] [rbp-D0h]
  unsigned int v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+3Ch] [rbp-C4h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh]
  int v101; // [rsp+48h] [rbp-B8h]
  int v102; // [rsp+4Ch] [rbp-B4h]
  int v103; // [rsp+50h] [rbp-B0h]
  unsigned int v104; // [rsp+54h] [rbp-ACh]
  unsigned int v105; // [rsp+58h] [rbp-A8h]
  int v106; // [rsp+5Ch] [rbp-A4h]
  int v107; // [rsp+60h] [rbp-A0h]
  unsigned int v108; // [rsp+64h] [rbp-9Ch]
  int v109; // [rsp+68h] [rbp-98h]
  char v110; // [rsp+6Ch] [rbp-94h]
  unsigned int v111; // [rsp+70h] [rbp-90h]
  int v112; // [rsp+74h] [rbp-8Ch]
  int v113; // [rsp+78h] [rbp-88h]
  _DWORD *v114; // [rsp+80h] [rbp-80h]
  __int128 v115; // [rsp+88h] [rbp-78h]
  __int128 v116; // [rsp+98h] [rbp-68h]
  _DWORD *v117; // [rsp+A8h] [rbp-58h]
  char *v118; // [rsp+B0h] [rbp-50h]
  char *v119; // [rsp+B8h] [rbp-48h]
  __int128 v121; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v122; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v123; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v124; // [rsp+F8h] [rbp-8h]
  __int128 v125; // [rsp+100h] [rbp+0h] BYREF
  __int128 v126; // [rsp+110h] [rbp+10h] BYREF
  __int128 v127; // [rsp+120h] [rbp+20h]
  __int128 v128; // [rsp+130h] [rbp+30h]
  __int128 v129; // [rsp+140h] [rbp+40h]
  __int128 v130; // [rsp+150h] [rbp+50h]
  __int128 v131; // [rsp+160h] [rbp+60h]
  __int128 v132; // [rsp+170h] [rbp+70h]
  __int128 v133; // [rsp+180h] [rbp+80h]
  __int128 v134; // [rsp+190h] [rbp+90h]
  __int128 v135; // [rsp+1A0h] [rbp+A0h]
  __int128 v136; // [rsp+1B0h] [rbp+B0h]
  __int128 v137; // [rsp+1C0h] [rbp+C0h]
  __int128 v138; // [rsp+1D0h] [rbp+D0h]
  int v139; // [rsp+1E0h] [rbp+E0h]
  int v140; // [rsp+1F0h] [rbp+F0h]
  int v141; // [rsp+1F4h] [rbp+F4h]
  int v142; // [rsp+1F8h] [rbp+F8h]
  _DWORD v143[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v144; // [rsp+210h] [rbp+110h]
  _DWORD *v145; // [rsp+218h] [rbp+118h]
  _DWORD *v146; // [rsp+220h] [rbp+120h]

  v3 = a1;
  v4 = *(__int128 *)((char *)a2 + 72);
  v115 = 0LL;
  v116 = 0LL;
  v125 = *(__int128 *)((char *)a2 + 56);
  v6 = *(__int128 *)((char *)a2 + 88);
  v126 = v4;
  v7 = *(__int128 *)((char *)a2 + 104);
  v127 = v6;
  v8 = *(__int128 *)((char *)a2 + 120);
  v128 = v7;
  v9 = *(__int128 *)((char *)a2 + 136);
  v129 = v8;
  v10 = *(__int128 *)((char *)a2 + 152);
  v130 = v9;
  v11 = *(__int128 *)((char *)a2 + 184);
  v131 = v10;
  v132 = *(__int128 *)((char *)a2 + 168);
  v12 = *(__int128 *)((char *)a2 + 200);
  v133 = v11;
  v13 = *(__int128 *)((char *)a2 + 216);
  v134 = v12;
  v14 = *(__int128 *)((char *)a2 + 232);
  v135 = v13;
  v15 = *(__int128 *)((char *)a2 + 248);
  v136 = v14;
  v16 = *(__int128 *)((char *)a2 + 264);
  v17 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v137 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a2 + 2);
  v138 = v16;
  v139 = v17;
  v18 = 255;
  v19 = *a2;
  v20 = v125;
  v124 = v15;
  v21 = *(__int128 *)((char *)a2 + 40);
  v123 = v19;
  v22 = *(__int128 *)((char *)a2 + 24);
  v122 = v21;
  v121 = v22;
  if ( (v125 & 0x2000) == 0 )
    v18 = 0;
  HIWORD(v124) = v18;
  WORD2(v124) = v18;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v23 = DWORD1(v122);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v142 = 1000000;
  v141 = 1000000;
  v140 = 1000000;
  v143[2] = v23;
  v143[1] = v23;
  v143[0] = v23;
  v146 = 0LL;
  v145 = 0LL;
  v144 = 0LL;
  if ( (v20 & 0x40000) != 0 )
  {
    DWORD2(v121) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v121 + 1)));
    LODWORD(v122) = MulFD6(114000LL, HIDWORD(v121));
    *(_WORD *)((char *)&v122 + 9) = 256;
    HIDWORD(v121) -= DWORD2(v121) + v122;
    WORD1(v121) = 0;
    BYTE1(v121) = 0;
    BYTE11(v122) = 2;
  }
  else if ( (v20 & 0x10000) != 0 )
  {
    v57 = (a1[46] & 0x4000) == 0;
    v140 = a1[117];
    v141 = a1[116];
    v142 = a1[115];
    if ( !v57 )
    {
      v144 = a1 + 131;
      v145 = a1 + 125;
      v146 = a1 + 119;
    }
  }
  v24 = HIDWORD(v122);
  if ( (v20 & 0x20000) == 0 )
    v24 = 1000000;
  HIDWORD(v122) = v24;
  v25 = ComputeChecksum((char *)&v125 + 4, v20 & 0x40321000, 12LL);
  v27 = ComputeChecksum(&v126, v25, v26);
  v29 = ComputeChecksum(&v123, v27, (unsigned int)(v28 + 12));
  v31 = ComputeChecksum(&v121, v29, (unsigned int)(v30 + 20));
  v33 = 256LL;
  v34 = *((unsigned __int16 *)v3 + 3529);
  v35 = *((unsigned __int16 *)v3 + 3528);
  v36 = v121;
  v113 = v34;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v38 = v20 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    v94 = v38;
    if ( (v20 & 0x1000) != 0 )
    {
      v58 = 32LL * *((unsigned __int8 *)v3 + 34);
      v115 = *(_OWORD *)((char *)&RegData + v58);
      v116 = *(_OWORD *)((char *)&RegData + v58 + 16);
    }
    v114 = a3 + 7;
    v107 = DWORD1(v122) - 1;
    v39 = 3;
    v111 = 1000000 - v32;
    if ( (v20 & 0x100000) == 0 || (v36 & 1) != 0 )
      v95 = 0LL;
    else
      v95 = (_BYTE *)*((_QWORD *)v3 + 883);
    v40 = HIDWORD(v122);
    v112 = v20 & 2;
    v98 = v20 & 8;
    v99 = v20 & 0x10;
    v100 = v20 & 0x20;
    v101 = v20 & 0x100;
    v102 = v20 & 0x200;
    v41 = v20;
    v42 = v95;
    v103 = v41 & 4;
    v43 = (char *)&v122 + 12;
    v109 = ~(DWORD1(v122) - 1);
    v44 = (char *)&v126 + 12;
    while ( 1 )
    {
      v96 = v39 - 1;
      v118 = v44 - 4;
      v119 = v43 - 1;
      v97 = *((_DWORD *)v44 - 4);
      v104 = *((_DWORD *)v44 - 1);
      v45 = (unsigned __int8)*(v43 - 1);
      v46 = (&v144)[v45];
      v108 = *(&v140 + v45);
      v106 = v143[v45];
      DWORD1(v122) = v106;
      v110 = *((_BYTE *)&v121 + v45 + 1);
      v47 = *((_DWORD *)&v121 + v45 + 2);
      v48 = 0;
      v93 = 0;
      v105 = v47;
      v117 = v46;
      do
      {
        v49 = DivFD6(v48, 255LL);
        v50 = 0;
        v51 = v49;
        if ( v112 )
        {
          v49 = RaisePower((unsigned int)v49, v97, 0LL);
          v50 = 0;
        }
        if ( v98 )
        {
          if ( v49 <= (int)v128 )
          {
            v56 = DWORD2(v128);
LABEL_50:
            v49 = MulFD6((unsigned int)v49, v56);
          }
          else
          {
            if ( v49 < SDWORD1(v128) )
            {
              v49 -= v128;
              v56 = (unsigned int)v129;
              goto LABEL_50;
            }
            v49 = MulFD6((unsigned int)(v49 - DWORD1(v128)), HIDWORD(v128)) + 1000000;
          }
          v50 = 0;
        }
        if ( v99 )
        {
          v49 = MulFD6((unsigned int)v49, HIDWORD(v126));
          v50 = 0;
        }
        if ( v100 )
          v49 += v127;
        if ( v101 )
        {
          v59 = Log((unsigned int)(7 * v49 + 1000000));
          v49 = DivFD6(v59, (unsigned int)LogFilterMax);
          v50 = 0;
        }
        if ( v49 < 0 )
        {
          v49 = 0;
        }
        else if ( v49 > 1000000 )
        {
          v49 = 1000000;
        }
        v52 = (unsigned int)(1000000 - v49);
        if ( !v102 )
          v52 = (unsigned int)v49;
        if ( v38 )
        {
          if ( (int)v52 > SDWORD1(v115) )
          {
            if ( (int)v52 < SDWORD2(v115) )
            {
              if ( (int)v52 <= 79996 )
              {
                v69 = DivFD6(v52, 9033000LL);
              }
              else
              {
                v67 = (unsigned int)DivFD6((unsigned int)(v52 + 160000), 1160000LL);
                v68 = MulFD6(v67, v67);
                v69 = MulFD6((unsigned int)v67, v68);
              }
              v70 = Log(v69);
              v63 = DWORD2(v116) + MulFD6(v70, HIDWORD(v116));
            }
            else
            {
              v64 = DivFD6((unsigned int)(v52 - DWORD2(v115)), (unsigned int)(1000000 - DWORD2(v115)));
              v65 = RaisePower(v64, 2000000LL, 0LL);
              v66 = MulFD6(v65, (unsigned int)(1000000 - DWORD2(v115)));
              v63 = v116 + MulFD6((unsigned int)(DWORD2(v115) + v66), DWORD1(v116));
            }
          }
          else
          {
            v60 = DivFD6(v52, DWORD1(v115));
            v61 = RaisePower((unsigned int)(1000000 - v60), 1500000LL, 0LL);
            v62 = MulFD6((unsigned int)(1000000 - v61), DWORD1(v115));
            v63 = MulFD6(v62, HIDWORD(v115));
          }
          v52 = (unsigned int)((v63 + 50) / 100);
          v50 = 0;
        }
        if ( (int)v52 < 0 )
        {
          v52 = 0LL;
        }
        else if ( (int)v52 > 1000000 )
        {
          v52 = 1000000LL;
        }
        if ( v103 )
        {
          v52 = (unsigned int)RaisePower(v52, v104, 0LL);
          v50 = 0;
        }
        if ( v42 )
        {
          *v42 = MulFD6(v52, 255LL);
          LODWORD(v52) = v51;
          ++v42;
          v50 = 0;
        }
        v53 = 1000000 - v52;
        if ( (v36 & 1) != 0 )
          v53 = v52;
        if ( v46 )
        {
          LODWORD(v71) = -1;
          do
          {
            v71 = (unsigned int)(v71 + 1);
            v72 = v50;
            v50 = v46[v71];
          }
          while ( v53 > v50 );
          v73 = DivFD6((unsigned int)(v53 - v72), (unsigned int)(v50 - v72));
          v54 = ((_DWORD)v71 << 12) + MulFD6(v73, 4095LL);
        }
        else
        {
          v54 = MulFD6((unsigned int)v53, v105);
        }
        v55 = (((v54 + v106) & v109) << v110) | MulFD6(v107 & (unsigned int)(v54 + v106), v108);
        if ( v53 > v40 )
        {
          v74 = DivFD6((unsigned int)(v53 - v40), v111);
          v75 = RaisePower(v74, 2000000LL, 0LL);
          v55 |= (unsigned int)MulFD6(v75, 1365LL) << 21;
        }
        v38 = v94;
        v48 = ++v93;
        *v114 = v55;
        v46 = v117;
        ++v114;
      }
      while ( v93 < 256 );
      v39 = v96;
      v44 = v118;
      v43 = v119;
      if ( !v96 )
      {
        v3 = a1;
        v35 = 256;
        v20 = v125;
        v36 = v121;
        v34 = v113;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v20 & 0x300000) == 0x300000 && v35 != v34 )
  {
    v76 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v77 = v36 & 1;
    *((_WORD *)v3 + 3528) = v34;
    *((_WORD *)v3 + 3529) = v34;
    v78 = 127;
    v79 = v76 + 768;
    v80 = v76 + 2304;
    v81 = 127;
    v82 = v76 + 2304;
    v83 = 256LL;
    v84 = (v34 * ((unsigned int)(unsigned __int8)-(v77 != 0) + 65280) + 127) / 0xFF;
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
      --v33;
    }
    while ( v33 );
  }
  return result;
}
