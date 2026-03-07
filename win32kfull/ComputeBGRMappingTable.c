__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, _BYTE *a4)
{
  char *v5; // r12
  unsigned __int64 *v6; // xmm1_8
  unsigned __int8 v7; // r15
  int v8; // ebx
  unsigned __int8 v9; // al
  char v10; // r8
  char v11; // cl
  unsigned __int64 *v12; // r14
  unsigned int v13; // edx
  __int64 v15; // r13
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  int v21; // eax
  __int16 v22; // bx
  __int16 v23; // r15
  int v24; // r14d
  int v25; // r12d
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  char *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  unsigned int v34; // ebx
  int v35; // r9d
  int v36; // ecx
  _DWORD *v37; // r13
  __int64 v38; // r10
  int v39; // eax
  int v40; // esi
  int v41; // ebx
  int v42; // r14d
  int v43; // edx
  int v44; // r12d
  int v45; // r15d
  int v46; // ebx
  int v47; // edx
  int v48; // esi
  int v49; // r12d
  int v50; // edx
  int v51; // ecx
  int v52; // esi
  int v53; // eax
  int v54; // ebx
  int v55; // esi
  int v56; // r12d
  int v57; // eax
  int v58; // eax
  int v59; // ebx
  int v60; // esi
  int v61; // eax
  int v62; // esi
  int v63; // ebx
  int v64; // eax
  int v65; // eax
  int v66; // edx
  int v67; // esi
  int v68; // eax
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  int v73; // edx
  int v74; // ebx
  int v75; // edx
  int v76; // eax
  int v77; // r15d
  int v78; // edx
  _DWORD *v79; // rsi
  int v80; // r15d
  char v81; // al
  _BYTE *v82; // r15
  char v83; // al
  void *v84; // rcx
  size_t v85; // r8
  unsigned __int8 v86; // [rsp+20h] [rbp-E0h]
  char v87; // [rsp+21h] [rbp-DFh]
  int v88; // [rsp+24h] [rbp-DCh]
  int v89; // [rsp+24h] [rbp-DCh]
  int v90; // [rsp+28h] [rbp-D8h]
  int v91; // [rsp+28h] [rbp-D8h]
  int v92; // [rsp+2Ch] [rbp-D4h]
  int v93; // [rsp+30h] [rbp-D0h]
  int v94; // [rsp+34h] [rbp-CCh]
  int v95; // [rsp+38h] [rbp-C8h]
  int v96; // [rsp+3Ch] [rbp-C4h]
  int v97; // [rsp+40h] [rbp-C0h]
  int v98; // [rsp+44h] [rbp-BCh]
  int v99; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v100; // [rsp+50h] [rbp-B0h]
  _DWORD *v101; // [rsp+58h] [rbp-A8h]
  _DWORD *v102; // [rsp+60h] [rbp-A0h]
  _DWORD *v103; // [rsp+68h] [rbp-98h]
  char *v104; // [rsp+70h] [rbp-90h]
  _BYTE *v105; // [rsp+78h] [rbp-88h]
  int v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+88h] [rbp-78h]
  char *v108; // [rsp+90h] [rbp-70h]
  char *v109; // [rsp+98h] [rbp-68h]
  _DWORD *v110; // [rsp+A0h] [rbp-60h]
  __int64 v111; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v112; // [rsp+B0h] [rbp-50h] BYREF
  int v113; // [rsp+B8h] [rbp-48h]
  int v114; // [rsp+C0h] [rbp-40h] BYREF
  int v115; // [rsp+C8h] [rbp-38h]
  int v116; // [rsp+CCh] [rbp-34h]
  int v117; // [rsp+D0h] [rbp-30h]
  int v118; // [rsp+D4h] [rbp-2Ch]
  int v119; // [rsp+D8h] [rbp-28h]
  int v120; // [rsp+DCh] [rbp-24h]
  __int128 v121; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v122; // [rsp+F0h] [rbp-10h]
  int v123; // [rsp+F8h] [rbp-8h] BYREF
  int v124; // [rsp+FCh] [rbp-4h]
  int v125; // [rsp+100h] [rbp+0h]
  int v126; // [rsp+104h] [rbp+4h]
  int v127; // [rsp+108h] [rbp+8h]
  int v128; // [rsp+10Ch] [rbp+Ch]

  v105 = a4;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v5 = 0LL;
  v104 = 0LL;
  v109 = 0LL;
  v108 = 0LL;
  v110 = 0LL;
  v99 = 0;
  v112 = 0LL;
  v113 = 0;
  v93 = 0;
  if ( a3 )
  {
    v6 = (unsigned __int64 *)*((_QWORD *)a3 + 2);
    v121 = *a3;
    v7 = BYTE2(v121);
    v8 = DWORD1(v121);
    v9 = BYTE3(v121);
    v10 = BYTE1(v121);
    v11 = v121;
    v122 = v6;
    v12 = v6;
    v86 = BYTE2(v121);
    v97 = DWORD2(v121);
  }
  else
  {
    v11 = 0;
    v86 = 0;
    v10 = 0;
    v97 = 0x8000;
    v7 = 0;
    v12 = &v112;
    v9 = 0;
    v8 = 255;
  }
  v100 = v12;
  v90 = v8;
  if ( v11 )
    return 4294967267LL;
  v13 = *(_DWORD *)(a2 + 56);
  v95 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v12 )
    return 4294967278LL;
  v107 = 0LL;
  v15 = 0LL;
  if ( v10 )
  {
    if ( v9 > 5u )
      return 4294967273LL;
    v16 = SrcOrderTable[v9];
    v17 = v16 >> 8;
    if ( BYTE1(v16) >= 3u )
      return 4294967273LL;
    v13 = HIWORD(v16);
    if ( BYTE2(v16) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v16);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v101 = (_DWORD *)&v112 + (unsigned __int8)v17;
    v19 = (unsigned __int8)v13;
    LOWORD(v13) = v95;
    v102 = (_DWORD *)&v112 + v19;
    v103 = (_DWORD *)&v112 + (unsigned __int8)v18;
  }
  if ( v10 )
  {
    switch ( v10 )
    {
      case 1:
        v92 = 1;
        break;
      case 2:
        v92 = 2;
        break;
      case 4:
        v92 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 304);
    v8 = 31;
    v90 = 31;
    v7 = 0;
    v107 = v15;
    v86 = 0;
    v92 = 0;
  }
  v106 = v13 & 0x400;
  if ( (v13 & 0x400) != 0 )
    v110 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v20 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v87 = v20;
  if ( !v20 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v98 = v13 & 0x80C0, (v13 & 0x80C0) != 0) )
  {
    v21 = 1000000;
    v22 = 1;
    v23 = v20 == 0;
    v88 = 1000000;
    if ( (v13 & 0x40) != 0 )
      v24 = *(_DWORD *)(a2 + 92);
    else
      v24 = 1000000;
    v25 = v24;
    if ( (v13 & 0x80u) != 0 )
    {
      if ( v20 == 1 )
      {
        v25 = 500 * v24;
        v24 *= 200;
      }
      v23 = 1;
      v26 = *(_DWORD *)(a2 + 96);
      LODWORD(v122) = MulFD6(v24, -v26);
      v27 = MulFD6(v25, v26);
      v22 = 2;
      v127 = v27;
      v21 = *(_DWORD *)(a2 + 100);
      v88 = v21;
      DWORD1(v121) = 500000000;
      v124 = 200000000;
    }
    DWORD2(v121) = MulFD6(v25, v21);
    v28 = MulFD6(v24, v88);
    v12 = v100;
    v5 = 0LL;
    v125 = v28;
    LOWORD(v121) = v22;
    WORD1(v121) = v23;
    LOWORD(v123) = v22;
    v8 = v90;
    HIWORD(v123) = v23;
    v7 = v86;
    v98 = v95 & 0x80C0;
  }
  if ( v15 )
  {
    v29 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x31355448u);
    v104 = v29;
    v5 = v29;
    if ( v29 )
    {
      v30 = *(unsigned __int16 *)(v15 + 16);
      v107 = CacheRGBToXYZ(v15, v29, (__int64)&v99, a2);
      v15 = v107;
      v31 = 12 * (v30 + 1);
      v109 = &v5[v31];
      v108 = &v5[v31 + v31];
      v8 = 0;
    }
  }
  v114 = 3;
  v32 = 0;
  v96 = 0;
  if ( v8 == 1000000 )
    v8 = 0;
  v94 = 0;
  v91 = v8;
  v33 = 0;
  v34 = v97;
  v35 = 0;
  v89 = 0;
  v36 = v97;
  if ( v97 )
  {
    v37 = (_DWORD *)v12 + 1;
    v38 = v7;
    ++v105;
    v111 = v7;
    while ( 1 )
    {
      LODWORD(v100) = v36 - 1;
      if ( v92 )
      {
        if ( v92 == 1 )
        {
          *v101 = *((unsigned __int8 *)v37 - 4);
          *v102 = *((unsigned __int8 *)v37 - 3);
          v39 = *((unsigned __int8 *)v37 - 2);
        }
        else if ( v92 == 2 )
        {
          *v101 = *((__int16 *)v37 - 2);
          *v102 = *((__int16 *)v37 - 1);
          v39 = *(__int16 *)v37;
        }
        else
        {
          *v101 = *(v37 - 1);
          *v102 = *v37;
          v39 = v37[1];
        }
        *v103 = v39;
        v40 = v113;
        v41 = HIDWORD(v112);
        v42 = v112;
      }
      else
      {
        v42 = v35;
        v112 = __PAIR64__(v33, v35);
        v113 = v32;
        v89 = v35 + 1;
        v41 = v33;
        v40 = v32;
        if ( v35 + 1 >= 32 )
        {
          v89 = 0;
          v96 = v33 + 1;
          if ( v33 + 1 >= 32 )
          {
            v43 = v32 + 1;
            v96 = 0;
            if ( v43 >= 32 )
              v43 = 0;
            v94 = v43;
          }
        }
      }
      v37 = (_DWORD *)((char *)v37 + v38);
      if ( v91 )
      {
        LODWORD(v112) = DivFD6(v42, v91);
        v42 = v112;
        HIDWORD(v112) = DivFD6(v41, v91);
        v41 = HIDWORD(v112);
        v40 = DivFD6(v40, v91);
        v113 = v40;
      }
      if ( !v98 )
        goto LABEL_102;
      if ( v5 )
      {
        v44 = *(_DWORD *)&v109[12 * v41] + *(_DWORD *)&v104[12 * v42] + *(_DWORD *)&v108[12 * v40];
        v45 = *(_DWORD *)&v108[12 * v40 + 4] + *(_DWORD *)&v104[12 * v42 + 4] + *(_DWORD *)&v109[12 * v41 + 4];
        v46 = *(_DWORD *)&v108[12 * v40 + 8] + *(_DWORD *)&v104[12 * v42 + 8] + *(_DWORD *)&v109[12 * v41 + 8];
      }
      else
      {
        v115 = *(_DWORD *)(a2 + 124);
        v117 = *(_DWORD *)(a2 + 128);
        v119 = *(_DWORD *)(a2 + 132);
        HIWORD(v114) = 0;
        v116 = v42;
        v118 = v41;
        v120 = v40;
        v44 = MulDivFD6Pairs(&v114);
        v116 = v42;
        v115 = *(_DWORD *)(a2 + 136);
        v117 = *(_DWORD *)(a2 + 140);
        v119 = *(_DWORD *)(a2 + 144);
        v118 = v41;
        v120 = v40;
        v45 = MulDivFD6Pairs(&v114);
        v115 = *(_DWORD *)(a2 + 148);
        v117 = *(_DWORD *)(a2 + 152);
        v119 = *(_DWORD *)(a2 + 156);
        v116 = v42;
        v118 = v41;
        v120 = v40;
        v46 = MulDivFD6Pairs(&v114);
      }
      if ( v87 )
      {
        v47 = *(_DWORD *)(a2 + 160);
        if ( v47 != 1000000 )
          v44 = DivFD6(v44, v47);
        if ( v44 < 8856 )
          v48 = MulFD6(v44, 7787000) + 137931;
        else
          v48 = RaisePower(v44, 3, 3);
        if ( v45 < 8856 )
          v49 = MulFD6(v45, 7787000) + 137931;
        else
          v49 = RaisePower(v45, 3, 3);
        v50 = *(_DWORD *)(a2 + 168);
        v93 = v49;
        if ( v50 != 1000000 )
          v46 = DivFD6(v46, v50);
        if ( v46 < 8856 )
          v51 = MulFD6(v46, 7787000) + 137931;
        else
          v51 = RaisePower(v46, 3, 3);
        v52 = v48 - v49;
        v53 = v49 - v51;
      }
      else
      {
        v54 = v44 + 2 * (v45 + v46 + 4 * v45) + v45 + v46 + 4 * v45;
        v55 = DivFD6(4 * v44, v54) - *(_DWORD *)(a2 + 184);
        v56 = DivFD6(9 * v45, v54) - *(_DWORD *)(a2 + 188);
        if ( v45 <= 8856 )
        {
          v58 = MulFD6(v45, 9033000);
        }
        else
        {
          v57 = RaisePower(v45, 3, 3);
          v58 = MulFD6(v57, 1160000) - 160000;
        }
        v59 = 13 * v58;
        v52 = MulFD6(13 * v58, v55);
        v53 = MulFD6(v59, v56);
        v49 = v93;
        DWORD1(v121) = v59;
        v124 = v59;
      }
      v128 = v52;
      HIDWORD(v121) = v52;
      v126 = v53;
      HIDWORD(v122) = v53;
      v60 = MulDivFD6Pairs((int *)&v121);
      v61 = MulDivFD6Pairs(&v123);
      if ( v87 )
      {
        v62 = v49 + v60;
        v63 = v49 - v61;
        if ( v62 <= 206893 )
        {
          v65 = DivFD6(v62 - 137931, 7787000);
        }
        else
        {
          v64 = MulFD6(v62, v62);
          v65 = MulFD6(v62, v64);
        }
        v66 = *(_DWORD *)(a2 + 240);
        v67 = v65;
        if ( v66 != 1000000 )
          v67 = MulFD6(v65, v66);
        if ( v63 <= 206893 )
        {
          v69 = DivFD6(v63 - 137931, 7787000);
        }
        else
        {
          v68 = MulFD6(v63, v63);
          v69 = MulFD6(v63, v68);
        }
        v70 = *(_DWORD *)(a2 + 248);
        v71 = v69;
        if ( v70 == 1000000 )
          goto LABEL_101;
        v72 = MulFD6(v69, v70);
      }
      else
      {
        v73 = *(_DWORD *)(a2 + 268) + v61;
        if ( v73 < 0 || (v74 = DivFD6(9 * v45, v73), v74 < 0) )
          v74 = 2147000000;
        v75 = v60 + *(_DWORD *)(a2 + 264);
        if ( v75 >= 0 )
        {
          v76 = MulFD6(v74, v75);
          v67 = FD6DivL(v76, 4);
        }
        else
        {
          v67 = 0;
        }
        v72 = FD6DivL(v74 - 15 * v45 - v67, 3);
      }
      v71 = v72;
LABEL_101:
      v120 = v71;
      HIWORD(v114) = 0;
      v115 = *(_DWORD *)(a2 + 204);
      v117 = *(_DWORD *)(a2 + 208);
      v119 = *(_DWORD *)(a2 + 212);
      v116 = v67;
      v118 = v45;
      LODWORD(v112) = MulDivFD6Pairs(&v114);
      v115 = *(_DWORD *)(a2 + 216);
      v117 = *(_DWORD *)(a2 + 220);
      v119 = *(_DWORD *)(a2 + 224);
      HIDWORD(v112) = MulDivFD6Pairs(&v114);
      v115 = *(_DWORD *)(a2 + 228);
      v117 = *(_DWORD *)(a2 + 232);
      v119 = *(_DWORD *)(a2 + 236);
      v113 = MulDivFD6Pairs(&v114);
      ScaleRGB(&v112);
      v40 = v113;
      v41 = HIDWORD(v112);
      v42 = v112;
      v5 = v104;
LABEL_102:
      if ( v106 )
      {
        if ( (v95 & 0x800) != 0 )
        {
          v77 = v41;
          if ( v42 > v41 )
            v77 = v42;
          if ( v40 > v77 )
            v77 = v40;
        }
        else
        {
          v77 = 1000000;
        }
        HIWORD(v114) = 0;
        v78 = v77 - v40;
        v79 = v110;
        v116 = v77 - v42;
        v120 = v78;
        v93 = v77 - v41;
        v115 = *v110;
        v117 = v110[1];
        v119 = v110[2];
        v118 = v77 - v41;
        v42 = v77 - MulDivFD6Pairs(&v114);
        LODWORD(v112) = v42;
        v115 = v79[3];
        v117 = v79[4];
        v119 = v79[5];
        v41 = v77 - MulDivFD6Pairs(&v114);
        HIDWORD(v112) = v41;
        v115 = v79[6];
        v117 = v79[7];
        v119 = v79[8];
        v80 = v77 - MulDivFD6Pairs(&v114);
        if ( v42 >= 0 )
        {
          if ( v42 > 1000000 )
            v42 = 1000000;
          LODWORD(v112) = v42;
        }
        else
        {
          v42 = 0;
          LODWORD(v112) = 0;
        }
        if ( v41 >= 0 )
        {
          if ( v41 > 1000000 )
            v41 = 1000000;
          HIDWORD(v112) = v41;
        }
        else
        {
          v41 = 0;
          HIDWORD(v112) = 0;
        }
        if ( v80 >= 0 )
        {
          if ( v80 > 1000000 )
            v80 = 1000000;
          v40 = v80;
          v113 = v80;
        }
        else
        {
          v40 = 0;
          v113 = 0;
        }
      }
      v81 = MulFD6(v42, 255);
      v82 = v105;
      v105[1] = v81;
      *v82 = MulFD6(v41, 255);
      v83 = MulFD6(v40, 255);
      v36 = (int)v100;
      v32 = v94;
      v33 = v96;
      v35 = v89;
      v38 = v111;
      *(v82 - 1) = v83;
      v105 = v82 + 3;
      if ( !v36 )
      {
        v15 = v107;
        v34 = v97;
        break;
      }
    }
  }
  if ( v5 )
  {
    if ( v15 )
    {
      if ( !*(_QWORD *)(v15 + 8) )
        *(_QWORD *)(v15 + 8) = EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x32345448u);
      v84 = *(void **)(v15 + 8);
      if ( v84 )
      {
        v85 = *(unsigned __int16 *)(v15 + 18);
        *(_DWORD *)v15 = v99;
        memmove(v84, v5, v85);
      }
    }
    EngFreeMem(v5);
  }
  return v34;
}
