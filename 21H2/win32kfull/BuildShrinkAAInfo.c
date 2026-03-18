/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0262C40
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C006E4F4 (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00DA5D0 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        signed int *a8,
        int *a9,
        ...)
{
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // r14d
  unsigned int v13; // r12d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // r9d
  __int16 v30; // r11
  int v31; // r15d
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int16 v34; // r11
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *v37; // rax
  _DWORD *v38; // rbx
  int *v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // eax
  signed int v43; // r13d
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // r9d
  _DWORD *v51; // r8
  int *v52; // rcx
  __int64 v53; // rax
  int v54; // r12d
  int v55; // eax
  unsigned int v56; // ecx
  _WORD *v57; // r8
  __int16 v58; // r12
  unsigned int v59; // eax
  unsigned int v60; // r15d
  int v61; // r10d
  int v62; // r11d
  __int64 v63; // r9
  _WORD *v64; // rdx
  int v65; // r15d
  __int16 v66; // r15
  signed int v67; // eax
  __int64 v68; // rdx
  __int16 v69; // r12
  int v70; // r11d
  bool v71; // zf
  __int16 v72; // ax
  int v73; // r10d
  int v74; // edx
  _WORD *v75; // r8
  _WORD *v76; // rax
  signed int v77; // r9d
  signed int v78; // ecx
  int v80; // [rsp+28h] [rbp-69h]
  signed int v81; // [rsp+2Ch] [rbp-65h]
  int v82; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v83; // [rsp+34h] [rbp-5Dh] BYREF
  int v84; // [rsp+38h] [rbp-59h]
  int v85; // [rsp+3Ch] [rbp-55h]
  unsigned int v86; // [rsp+40h] [rbp-51h]
  signed int v87; // [rsp+44h] [rbp-4Dh] BYREF
  signed int v88; // [rsp+48h] [rbp-49h]
  int v89; // [rsp+4Ch] [rbp-45h]
  signed int v90; // [rsp+50h] [rbp-41h]
  unsigned int v91; // [rsp+54h] [rbp-3Dh]
  int v92; // [rsp+58h] [rbp-39h]
  signed int v93; // [rsp+5Ch] [rbp-35h]
  __int64 v94; // [rsp+60h] [rbp-31h]
  __int64 v95; // [rsp+68h] [rbp-29h]
  unsigned __int64 v96; // [rsp+70h] [rbp-21h]
  _WORD *v97; // [rsp+78h] [rbp-19h]
  unsigned __int64 v98; // [rsp+80h] [rbp-11h]
  __int64 v99; // [rsp+88h] [rbp-9h]
  int v102; // [rsp+100h] [rbp+6Fh]
  int v103; // [rsp+108h] [rbp+77h]
  __int64 v104; // [rsp+120h] [rbp+8Fh] BYREF
  va_list va; // [rsp+120h] [rbp+8Fh]
  va_list va1; // [rsp+128h] [rbp+97h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v104 = va_arg(va1, _QWORD);
  v9 = *a3;
  v90 = 0;
  v10 = *a4;
  v11 = 0;
  v87 = 0;
  v12 = 0;
  v82 = 0;
  v13 = 0;
  v83 = 0;
  v85 = v9;
  if ( v10 < v9 || a7 <= a6 )
    return 0LL;
  v14 = a7 - a6;
  v80 = 0;
  v103 = a7 - a6;
  v15 = v10 - v9;
  v16 = 0;
  v86 = v10 - v9;
  if ( v9 >= 0 )
    v16 = v9;
  v92 = v16;
  if ( v10 > a5 )
    v10 = a5;
  v84 = -1;
  v89 = v10;
  v93 = *a8;
  v17 = v93 - 1;
  v88 = v93 - 1;
  v18 = *a9;
  v81 = *a9;
  if ( v93 - 1 >= *a9 )
    return 0LL;
  if ( v15 <= v14 )
    return 0LL;
  v19 = v18 - v17;
  v20 = v18 - v17 + 1;
  if ( v20 < v19 )
    return 0LL;
  v21 = v15;
  v22 = v15 * (unsigned __int64)v20;
  v99 = v15;
  if ( v22 > 0xFFFFFFFF )
    return 0LL;
  v23 = v22 + v14 - 1;
  if ( v23 < (unsigned int)v22 )
    return 0LL;
  v24 = v23 / v14;
  if ( v24 + 4 < v24 )
    return 0LL;
  v25 = v15;
  if ( v24 + 4 <= v15 )
    v25 = v24 + 4;
  v91 = v25;
  if ( (int)ALIGN_MEM((unsigned int *)&v82, 0x800u) < 0 )
    return 0LL;
  v27 = v26 + 1;
  if ( (unsigned int)v27 < v26 )
    return 0LL;
  v28 = 2 * v27;
  if ( v28 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v83, v28) < 0 )
    return 0LL;
  v31 = v83 + v82;
  if ( v83 + v82 < v83 )
    return 0LL;
  v96 = ((unsigned __int64)v29 << 13) / v21;
  if ( (v30 & 0x4A80) != 0 )
  {
    v32 = v19 + 4;
    if ( (unsigned int)v32 < v19 )
      return 0LL;
    v33 = 2 * v32;
    if ( v33 > 0xFFFFFFFF || (int)ALIGN_MEM((unsigned int *)&v87, v33) < 0 )
      return 0LL;
    v13 = v87;
    if ( (v34 & 0x200) != 0 )
      v31 = 0;
  }
  if ( (int)ALIGN_MEM((unsigned int *)va, v104) < 0 )
    return 0LL;
  v35 = v31 + v13;
  if ( v31 + v13 < v13 )
    return 0LL;
  v36 = v35 + v104;
  if ( v35 + (unsigned int)v104 < v35 || v36 + 240 < v36 )
    return 0LL;
  v37 = EngAllocMem(1u, v36 + 240, 0x35355448u);
  v38 = v37;
  if ( !v37 )
    return v38;
  v39 = v37 + 60;
  v40 = (unsigned int)v104;
  if ( (_DWORD)v104 )
  {
    *((_QWORD *)v38 + 4) = v39;
    v39 = (int *)((char *)v39 + v40);
  }
  if ( v13 )
  {
    v41 = v85;
    v38[12] = v86;
    v38[13] = v103;
    v38[16] = v92;
    v38[17] = v89;
    v38[18] = v93;
    v38[19] = v81;
    v42 = v19 + 1;
    v43 = a6;
    *((_QWORD *)v38 + 11) = v39;
    *((_QWORD *)v38 + 12) = (char *)v39 + 2 * (int)v42;
    v39 = (int *)((char *)v39 + (int)v13);
    if ( !(unsigned int)BuildRepData((__int64)(v38 + 12), v41, a6) )
    {
LABEL_94:
      EngFreeMem(v38);
      return 0LL;
    }
    v44 = *((_OWORD *)v38 + 4);
    *((_OWORD *)v38 + 7) = *((_OWORD *)v38 + 3);
    v45 = *((_OWORD *)v38 + 5);
    *((_OWORD *)v38 + 8) = v44;
    v46 = *((_OWORD *)v38 + 6);
    *((_OWORD *)v38 + 9) = v45;
    *((_OWORD *)v38 + 10) = v46;
    v47 = *((_OWORD *)v38 + 8);
    *((_OWORD *)v38 + 11) = *((_OWORD *)v38 + 7);
    v48 = *((_OWORD *)v38 + 9);
    *((_OWORD *)v38 + 12) = v47;
    v49 = *((_OWORD *)v38 + 10);
    *((_OWORD *)v38 + 13) = v48;
    *((_OWORD *)v38 + 14) = v49;
  }
  else
  {
    v43 = a6;
  }
  if ( !v31 )
  {
    v11 = v38[17] - 1;
    v74 = v38[16];
    v12 = v38[19] - 1;
    v77 = v38[18];
    goto LABEL_97;
  }
  v50 = v96;
  v51 = v39 + 512;
  *((_QWORD *)v38 + 3) = v39;
  *((_WORD *)v38 + 6) = 1;
  v52 = v39 + 256;
  v53 = v91;
  *((_QWORD *)v38 + 5) = v39 + 512;
  v54 = ~v50;
  v98 = (unsigned __int64)v39 + 2 * v53 + 2048;
  v55 = -v50;
  do
  {
    v55 += v50;
    v54 += v50 + 1;
    *v39 = v55;
    v39[256] = v54;
    ++v39;
  }
  while ( v39 < v52 );
  v56 = v86;
  v57 = (_WORD *)v51 - 1;
  v82 = v54;
  v58 = 0;
  v94 = 0LL;
  v59 = v86;
  v95 = 0LL;
  v60 = v86;
  if ( !v86 )
  {
    v73 = 0;
    goto LABEL_82;
  }
  v61 = v85;
  v62 = v84;
  v87 = v88 - 1;
  v91 = -v86;
  v102 = -v86;
  while ( 1 )
  {
    LODWORD(v63) = v60;
    v83 = v59 - 1;
    v64 = v57;
    v65 = v60 - v103;
    v102 += v103;
    v97 = v57;
    v85 = v65;
    if ( v65 > 0 )
    {
      LODWORD(v63) = v103;
      v66 = 0;
    }
    else
    {
      v82 = v102;
      v85 = v56 + v65;
      ++v43;
      v102 += v91;
      v66 = 0x4000;
    }
    v67 = v81;
    if ( v43 >= v87 && v43 <= v81 )
    {
      v68 = (((__int64)(int)v63 << 13) + v95) % v99;
      v63 = (((__int64)(int)v63 << 13) + v95) / v99;
      v95 = v68;
      v69 = v66 | 0x8000;
      if ( (int)v63 <= (int)v96 )
        v69 = v66;
      v94 = (unsigned int)(v63 + v94);
      v66 = v69;
      if ( (v69 & 0x4000) != 0 )
      {
        v94 = ((__int64)v82 << 13) / v99;
        v95 = ((__int64)v82 << 13) % v99;
        v82 = 0;
        v66 = v69 | 0x8000;
        if ( (int)v94 + (int)v63 <= (int)v96 )
          v66 = v69 & 0x7FFF;
      }
      v67 = v81;
      v64 = v57;
      v58 = v94;
      v56 = v86;
    }
    if ( v43 < v88 || v43 > v67 )
      break;
    if ( v61 >= v92 && v61 < v89 )
    {
      v12 = v43;
      ++v57;
      v70 = ((v66 & 0x4000) != 0) + v80;
      v80 = v70;
      if ( (unsigned __int64)v57 >= v98 )
        v57 = v97;
      v71 = v84 == -1;
      *v57 = v66 | v63;
      if ( v71 )
      {
        v84 = v61;
        v90 = v43;
        if ( (v66 & 0x4000) != 0 )
        {
          if ( v43 == v88 )
          {
            *((_WORD *)v38 + 7) = v58;
            *((_WORD *)v38 + 5) = 1;
            v80 = v70 - 1;
            --v57;
            goto LABEL_66;
          }
          v12 = v43 - 1;
          v72 = 0x2000;
          v90 = v43 - 1;
        }
        else
        {
          v72 = v58;
        }
        *((_WORD *)v38 + 7) = v72 - v63;
      }
LABEL_66:
      v62 = v84;
      v11 = v61;
LABEL_74:
      v59 = v83;
      goto LABEL_75;
    }
    if ( v62 == -1 )
      goto LABEL_74;
    if ( (unsigned __int64)++v57 >= v98 )
      v57 = v64;
    if ( (v66 & 0x4000) == 0 )
      LOWORD(v63) = 0x2000 - v58 + v63;
    v59 = 0;
    *v57 = v66 | v63 | 0x4000;
    ++v80;
LABEL_75:
    ++v61;
    if ( !v59 )
    {
      v73 = v80;
      goto LABEL_82;
    }
    v60 = v85;
  }
  if ( v62 == -1 )
    goto LABEL_74;
  ++v57;
  v11 = v61;
  if ( (unsigned __int64)v57 >= v98 )
    v57 = v64;
  *v57 = (0x2000 - v58) | 0x4000;
  v73 = v80 + 1;
LABEL_82:
  v74 = v84;
  v75 = v57 + 1;
  if ( v84 == -1 )
    goto LABEL_94;
  v76 = (_WORD *)*((_QWORD *)v38 + 5);
  if ( v75 == v76 )
    goto LABEL_94;
  if ( v11 >= v89 )
    v11 = v89 - 1;
  v77 = v90;
  v78 = v93;
  if ( v90 < v93 )
  {
    ++*((_WORD *)v38 + 6);
    v77 = v78;
  }
  if ( v12 >= v81 )
    v12 = v81 - 1;
  if ( *((_WORD *)v38 + 5) )
  {
    if ( !*((_WORD *)v38 + 7) )
    {
      *((_WORD *)v38 + 5) = 0;
      ++v74;
    }
  }
  v38[5] = v73;
  v38[4] = v75 - v76;
  *v75 = 0;
LABEL_97:
  *a3 = v74;
  *a4 = v11;
  *a8 = v77;
  *a9 = v12;
  *v38 = v11 - v74 + 1;
  v38[1] = v12 - v77 + 1;
  return v38;
}
