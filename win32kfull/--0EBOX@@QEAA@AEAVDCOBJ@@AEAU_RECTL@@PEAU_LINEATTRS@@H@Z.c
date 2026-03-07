EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  int *v6; // r12
  int *v7; // r8
  int v9; // edx
  __int64 v11; // r9
  int *v12; // rsi
  int *v13; // r14
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // r13
  __int64 v19; // r8
  LONG v20; // r11d
  LONG y; // r9d
  LONG x; // r10d
  float v23; // xmm2_4
  unsigned int v24; // r11d
  __int64 v25; // r9
  __int64 v26; // r8
  float v27; // xmm3_4
  float v28; // xmm4_4
  int v29; // ecx
  __int64 v30; // rdx
  signed int v31; // r11d
  LONG v32; // ecx
  LONG v33; // r9d
  LONG v34; // r8d
  LONG v35; // r10d
  int v36; // edx
  int v37; // eax
  int v38; // edi
  _DWORD *v39; // rdi
  _DWORD *v40; // r13
  int *v41; // r15
  LONG v42; // eax
  _DWORD *v43; // r9
  int v44; // ecx
  int v45; // r11d
  int v46; // r10d
  int v47; // eax
  int v48; // r8d
  int v49; // ecx
  int v50; // eax
  bool v51; // cc
  int v52; // r9d
  int v53; // r8d
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // r8d
  int v62; // [rsp+20h] [rbp-50h]
  _DWORD *v63; // [rsp+28h] [rbp-48h] BYREF
  int v64; // [rsp+30h] [rbp-40h]
  int v65; // [rsp+34h] [rbp-3Ch]
  struct _LINEATTRS *v66; // [rsp+38h] [rbp-38h]
  _DWORD *v67; // [rsp+40h] [rbp-30h]
  _BYTE v68[16]; // [rsp+48h] [rbp-28h] BYREF
  struct _POINTL v69; // [rsp+58h] [rbp-18h] BYREF
  LONG v70; // [rsp+60h] [rbp-10h]
  LONG v71; // [rsp+64h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (int *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  v7 = (int *)((char *)this + 72);
  *((_OWORD *)this + 4) = v5;
  v66 = a4;
  v9 = *((_DWORD *)this + 16);
  v67 = (_DWORD *)((char *)this + 72);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
  {
    --v9;
    --*v7;
    *v6 = v9;
  }
  else
  {
    v67 = (_DWORD *)((char *)this + 72);
  }
  v11 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_DWORD *)(v11 + 208) == 2 )
  {
    ERECTL::vOrder((EBOX *)((char *)this + 64));
    v12 = (int *)((char *)this + 68);
    v13 = (int *)((char *)this + 76);
    goto LABEL_16;
  }
  v14 = *v7;
  if ( (*(_DWORD *)(v11 + 340) & 0x100) == 0 )
  {
    if ( v9 <= v14 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v9 < v14 )
  {
LABEL_10:
    *v6 = *v7;
    *v7 = v9;
  }
LABEL_11:
  v13 = (int *)((char *)this + 76);
  v15 = *((_DWORD *)this + 19);
  v12 = (int *)((char *)this + 68);
  v16 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x200) == 0 )
  {
    if ( v16 <= v15 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v16 < v15 )
  {
LABEL_15:
    *v13 = *((_DWORD *)this + 17);
    *v12 = v15;
  }
LABEL_16:
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 4) != 0 )
  {
    v17 = *v12;
    *v12 = *v13;
    *v13 = v17;
  }
  v69 = *(struct _POINTL *)v6;
  v70 = v6[2];
  v71 = v6[3];
  v63 = *(_DWORD **)(*(_QWORD *)a2 + 144LL);
  v18 = v63;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v68, a2, 516);
  v20 = v71;
  y = v69.y;
  x = v69.x;
  if ( (v63[10] & 0x10000) == 0 || (v66->fl & 1) == 0 )
    goto LABEL_30;
  v23 = (float)(v63[42] >> 1);
  if ( (v63[42] & 1) != 0 )
    v23 = FP_0_5 + v23;
  efHalfDiff((unsigned int)v69.x, (unsigned int)v70, v19, (unsigned int)v69.y);
  LODWORD(v27) = efHalfDiff((unsigned int)v25, v24, v26, v25);
  if ( v28 < 0.0 )
    LODWORD(v28) ^= _xmm;
  if ( v27 < 0.0 )
    LODWORD(v27) ^= _xmm;
  if ( v23 > v28 || v23 > v27 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_30:
    v29 = 0;
    goto LABEL_31;
  }
  v29 = 1;
