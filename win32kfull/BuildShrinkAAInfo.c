_DWORD *BuildShrinkAAInfo(__int64 a1, __int16 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // r12d
  int v11; // eax
  int v12; // esi
  int v13; // r14d
  int v14; // r13d
  unsigned int v15; // r8d
  unsigned int v16; // r11d
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // r10d
  unsigned int v30; // r11d
  int v31; // ebx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned int v34; // r15d
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *v37; // rax
  _DWORD *v38; // rbx
  int *v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int v49; // r10d
  _DWORD *v50; // r9
  int *v51; // rcx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // eax
  unsigned int v55; // ecx
  _WORD *v56; // r9
  __int16 v57; // dx
  unsigned int v58; // eax
  int v59; // r8d
  int v60; // r11d
  int v61; // r15d
  __int64 v62; // r10
  int v63; // r8d
  __int16 v64; // r8
  int v65; // eax
  __int16 v66; // ax
  __int64 v67; // rdx
  __int16 v68; // ax
  int v69; // r11d
  bool v70; // zf
  __int16 v71; // ax
  int v72; // r10d
  int v73; // ecx
  _WORD *v74; // r9
  _WORD *v75; // rdx
  int v76; // r8d
  int v77; // eax
  int v79; // [rsp+28h] [rbp-79h]
  signed int v80; // [rsp+2Ch] [rbp-75h] BYREF
  int v81; // [rsp+30h] [rbp-71h]
  unsigned int v82; // [rsp+34h] [rbp-6Dh] BYREF
  int v83; // [rsp+38h] [rbp-69h]
  __int64 v84; // [rsp+40h] [rbp-61h] BYREF
  int v85; // [rsp+48h] [rbp-59h]
  unsigned int v86; // [rsp+4Ch] [rbp-55h]
  int v87; // [rsp+50h] [rbp-51h]
  int v88; // [rsp+54h] [rbp-4Dh]
  int v89; // [rsp+58h] [rbp-49h]
  signed int v90; // [rsp+5Ch] [rbp-45h]
  unsigned int v91; // [rsp+60h] [rbp-41h]
  int v92; // [rsp+64h] [rbp-3Dh]
  int v93; // [rsp+68h] [rbp-39h]
  __int64 v94; // [rsp+70h] [rbp-31h]
  __int64 v95; // [rsp+78h] [rbp-29h]
  unsigned __int64 v96; // [rsp+80h] [rbp-21h]
  __int64 v97; // [rsp+88h] [rbp-19h]
  _WORD *v98; // [rsp+90h] [rbp-11h]
  _WORD *v99; // [rsp+98h] [rbp-9h]
  int v102; // [rsp+110h] [rbp+6Fh]
  __int16 v103; // [rsp+110h] [rbp+6Fh]
  int v104; // [rsp+118h] [rbp+77h]
  __int64 v105; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va; // [rsp+130h] [rbp+8Fh]
  va_list va1; // [rsp+138h] [rbp+97h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v105 = va_arg(va1, _QWORD);
  v9 = *a3;
  v11 = *a4;
  v89 = 0;
  v12 = 0;
  v80 = 0;
  v13 = 0;
  LODWORD(v84) = 0;
  v82 = 0;
  v85 = v9;
  if ( v11 < v9 )
    return 0LL;
  v14 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v79 = 0;
  v15 = v11 - v9;
  v16 = a7 - a6;
  v86 = v11 - v9;
  v17 = 0;
  v104 = a7 - a6;
  if ( v9 >= 0 )
    v17 = v9;
  v92 = v17;
  if ( v11 > a5 )
    v11 = a5;
  v83 = -1;
  v88 = v11;
  v93 = *a8;
  v18 = v93 - 1;
  v87 = v93 - 1;
  v19 = *a9;
  v81 = v19;
  if ( v93 - 1 >= v19 )
    return 0LL;
  if ( v15 <= v16 )
    return 0LL;
  v20 = v19 - v18;
  v21 = v19 - v18 + 1;
  v90 = v21;
  if ( v21 < v20 )
    return 0LL;
  v22 = v15;
  v23 = v15 * (unsigned __int64)v21;
  v97 = v15;
  if ( v23 > 0xFFFFFFFF )
    return 0LL;
  v24 = v23 + v16 - 1;
  if ( v24 < (unsigned int)v23 )
    return 0LL;
  v25 = v24 / v16;
  if ( v25 + 4 < v25 )
    return 0LL;
  v26 = v15;
  if ( v25 + 4 <= v15 )
    v26 = v25 + 4;
  v91 = v26;
  if ( (int)ALIGN_MEM(&v84, 0x800u) < 0 )
    return 0LL;
  v27 = v26 + 1;
  if ( (unsigned int)v27 < v26 )
    return 0LL;
  v28 = 2 * v27;
  if ( v28 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v82, v28) < 0 )
    return 0LL;
  v31 = v82 + v84;
  v102 = v82 + v84;
  if ( v82 + (unsigned int)v84 < v82 )
    return 0LL;
  v95 = (__int64)((unsigned __int64)v30 << 13) / v22;
  if ( (a2 & 0x4A80) != 0 )
  {
    v32 = v29 + 4;
    if ( (unsigned int)v32 < v29 )
      return 0LL;
    v33 = 2 * v32;
    if ( v33 > 0xFFFFFFFF || (int)ALIGN_MEM(&v80, v33) < 0 )
      return 0LL;
    v34 = v80;
    if ( (a2 & 0x200) != 0 )
    {
      v31 = 0;
      v102 = 0;
    }
  }
  else
  {
    v34 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, v105) < 0 )
    return 0LL;
  v35 = v31 + v34;
  if ( v31 + v34 < v34 )
    return 0LL;
  v36 = v35 + v105;
  if ( v35 + (unsigned int)v105 < v35 || v36 + 240 < v36 )
    return 0LL;
  v37 = EngAllocMem(1u, v36 + 240, 0x35355448u);
  v38 = v37;
  if ( !v37 )
    return v38;
  v39 = v37 + 60;
  v40 = (unsigned int)v105;
  if ( (_DWORD)v105 )
  {
    *((_QWORD *)v38 + 4) = v39;
    v39 = (int *)((char *)v39 + v40);
  }
  if ( v34 )
  {
    v41 = v85;
    v38[12] = v86;
    v38[13] = v104;
    v38[16] = v92;
    v38[17] = v88;
    v38[18] = v93;
    v38[19] = v81;
    v42 = v90;
    *((_QWORD *)v38 + 11) = v39;
    *((_QWORD *)v38 + 12) = (char *)v39 + 2 * v42;
    v39 = (int *)((char *)v39 + (int)v34);
    if ( !(unsigned int)BuildRepData((__int64)(v38 + 12), v41, v14) )
    {
LABEL_95:
      EngFreeMem(v38);
      return 0LL;
    }
    v43 = *((_OWORD *)v38 + 4);
    *((_OWORD *)v38 + 7) = *((_OWORD *)v38 + 3);
    v44 = *((_OWORD *)v38 + 5);
    *((_OWORD *)v38 + 8) = v43;
    v45 = *((_OWORD *)v38 + 6);
    v9 = v85;
    *((_OWORD *)v38 + 9) = v44;
    *((_OWORD *)v38 + 10) = v45;
    v46 = *((_OWORD *)v38 + 8);
    *((_OWORD *)v38 + 11) = *((_OWORD *)v38 + 7);
    v47 = *((_OWORD *)v38 + 9);
    *((_OWORD *)v38 + 12) = v46;
    v48 = *((_OWORD *)v38 + 10);
    *((_OWORD *)v38 + 13) = v47;
    *((_OWORD *)v38 + 14) = v48;
  }
  if ( !v102 )
  {
    v12 = v38[17] - 1;
    v73 = v38[16];
    v13 = v38[19] - 1;
    v76 = v38[18];
    goto LABEL_98;
  }
  v49 = v95;
  v50 = v39 + 512;
  *((_QWORD *)v38 + 3) = v39;
  *((_WORD *)v38 + 6) = 1;
  v51 = v39 + 256;
  v52 = v91;
  *((_QWORD *)v38 + 5) = v39 + 512;
  v53 = ~v49;
  v96 = (unsigned __int64)v39 + 2 * v52 + 2048;
  v54 = -v49;
  do
  {
    v54 += v49;
    v53 += v49 + 1;
    *v39 = v54;
    v39[256] = v53;
    ++v39;
  }
  while ( v39 < v51 );
  v55 = v86;
  v56 = (_WORD *)v50 - 1;
  v80 = v53;
  v57 = 0;
  v84 = 0LL;
  v58 = v86;
  v94 = 0LL;
  v59 = v86;
  if ( !v86 )
  {
    v72 = 0;
    goto LABEL_83;
  }
  v60 = v83;
  v61 = -v86;
  v90 = v87 - 1;
  v91 = -v86;
  while ( 1 )
  {
    v98 = v56;
    v82 = v58 - 1;
    LODWORD(v62) = v59;
    v63 = v59 - v104;
    v61 += v104;
    v99 = v56;
    v85 = v63;
    if ( v63 > 0 )
    {
      LODWORD(v62) = v104;
      v64 = 0;
    }
    else
    {
      v80 = v61;
      v61 += v91;
      v85 = v55 + v63;
      ++v14;
      v64 = 0x4000;
    }
    v65 = v81;
    if ( v14 >= v90 && v14 <= v81 )
    {
      v94 += (__int64)(int)v62 << 13;
      v62 = v94 / v55;
      v66 = v64 | 0x8000;
      if ( (int)v62 <= (int)v95 )
        v66 = v64;
      v103 = v66;
      v84 = (unsigned int)(v62 + v84);
      v64 = v66;
      v94 %= (__int64)v55;
      if ( (v66 & 0x4000) != 0 )
      {
        v84 = ((__int64)v80 << 13) / v97;
        v67 = ((__int64)v80 << 13) % v97;
        v80 = 0;
        v94 = v67;
        v68 = v66 | 0x8000;
        if ( (int)v84 + (int)v62 <= (int)v95 )
          v68 = v103 & 0x7FFF;
        v55 = v86;
        v64 = v68;
      }
      v65 = v81;
      v57 = v84;
    }
    if ( v14 < v87 || v14 > v65 )
      break;
    if ( v9 >= v92 && v9 < v88 )
    {
      v13 = v14;
      ++v56;
      v69 = ((v64 & 0x4000) != 0) + v79;
      v79 = v69;
      if ( (unsigned __int64)v56 >= v96 )
        v56 = v99;
      v70 = v83 == -1;
      *v56 = v64 | v62;
      if ( v70 )
      {
        v83 = v9;
        v89 = v14;
        if ( (v64 & 0x4000) != 0 )
        {
          if ( v14 == v87 )
          {
            *((_WORD *)v38 + 7) = v84;
            *((_WORD *)v38 + 5) = 1;
            v79 = v69 - 1;
            --v56;
            goto LABEL_67;
          }
          v13 = v14 - 1;
          v71 = 0x2000;
          v89 = v14 - 1;
        }
        else
        {
          v71 = v84;
        }
        *((_WORD *)v38 + 7) = v71 - v62;
      }
LABEL_67:
      v60 = v83;
      v12 = v9;
LABEL_75:
      v58 = v82;
      goto LABEL_76;
    }
    if ( v60 == -1 )
      goto LABEL_75;
    if ( (unsigned __int64)++v56 >= v96 )
      v56 = v98;
    if ( (v64 & 0x4000) == 0 )
      LOWORD(v62) = 0x2000 - v57 + v62;
    v58 = 0;
    *v56 = v64 | v62 | 0x4000;
    ++v79;
LABEL_76:
    ++v9;
    if ( !v58 )
    {
      v72 = v79;
      goto LABEL_83;
    }
    v57 = v84;
    v59 = v85;
  }
  if ( v60 == -1 )
    goto LABEL_75;
  ++v56;
  v12 = v9;
  if ( (unsigned __int64)v56 >= v96 )
    v56 = v98;
  *v56 = (0x2000 - v57) | 0x4000;
  v72 = v79 + 1;
LABEL_83:
  v73 = v83;
  v74 = v56 + 1;
  if ( v83 == -1 )
    goto LABEL_95;
  v75 = (_WORD *)*((_QWORD *)v38 + 5);
  if ( v74 == v75 )
    goto LABEL_95;
  if ( v12 >= v88 )
    v12 = v88 - 1;
  v76 = v89;
  v77 = v93;
  if ( v89 < v93 )
  {
    ++*((_WORD *)v38 + 6);
    v76 = v77;
  }
  if ( v13 >= v81 )
    v13 = v81 - 1;
  if ( *((_WORD *)v38 + 5) )
  {
    if ( !*((_WORD *)v38 + 7) )
    {
      *((_WORD *)v38 + 5) = 0;
      ++v73;
    }
  }
  v38[5] = v72;
  v38[4] = v74 - v75;
  *v74 = 0;
LABEL_98:
  *a3 = v73;
  *a4 = v12;
  *a8 = v76;
  *a9 = v13;
  *v38 = v12 - v73 + 1;
  v38[1] = v13 - v76 + 1;
  return v38;
}
