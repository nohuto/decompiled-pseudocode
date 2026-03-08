/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00195AC
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0019BA8 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     CleanUpDHI @ 0x1C00181B0 (CleanUpDHI.c)
 *     ComputeHTCell @ 0x1C0019464 (ComputeHTCell.c)
 *     ComputeChecksum @ 0x1C0019A58 (ComputeChecksum.c)
 *     GetCIEPrims @ 0x1C0019AA4 (GetCIEPrims.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     MulFD6 @ 0x1C014B146 (MulFD6.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     ComputeInverseMatrix3x3 @ 0x1C02556D8 (ComputeInverseMatrix3x3.c)
 *     MulDivFD6Pairs @ 0x1C0255BE8 (MulDivFD6Pairs.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // rdi
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // r10
  __int64 v7; // r12
  __int64 (*v8)(); // rcx
  __int16 v9; // r15
  int v10; // r13d
  unsigned int v11; // r11d
  unsigned __int16 v12; // r14
  unsigned int v13; // edx
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // si
  int v16; // ecx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r9
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // r14
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // r8
  int v26; // ebx
  bool v27; // cc
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  __int64 result; // rax
  int v34; // edx
  unsigned int v35; // eax
  bool v36; // zf
  unsigned __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned __int16 v39; // r9
  unsigned __int64 v40; // xmm0_8
  unsigned __int16 v41; // r10
  int v42; // ecx
  int v43; // r12d
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // esi
  unsigned int v52; // r15d
  unsigned int v53; // r14d
  unsigned int v54; // r13d
  char v55; // al
  unsigned int v56; // ebx
  __int64 v57; // r12
  int v58; // eax
  __int64 v59; // rbx
  unsigned int v60; // edx
  signed int v61; // r12d
  int v62; // r15d
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  __int16 v66; // ax
  __int64 v67; // rcx
  __int16 v68; // ax
  __int64 v69; // rcx
  char v70; // [rsp+20h] [rbp-E0h]
  int v71; // [rsp+38h] [rbp-C8h]
  int v72; // [rsp+3Ch] [rbp-C4h]
  _QWORD *v74; // [rsp+50h] [rbp-B0h]
  _BYTE v76[4]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v77; // [rsp+74h] [rbp-8Ch]
  __int16 v78; // [rsp+76h] [rbp-8Ah]
  __int64 (*v79)(); // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  __int64 v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  unsigned __int16 v84; // [rsp+A2h] [rbp-5Eh]
  unsigned __int16 v85; // [rsp+A4h] [rbp-5Ch]
  unsigned __int16 v86; // [rsp+A6h] [rbp-5Ah]
  __int128 v87; // [rsp+A8h] [rbp-58h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v89; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v90; // [rsp+C2h] [rbp-3Eh]
  unsigned __int16 v91; // [rsp+C4h] [rbp-3Ch]
  unsigned __int8 v92; // [rsp+C6h] [rbp-3Ah]
  _DWORD v93[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E4h] [rbp-1Ch]
  _DWORD v96[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v97; // [rsp+F0h] [rbp-10h]
  int v98; // [rsp+F4h] [rbp-Ch]
  int v99; // [rsp+F8h] [rbp-8h]
  int v100; // [rsp+FCh] [rbp-4h]
  int v101; // [rsp+100h] [rbp+0h]
  int v102; // [rsp+104h] [rbp+4h]
  int v103; // [rsp+108h] [rbp+8h]

  v3 = 88LL;
  memset_0(v76, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v76, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  v74 = v4 + 5;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v6 = 0LL;
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v7 = v82;
  v8 = v79;
  if ( !v79 )
    v8 = IsMulDestroyBrushInternalSupported;
  v9 = v77 & 0x6FF;
  v4[7] = v8;
  v77 = v9;
  *((_DWORD *)v4 + 16) = 305459218;
  if ( v7 && *(_WORD *)(v7 + 22) == 0xFFFE )
  {
    v10 = 0;
    v71 = 0;
    v11 = 1;
  }
  else
  {
    qmemcpy(v93, "THTN0002.naDuohC", sizeof(v93));
    v71 = 1;
    v7 = 0LL;
    v10 = 1;
    *((_DWORD *)v4 + 16) = ComputeChecksum(v93, 305459218LL, 16LL);
  }
  v12 = v89;
  v13 = v86;
  v14 = v91;
  v15 = v90;
  if ( v89 == 0xFFFF && v90 == 0xFFFF && v91 == 0xFFFF )
  {
    v72 = 128;
LABEL_54:
    v14 = 10000;
    v15 = 10000;
    v12 = 10000;
    goto LABEL_14;
  }
  v72 = v6;
  if ( (unsigned __int16)(v89 - 100) > 0xFF78u
    || (unsigned __int16)(v90 - 100) > 0xFF78u
    || (unsigned __int16)(v91 - 100) > 0xFF78u )
  {
    goto LABEL_54;
  }
LABEL_14:
  v16 = (unsigned __int16)(8 * (v11 & v9));
  v17 = v84;
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( !v17 || (v18 = v85, *((_WORD *)v4 + 115) = v85, !v18) )
  {
    v17 = 300;
    *((_DWORD *)v4 + 57) = 19661100;
    v18 = 300;
    v13 = v6;
LABEL_17:
    if ( v13 > 3 * (unsigned int)v17 || v13 > 3 * (unsigned int)v18 || !v13 )
      goto LABEL_20;
    v93[1] = 2 * v13 * v13;
    v35 = DivFD6(v18 * v18 + v17 * (unsigned int)v17);
    v19 = RaisePower(v35, 2LL, 3LL);
    v16 = *((_DWORD *)v4 + 56);
    v6 = 0LL;
    v11 = 1;
    goto LABEL_21;
  }
  if ( (v13 & 0x8000) == 0 )
    goto LABEL_17;
  v34 = v13 & 0x7FFF;
  if ( (unsigned int)(v34 - 333) > 0x394B )
  {
LABEL_20:
    v19 = 1000000;
    goto LABEL_21;
  }
  v19 = 1000 * v34;
LABEL_21:
  if ( (v9 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v20 = v16 | 2;
  }
  else
  {
    v36 = (v77 & 0x80u) == 0;
    *((_BYTE *)v4 + 73) = v11;
    if ( !v36 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v77 & 2) == 0 )
      goto LABEL_24;
    v20 = v11 | v16;
  }
  *((_DWORD *)v4 + 56) = v20;
LABEL_24:
  *((_DWORD *)v4 + 58) = v19;
  v21 = v12;
  v22 = v78;
  *((_DWORD *)v4 + 46) = 100 * v21;
  *((_DWORD *)v4 + 47) = 100 * v15;
  *((_DWORD *)v4 + 48) = 100 * v14;
  if ( (v10 || v22 > 0x12u || v22 == 18 && v80 == v6) && (unsigned __int16)(v22 - 6) > (unsigned __int16)v11 )
  {
    v22 = 17;
    v78 = 17;
  }
  if ( (v9 & 4) != 0 && v22 <= 3u )
  {
    v22 = 17;
    v78 = 17;
  }
  v23 = v77;
  v24 = v77 & 0x70;
  if ( (v77 & 0x70) == 0 )
    goto LABEL_31;
  switch ( v24 )
  {
    case ' ':
      v93[0] = 4;
      break;
    case '0':
      v93[0] = 2;
      break;
    case '@':
      v93[0] = 5;
      break;
    case 'P':
      v93[0] = v11;
      break;
    case '`':
      v93[0] = 6;
      break;
    case 'p':
      v93[0] = v6;
      break;
    default:
LABEL_31:
      v93[0] = 3;
      break;
  }
  *((_BYTE *)v4 + 74) = v93[0];
  GetCIEPrims(v7, v4 + 14, 4LL, v11);
  GetCIEPrims(v81, (char *)v4 + 76, v25, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    v37 = 0LL;
    v38 = 0;
    if ( v83 )
    {
      v38 = *(_DWORD *)(v83 + 8);
      v39 = v38;
      v40 = *(_QWORD *)v83;
      v37 = *(_QWORD *)v83;
      v41 = *(_QWORD *)v83;
      if ( v41 > 0x2328u
        || WORD1(v40) > 0x2328u
        || WORD2(v40) > 0x2328u
        || HIWORD(v40) > 0x2328u
        || (unsigned __int16)v38 > 0x2328u
        || HIWORD(v38) > 0x2328u )
      {
        v42 = 0;
      }
      else
      {
        v42 = 1;
        if ( !(_WORD)v40 && !WORD1(v40) && !WORD2(v40) && !HIWORD(v40) && !v38 )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v39 = 0;
      v41 = 0;
      v42 = 0;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v71 || !v42 )
      {
        v38 = 13762880;
        v39 = 320;
        v41 = DefaultSolidDyesInfo;
        v37 = DefaultSolidDyesInfo;
      }
      v96[1] = 100 * WORD2(v37);
      v97 = 100 * v39;
      v98 = 100 * v41;
      v100 = 100 * HIWORD(v38);
      v101 = 100 * WORD1(v37);
      v102 = 100 * HIWORD(v37);
      v103 = 1000000;
      v99 = 1000000;
      v96[0] = 1000000;
      ComputeInverseMatrix3x3(v96, (char *)v4 + 148);
      v43 = *((_DWORD *)v4 + 56);
      if ( (v43 & 1) == 0 )
      {
        v97 = *((_DWORD *)v4 + 37);
        v99 = *((_DWORD *)v4 + 38);
        v101 = *((_DWORD *)v4 + 39);
        v96[0] = 3;
        v98 = 1000000;
        v100 = 1000000;
        v102 = 1000000;
        v44 = MulDivFD6Pairs(v96);
        v45 = 1000000 - MulFD6((unsigned int)(1000000 - v44), *((unsigned int *)v4 + 114));
        v97 = *((_DWORD *)v4 + 40);
        v99 = *((_DWORD *)v4 + 41);
        v101 = *((_DWORD *)v4 + 42);
        v46 = MulDivFD6Pairs(v96);
        v47 = v45 - MulFD6((unsigned int)(1000000 - v46), *((unsigned int *)v4 + 115));
        v97 = *((_DWORD *)v4 + 43);
        v99 = *((_DWORD *)v4 + 44);
        v101 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v43 | 1;
        v48 = MulDivFD6Pairs(v96);
        v49 = MulFD6((unsigned int)(1000000 - v48), *((unsigned int *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((unsigned int *)v4 + 36), (unsigned int)(v47 - v49));
      }
    }
  }
  v26 = ComputeHTCell(v22, v80, (__int64)(v4 + 5));
  if ( v26 < 0 )
  {
    CleanUpDHI((HSEMAPHORE *)v4);
    return (unsigned int)v26;
  }
  else
  {
    v27 = WORD2(v87) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v27 && (_WORD)v87 == 24 && (*(_DWORD *)((char *)&v87 + 6) != 655370000 || WORD5(v87) != 10000) )
    {
      v28 = v87;
      v29 = v88;
    }
    else
    {
      v28 = DefaultCA;
      v29 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v28;
    *(_QWORD *)((char *)v4 + 28) = v29;
    if ( (v9 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v77 & 8) != 0 )
    {
      v50 = v92;
      v70 = v92;
      v51 = *((_DWORD *)v4 + 56) | (8 * (v23 & 0x400 | 0x20));
      v52 = (v92 >> 2) & 7;
      *((_DWORD *)v4 + 56) = v51;
      v93[2] = v52;
      v53 = v50 & 3;
      v54 = v50 >> 5;
      v93[1] = v50 >> 5;
      v93[3] = v53;
      if ( (_BYTE)v50 == 1 )
      {
        v53 = 4;
        v70 = 124;
        v93[3] = 4;
        v52 = 4;
        v93[2] = 4;
        v54 = 4;
        v93[1] = 4;
      }
      else if ( (_BYTE)v50 == 2 )
      {
        v70 = -41;
        v53 = 5;
        v93[3] = 5;
        v52 = 5;
        v93[2] = 5;
        v54 = 5;
        v93[1] = 5;
      }
      else if ( !v54 || !v52 || (v50 & 3) == 0 )
      {
        v51 |= 0x200u;
        v93[3] = 255;
        *((_DWORD *)v4 + 56) = v51;
        v53 = 255;
        v52 = 255;
        v93[2] = 255;
        v54 = 255;
        v93[1] = 255;
        v70 = -1;
      }
      *((_BYTE *)v4 + 844) = (v51 & 0x2000) != 0;
      if ( v54 == v52 && v54 == v53 )
      {
        v55 = v93[1];
        v51 |= 0x800u;
        *((_DWORD *)v4 + 56) = v51;
        *((_BYTE *)v4 + 493) = v55;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v56 = v54;
      if ( v54 < v52 )
        v56 = v52;
      if ( v56 < v53 )
        v56 = v53;
      v94 = v56;
      if ( v56 <= 6 && (v57 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v57 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) = v51 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 19) + 1);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 18) + 1);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 21) + 1);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 20) + 1);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 5) + 1);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 4) + 1);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 25) + 1);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 24) + 1);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 27) + 1);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 26) + 1);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 29) + 1);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 28) + 1);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 31) + 1);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 30) + 1);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 33) + 1);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 32) + 1);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 35) + 1);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v57 + 34) + 1);
        v58 = *(unsigned __int16 *)(v57 + 10);
        if ( (unsigned __int16)v58 < 0x2710u )
        {
          if ( (_WORD)v58 )
            *((_DWORD *)v4 + 128) = 100 * v58;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v59 = (unsigned int)DivFD6(1000000LL);
        *((_DWORD *)v4 + 125) = MulFD6(*((unsigned int *)v4 + v54 + 128), v59);
        *((_DWORD *)v4 + 126) = MulFD6(*((unsigned int *)v4 + v52 + 134), (unsigned int)v59);
        *((_DWORD *)v4 + 127) = MulFD6(*((unsigned int *)v4 + v53 + 140), (unsigned int)v59);
        v60 = 6;
        do
        {
          if ( v60 >= v54 )
            *((_DWORD *)v74 + v60 + 118) = 1000000;
          if ( v60 >= v52 )
            *((_DWORD *)v74 + v60 + 124) = 1000000;
          if ( v60 >= v53 )
            *((_DWORD *)v74 + v60 + 130) = 1000000;
          --v60;
        }
        while ( v60 );
        v95 = 0;
        v61 = *((_DWORD *)v4 + 125);
        v62 = *((_DWORD *)v4 + 126);
        v51 = *((_DWORD *)v4 + 56);
      }
      else
      {
        v61 = DivFD6(1000000 * v54);
        *((_DWORD *)v4 + 125) = v61;
        v62 = DivFD6(1000000 * v52);
        *((_DWORD *)v4 + 126) = v62;
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v53);
      }
      v63 = *((unsigned int *)v4 + 128);
      if ( v61 < v62 )
        v61 = v62;
      if ( v61 < *((_DWORD *)v4 + 127) )
        v61 = *((_DWORD *)v4 + 127);
      if ( (_DWORD)v63 == 0xFFFF )
      {
        if ( v61 == 1000000 && (v51 = *((_DWORD *)v4 + 56), (v51 & 0x800) != 0) )
          v63 = 0LL;
        else
          v63 = 666667LL;
        *((_DWORD *)v4 + 128) = v63;
      }
      if ( !(_DWORD)v63 && (v61 != 1000000 || (v51 & 0x800) == 0) )
      {
        *((_DWORD *)v4 + 128) = 1000000;
        v63 = 1000000LL;
      }
      v64 = RaisePower(v63, (unsigned int)v61, 0LL);
      v65 = *((unsigned int *)v4 + 125);
      *((_DWORD *)v4 + 128) = v64;
      v66 = MulFD6(v65, 4095LL);
      v67 = *((unsigned int *)v4 + 126);
      *((_WORD *)v4 + 247) = v66 + 1;
      v68 = MulFD6(v67, 4095LL);
      v69 = *((unsigned int *)v4 + 127);
      *((_WORD *)v4 + 248) = v68 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v69, 4095LL) + 1;
    }
    else
    {
      v94 = 1;
      v93[3] = 1;
      v93[2] = 1;
      v93[1] = 1;
      v70 = -1;
    }
    v30 = *((unsigned __int16 *)v4 + 114);
    v31 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 488) = v93[1];
    *((_BYTE *)v4 + 489) = v93[2];
    *((_BYTE *)v4 + 490) = v93[3];
    *((_BYTE *)v4 + 491) = v94;
    *((_BYTE *)v4 + 492) = v70;
    v93[2] = *((_DWORD *)v4 + 58);
    v93[0] = v30;
    v93[1] = v31;
    v93[3] = v31 + v30;
    v32 = ComputeChecksum(v93, 2820218943LL, 16LL);
    v27 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v32;
    if ( !v27 )
      *((_BYTE *)v4 + 74) = 3;
    *((_DWORD *)v4 + 56) |= v72;
    *((_WORD *)v4 + 118) = 0x8000;
    result = 1414021956LL;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