LABEL_31:
  v62 = v29;
  v30 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_DWORD *)(v30 + 208) == 2 || v29 || *((_DWORD *)this + 1) || (*(_DWORD *)(v30 + 340) & 0x20) != 0 )
  {
    v42 = v70;
    v39 = (_DWORD *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    v40 = (_DWORD *)((char *)this + 16);
    *((_DWORD *)this + 5) = y;
    v41 = (int *)((char *)this + 24);
    *((_DWORD *)this + 2) = v42;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v20;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v68, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    v43 = v63;
    if ( a5 )
    {
      if ( v63[44] == 5 )
      {
        v44 = *((_DWORD *)this + 7);
        v45 = *((_DWORD *)this + 3);
        v46 = *v41;
        LODWORD(v66) = *v39;
        LODWORD(v63) = v44;
        if ( (((unsigned __int8)v44 | (unsigned __int8)(v46 | v45 | (unsigned __int8)v66)) & 0xF) == 0 )
        {
          v47 = (int)v66;
          v48 = 4;
          v49 = 4;
          if ( (int)v66 <= v46 )
            v49 = -4;
          *v40 -= v49;
          *v39 = v49 + v47;
          v50 = (int)v63;
          v51 = (int)v63 <= v45;
          *v41 = v46 - v49;
          if ( v51 )
            v48 = -4;
          *((_DWORD *)this + 5) -= v48;
          *((_DWORD *)this + 3) = v45 - v48;
          *((_DWORD *)this + 7) = v48 + v50;
        }
      }
    }
    if ( v62 )
    {
      v52 = v43[42];
      v53 = v52;
      v54 = *v6;
      v64 = v52;
      if ( *v67 < v54 )
      {
        v53 = -v52;
        v64 = -v52;
      }
      if ( *v13 < *v12 )
        v52 = -v52;
      LODWORD(v63) = -v53;
      v65 = v52;
      HIDWORD(v63) = v52;
      EXFORMOBJ::bXform((EXFORMOBJ *)v68, (struct _VECTORL *)&v63, (struct _VECTORFX *)&v63, 2uLL);
      v55 = v64;
      v56 = HIDWORD(v63) + 1;
      v57 = ((int)v63 + 1) >> 1;
      *v39 += v57;
      *v41 -= v57;
      v56 >>= 1;
      *((_DWORD *)this + 3) += v56;
      *v40 += (v55 + 1) >> 1;
      *((_DWORD *)this + 5) += (v65 + 1) >> 1;
      *((_DWORD *)this + 7) -= v56;
    }
    goto LABEL_68;
  }
  EXFORMOBJ::bXformRound((EXFORMOBJ *)v68, &v69, (struct _POINTFIX *)&v69, 2uLL);
  v31 = 16;
  if ( a5 && v18[44] == 5 )
  {
    v32 = v69.y;
    v33 = v71;
    v34 = v69.x;
    v35 = v70;
    if ( (((unsigned __int8)v70 | (unsigned __int8)(LOBYTE(v69.x) | v71 | LOBYTE(v69.y))) & 0xF) == 0 )
    {
      v36 = -4;
      v37 = -4;
      v31 = 32;
      if ( v70 > v69.x )
        v37 = 4;
      v35 = v37 + v70;
      v34 = v69.x - v37;
      if ( v71 > v69.y )
        v36 = 4;
      v32 = v69.y - v36;
      v33 = v36 + v71;
    }
  }
  else
  {
    v33 = v71;
    v35 = v70;
    v32 = v69.y;
    v34 = v69.x;
  }
  v38 = v33 - v32;
  if ( (int)abs32(v35 - v34) >= v31 && (int)abs32(v38) >= v31 )
  {
    if ( v35 - v34 <= 0 )
      v34 -= v31;
    else
      v35 -= v31;
    if ( v38 <= 0 )
      v32 -= v31;
    else
      v33 -= v31;
    v39 = (_DWORD *)((char *)this + 8);
    *((_DWORD *)this + 3) = v32;
    v40 = (_DWORD *)((char *)this + 16);
    *((_DWORD *)this + 2) = v35;
    v41 = (int *)((char *)this + 24);
    *((_DWORD *)this + 4) = v34;
    *((_DWORD *)this + 6) = v34;
    *((_DWORD *)this + 5) = v32;
    *((_DWORD *)this + 7) = v33;
LABEL_68:
    *((_QWORD *)this + 6) = *(_QWORD *)v39;
    *((_DWORD *)this + 12) -= *v40;
    *((_DWORD *)this + 13) -= v40[1];
    *((_QWORD *)this + 7) = *(_QWORD *)v40;
    *((_DWORD *)this + 14) -= *v41;
    *((_DWORD *)this + 15) -= v41[1];
    *((_QWORD *)this + 4) = *(_QWORD *)v41;
    *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
    *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
    v58 = *((_DWORD *)this + 12) + 1;
    *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
    v59 = *((_DWORD *)this + 14) + 1;
    v58 >>= 1;
    *((_DWORD *)this + 12) = v58;
    *((_DWORD *)this + 14) = v59 >> 1;
    *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
    *((_QWORD *)this + 5) = *(_QWORD *)v41;
    *((_DWORD *)this + 10) += v58;
    v60 = *((_DWORD *)this + 13) + *((_DWORD *)this + 11);
    *((_DWORD *)this + 11) = v60;
    *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
    *((_DWORD *)this + 11) = v60 + *((_DWORD *)this + 15);
    return this;
  }
  *(_DWORD *)this = 1;
  return this;
}
