/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C0096118
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeChecksum @ 0x1C00945A4 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00945F0 (MulFD6.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0095B10 (ComputeInverseMatrix3x3.c)
 *     GetCIEPrims @ 0x1C00968D4 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C0096AD0 (ComputeHTCell.c)
 *     MulDivFD6Pairs @ 0x1C00972DC (MulDivFD6Pairs.c)
 *     CleanUpDHI @ 0x1C010BDA0 (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // r11
  __int64 (*v7)(); // rax
  __int16 v8; // r15
  __int64 v9; // r13
  __int16 v10; // r15
  unsigned __int16 v11; // r14
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  _WORD *v15; // r10
  int v16; // r8d
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  int v22; // r8d
  int v23; // eax
  unsigned __int16 v24; // r14
  int v25; // eax
  int v26; // ebx
  __int16 v27; // si
  int v28; // eax
  __int64 v29; // r8
  int v30; // ebx
  bool v31; // cc
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  __int64 result; // rax
  int v38; // r9d
  unsigned int v39; // ecx
  int v40; // esi
  unsigned int v41; // r15d
  unsigned int v42; // r14d
  unsigned int v43; // r13d
  char v44; // al
  unsigned int v45; // eax
  int v46; // ebx
  signed int v47; // r13d
  signed int v48; // r15d
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  __int16 v52; // ax
  int v53; // ecx
  __int16 v54; // ax
  int v55; // ecx
  int v56; // ecx
  int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned int v59; // r8d
  unsigned __int16 v60; // r9
  unsigned __int16 v61; // r10
  int v62; // ecx
  int v63; // eax
  int v64; // r13d
  int v65; // eax
  int v66; // ebx
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  __int64 v71; // rbx
  int v72; // eax
  int v73; // ebx
  unsigned int v74; // edx
  char v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-D8h]
  int v77; // [rsp+3Ch] [rbp-C4h]
  int v78; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v79; // [rsp+48h] [rbp-B8h]
  _QWORD v81[12]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v82[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E4h] [rbp-1Ch]
  __int128 v85; // [rsp+E8h] [rbp-18h] BYREF
  int v86; // [rsp+F8h] [rbp-8h]
  int v87; // [rsp+FCh] [rbp-4h]
  int v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+104h] [rbp+4h]
  int v90; // [rsp+108h] [rbp+8h]

  v3 = 88LL;
  memset(v81, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v81, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v6 = 0LL;
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v7 = (__int64 (*)())v81[1];
  v8 = WORD2(v81[0]);
  v9 = v81[4];
  if ( !v81[1] )
    v7 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v7;
  v10 = v8 & 0x6FF;
  WORD2(v81[0]) = v10;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v77 = 0;
  }
  else
  {
    v77 = 1;
    qmemcpy(v82, "THTN0002.naDuohC", sizeof(v82));
    v9 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v82, 0x1234F012u, 0x10u);
  }
  v11 = v81[10];
  v12 = HIWORD(v81[6]);
  v13 = WORD2(v81[10]);
  v14 = WORD1(v81[10]);
  if ( LOWORD(v81[10]) == 0xFFFF && *(_DWORD *)((char *)&v81[10] + 2) == -1 )
  {
    v78 = 128;
LABEL_13:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v78 = v6;
  if ( (unsigned __int16)(LOWORD(v81[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v81[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v81[10]) - 100) > 0xFF78u )
  {
    goto LABEL_13;
  }
LABEL_14:
  v15 = (_WORD *)v4 + 115;
  v16 = (unsigned __int16)(8 * (v10 & 1));
  v17 = WORD1(v81[6]);
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( v17 && (v18 = WORD2(v81[6]), v79 = (unsigned __int16 *)v4 + 115, *v15 = WORD2(v81[6]), v18) )
  {
    if ( (v12 & 0x8000) != 0 )
    {
      v19 = v12 & 0x7FFF;
      if ( (unsigned int)(v19 - 333) > 0x394B )
        v20 = 1000000;
      else
        v20 = 1000 * v19;
      v79 = (unsigned __int16 *)v4 + 115;
      goto LABEL_20;
    }
  }
  else
  {
    v79 = (unsigned __int16 *)v4 + 115;
    *v15 = 300;
    v12 = v6;
    *((_WORD *)v4 + 114) = 300;
  }
  v38 = *((unsigned __int16 *)v4 + 114);
  if ( v12 <= 3 * v38 && v12 <= 3 * (unsigned int)(unsigned __int16)*v15 && v12 )
  {
    v56 = (unsigned __int16)*v15 * (unsigned __int16)*v15;
    v82[1] = 2 * v12 * v12;
    v57 = DivFD6(v38 * v38 + v56, v82[1]);
    v20 = RaisePower(v57, 2, 3);
    v16 = *((_DWORD *)v4 + 56);
    v6 = 0LL;
  }
  else
  {
    v20 = 1000000;
  }
LABEL_20:
  if ( (v10 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v22 = v16 | 2;
  }
  else
  {
    v21 = (v81[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = 1;
    if ( !v21 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v81[0] & 0x200000000LL) == 0 )
      goto LABEL_26;
    v22 = v16 | 1;
  }
  *((_DWORD *)v4 + 56) = v22;
LABEL_26:
  *((_DWORD *)v4 + 58) = v20;
  v23 = v11;
  v24 = HIWORD(v81[0]);
  *((_DWORD *)v4 + 46) = 100 * v23;
  v25 = v13;
  v26 = v77;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v25;
  if ( (v77 || v24 > 0x12u || v24 == 18 && v81[2] == v6) && (unsigned __int16)(v24 - 6) > 1u )
  {
    v24 = 17;
    HIWORD(v81[0]) = 17;
  }
  if ( (v10 & 4) != 0 && v24 <= 3u )
  {
    v24 = 17;
    HIWORD(v81[0]) = 17;
  }
  v27 = WORD2(v81[0]);
  v28 = BYTE4(v81[0]) & 0x70;
  switch ( v28 )
  {
    case ' ':
      v82[0] = 4;
      break;
    case '0':
      v82[0] = 2;
      break;
    case '@':
      v82[0] = 5;
      break;
    case 'P':
      v82[0] = 1;
      break;
    case '`':
      v82[0] = 6;
      break;
    default:
      v82[0] = v28 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v82[0];
  GetCIEPrims(v9, v4 + 14, 6LL);
  GetCIEPrims(v81[3], (char *)v4 + 76, v29);
  if ( (v4[28] & 4) != 0 )
  {
    v58 = 0LL;
    v59 = 0;
    if ( v81[5] )
    {
      v59 = *(_DWORD *)(v81[5] + 8LL);
      v60 = v59;
      v76 = *(_QWORD *)v81[5];
      v58 = *(_QWORD *)v81[5];
      v61 = *(_QWORD *)v81[5];
      if ( v61 > 0x2328u
        || WORD1(v76) > 0x2328u
        || WORD2(v76) > 0x2328u
        || HIWORD(v76) > 0x2328u
        || (unsigned __int16)v59 > 0x2328u
        || HIWORD(v59) > 0x2328u )
      {
        v62 = 0;
      }
      else if ( v76 || (_WORD)v59 )
      {
        v62 = 1;
      }
      else
      {
        v62 = 1;
        if ( !HIWORD(v59) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
      v63 = *((_DWORD *)v4 + 56);
      v26 = v77;
    }
    else
    {
      v60 = 0;
      v63 = v4[28] & 0xFFFB;
      v61 = 0;
      v62 = 0;
      *((_DWORD *)v4 + 56) = v63;
    }
    if ( (v63 & 4) != 0 )
    {
      if ( v26 || !v62 )
      {
        v59 = 13762880;
        v60 = 320;
        v61 = DefaultSolidDyesInfo;
        v58 = DefaultSolidDyesInfo;
      }
      DWORD1(v85) = 100 * WORD2(v58);
      DWORD2(v85) = 100 * v60;
      HIDWORD(v85) = 100 * v61;
      v87 = 100 * HIWORD(v59);
      v88 = 100 * WORD1(v58);
      v89 = 100 * HIWORD(v58);
      v90 = 1000000;
      v86 = 1000000;
      LODWORD(v85) = 1000000;
      ComputeInverseMatrix3x3(&v85, (__int64)v4 + 148);
      v64 = *((_DWORD *)v4 + 56);
      if ( (v64 & 1) == 0 )
      {
        DWORD2(v85) = *((_DWORD *)v4 + 37);
        v86 = *((_DWORD *)v4 + 38);
        v88 = *((_DWORD *)v4 + 39);
        LODWORD(v85) = 3;
        HIDWORD(v85) = 1000000;
        v87 = 1000000;
        v89 = 1000000;
        v65 = MulDivFD6Pairs(&v85);
        v66 = 1000000 - MulFD6(1000000 - v65, *((_DWORD *)v4 + 114));
        DWORD2(v85) = *((_DWORD *)v4 + 40);
        v86 = *((_DWORD *)v4 + 41);
        v88 = *((_DWORD *)v4 + 42);
        v67 = MulDivFD6Pairs(&v85);
        v68 = v66 - MulFD6(1000000 - v67, *((_DWORD *)v4 + 115));
        DWORD2(v85) = *((_DWORD *)v4 + 43);
        v86 = *((_DWORD *)v4 + 44);
        v88 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v64 | 1;
        v69 = MulDivFD6Pairs(&v85);
        v70 = MulFD6(1000000 - v69, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v68 - v70);
      }
    }
  }
  v30 = ComputeHTCell(v24, v81[2], v4 + 5);
  if ( v30 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v30;
  }
  else
  {
    v31 = WORD2(v81[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v31 && LOWORD(v81[7]) == 24 && (*(_DWORD *)((char *)&v81[7] + 6) != 655370000 || WORD1(v81[8]) != 10000) )
    {
      v32 = *(_OWORD *)&v81[7];
      v33 = v81[9];
    }
    else
    {
      v32 = DefaultCA;
      v33 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v32;
    *(_QWORD *)((char *)v4 + 28) = v33;
    if ( (v10 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v81[0] & 0x800000000LL) != 0 )
    {
      v39 = BYTE6(v81[10]);
      v75 = BYTE6(v81[10]);
      v40 = *((_DWORD *)v4 + 56) | (8 * (v27 & 0x400 | 0x20));
      v41 = (BYTE6(v81[10]) >> 2) & 7;
      *((_DWORD *)v4 + 56) = v40;
      v82[2] = v41;
      v42 = v39 & 3;
      v43 = v39 >> 5;
      v82[1] = v39 >> 5;
      v82[3] = v42;
      if ( (_BYTE)v39 == 1 )
      {
        v75 = 124;
        v42 = 4;
        v82[3] = 4;
        v41 = 4;
        v82[2] = 4;
        v43 = 4;
        v82[1] = 4;
      }
      else if ( (_BYTE)v39 == 2 )
      {
        v75 = -41;
        v42 = 5;
        v82[3] = 5;
        v41 = 5;
        v82[2] = 5;
        v43 = 5;
        v82[1] = 5;
      }
      else if ( !v43 || !v41 || (v39 & 3) == 0 )
      {
        v40 |= 0x200u;
        v82[3] = 255;
        *((_DWORD *)v4 + 56) = v40;
        v42 = 255;
        v41 = 255;
        v82[2] = 255;
        v43 = 255;
        v82[1] = 255;
        v75 = -1;
      }
      *((_BYTE *)v4 + 844) = (v40 & 0x2000) != 0;
      if ( v43 == v41 && v43 == v42 )
      {
        v44 = v82[1];
        v40 |= 0x800u;
        *((_DWORD *)v4 + 56) = v40;
        *((_BYTE *)v4 + 493) = v44;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v45 = v43;
      if ( v43 < v41 )
        v45 = v41;
      if ( v45 < v42 )
        v45 = v42;
      v83 = v45;
      if ( v45 <= 6 && (v71 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v71 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) = v40 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v71 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v71 + 34) + 1, 256);
        v72 = *(unsigned __int16 *)(v71 + 10);
        if ( (unsigned __int16)v72 < 0x2710u )
        {
          if ( (_WORD)v72 )
            *((_DWORD *)v4 + 128) = 100 * v72;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v73 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v43 + 128), v73);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v41 + 134), v73);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v42 + 140), v73);
        v74 = 6;
        do
        {
          if ( v74 >= v43 )
            *((_DWORD *)v4 + v74 + 128) = 1000000;
          if ( v74 >= v41 )
            *((_DWORD *)v4 + v74 + 134) = 1000000;
          if ( v74 >= v42 )
            *((_DWORD *)v4 + v74 + 140) = 1000000;
          --v74;
        }
        while ( v74 );
        v47 = *((_DWORD *)v4 + 125);
        v48 = *((_DWORD *)v4 + 126);
        v40 = *((_DWORD *)v4 + 56);
        v84 = 0;
      }
      else
      {
        v46 = v45 * *((_DWORD *)v4 + 58);
        v47 = DivFD6(1000000 * v43, v46);
        *((_DWORD *)v4 + 125) = v47;
        v48 = DivFD6(1000000 * v41, v46);
        *((_DWORD *)v4 + 126) = v48;
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v42, v46);
      }
      v49 = *((_DWORD *)v4 + 128);
      if ( v47 < v48 )
        v47 = v48;
      if ( v47 < *((_DWORD *)v4 + 127) )
        v47 = *((_DWORD *)v4 + 127);
      if ( v49 == 0xFFFF )
      {
        if ( v47 == 1000000 && (v40 = *((_DWORD *)v4 + 56), (v40 & 0x800) != 0) )
          v49 = 0;
        else
          v49 = 666667;
        *((_DWORD *)v4 + 128) = v49;
      }
      if ( !v49 )
      {
        if ( v47 != 1000000 || (v49 = 0, (v40 & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v49 = 1000000;
        }
      }
      v50 = RaisePower(v49, v47, 0);
      v51 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v50;
      v52 = MulFD6(v51, 4095);
      v53 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v52 + 1;
      v54 = MulFD6(v53, 4095);
      v55 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v54 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v55, 4095) + 1;
    }
    else
    {
      v75 = -1;
      v83 = 1;
      v82[3] = 1;
      v82[2] = 1;
      v82[1] = 1;
    }
    v34 = *((unsigned __int16 *)v4 + 114);
    *((_BYTE *)v4 + 488) = v82[1];
    *((_BYTE *)v4 + 489) = v82[2];
    *((_BYTE *)v4 + 490) = v82[3];
    *((_BYTE *)v4 + 491) = v83;
    *((_BYTE *)v4 + 492) = v75;
    v82[0] = v34;
    v35 = *v79;
    v82[2] = *((_DWORD *)v4 + 58);
    v82[1] = v35;
    v82[3] = v35 + v34;
    v36 = ComputeChecksum((char *)v82, 0xA819203F, 0x10u);
    v31 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v36;
    if ( !v31 )
      *((_BYTE *)v4 + 74) = 3;
    *((_DWORD *)v4 + 56) |= v78;
    *((_WORD *)v4 + 118) = 0x8000;
    result = 1414021956LL;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
