/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02DC844
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010F824 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02DD664 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        unsigned int a8,
        const int *a9,
        int *a10)
{
  __int64 v14; // rax
  float v15; // xmm8_4
  float v16; // xmm9_4
  int v17; // r14d
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  _DWORD *v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  int v25; // edx
  struct _GLYPHPOS *v26; // r8
  int v27; // esi
  unsigned __int16 *v28; // r9
  signed int v29; // r14d
  POINTL *p_ptl; // r13
  int v31; // r12d
  __int64 v32; // rax
  struct RFONTOBJ *v33; // rdx
  int v34; // edx
  int *v35; // r15
  int v36; // ecx
  int v37; // ebx
  int v38; // r12d
  unsigned int v39; // r8d
  float v40; // xmm5_4
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  float v44; // xmm5_4
  int *v45; // rbx
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  signed int v49; // ecx
  unsigned int v50; // r8d
  float v51; // xmm5_4
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // r8d
  int v55; // eax
  int v56; // ebx
  int v57; // eax
  int v58; // r8d
  __int128 v59; // xmm0
  int v60; // r8d
  int v61; // [rsp+48h] [rbp-A9h] BYREF
  int v62; // [rsp+4Ch] [rbp-A5h] BYREF
  int v63; // [rsp+50h] [rbp-A1h] BYREF
  int v64; // [rsp+54h] [rbp-9Dh]
  int v65; // [rsp+58h] [rbp-99h]
  __int128 v66; // [rsp+60h] [rbp-91h]
  float v67; // [rsp+70h] [rbp-81h] BYREF
  float v68; // [rsp+74h] [rbp-7Dh] BYREF
  int v69; // [rsp+78h] [rbp-79h]
  int v70; // [rsp+7Ch] [rbp-75h]
  unsigned int v71; // [rsp+80h] [rbp-71h]
  int v72; // [rsp+84h] [rbp-6Dh]
  int *v73; // [rsp+88h] [rbp-69h]
  int v74; // [rsp+148h] [rbp+57h] BYREF
  LONG v75; // [rsp+150h] [rbp+5Fh]

  v75 = a4;
  v14 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v15 = *(float *)(v14 + 452);
    v16 = *(float *)(v14 + 456);
    v17 = *(_DWORD *)(v14 + 316);
    v18 = *(float *)(v14 + 436);
    v19 = *(float *)(v14 + 440);
    v20 = *(float *)(v14 + 444);
    v21 = *(float *)(v14 + 448);
    v67 = v15;
    v68 = v16;
    v62 = 0;
    v63 = 0;
    v69 = v17;
    v65 = 0;
    if ( !a9 )
    {
      v22 = (_DWORD *)((char *)this + 120);
      *((_DWORD *)this + 29) = 0;
      v23 = a6;
      *v22 = 0;
      v65 = 0;
      if ( v23 )
      {
        v24 = *(_QWORD *)a3;
        v74 = 0;
        bFToL((float)v23 * *(float *)(v24 + 444), &v74, 0);
        *((_DWORD *)this + 29) = v74;
      }
      if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 444LL), a7, a8, (__int64)v22) )
      {
        vGenWidths(
          &v62,
          &v63,
          (struct EFLOAT *)&v68,
          (struct EFLOAT *)&v67,
          *(_DWORD *)(*(_QWORD *)a3 + 468LL),
          v17,
          0,
          v17);
        v25 = *((_DWORD *)this + 29);
        if ( v62 + v63 + v25 + *v22 < 0 )
          *v22 = -(v62 + v25 + v63);
        v65 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      }
    }
    v26 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v27 = 0x7FFFFFFF;
    v28 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v29 = 0x80000000;
    v70 = 0;
    v26->ptl.y = a5;
    p_ptl = &v26->ptl;
    v26->ptl.x = a4;
    v31 = 0;
    v32 = *(_QWORD *)a3;
    v74 = 0;
    v33 = (struct RFONTOBJ *)*(unsigned int *)this;
    v72 = *(_DWORD *)(v32 + 320);
    v64 = 0x7FFFFFFF;
    *(_QWORD *)&v66 = 0x800000007FFFFFFFuLL;
    *((_QWORD *)&v66 + 1) = 0x7FFFFFFF80000000LL;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v33, v26, v28, &v74, a2, this) )
    {
      v34 = *((_DWORD *)this + 58);
      if ( v74 )
      {
        v34 |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) = v34;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x10) == 0 || (LOBYTE(v74) = 1, (v34 & 0x1400) != 0) )
        LOBYTE(v74) = 0;
      v71 = 0;
      if ( *(_DWORD *)this )
      {
        v35 = a10;
        v36 = 0x7FFFFFFF;
        while ( 1 )
        {
          v37 = v36;
          v73 = (int *)p_ptl[-1];
          vGenWidths(&v62, &v63, (struct EFLOAT *)&v68, (struct EFLOAT *)&v67, v73[3], v73[6], v73[7], v69);
          v38 = v62 + v31;
          v61 = 0;
          bFToL((float)v38 * v16, &v61, 0);
          v41 = v64;
          if ( v61 + v72 < v64 )
            v41 = v61 + v72;
          HIDWORD(v66) = v41;
          v42 = v61 + v72;
          if ( v61 + v72 >= v37 )
            v42 = v37;
          v64 = v42;
          v43 = DWORD1(v66);
          if ( v61 + v69 > SDWORD1(v66) )
            v43 = v61 + v69;
          v61 &= v39;
          DWORD1(v66) = v43;
          bFToL(v40 * v15, &v61, v39);
          v45 = v73;
          v47 = v61 - v73[3] / 2;
          if ( (_BYTE)v74 )
          {
            if ( v47 - 4 < v27 )
              v27 = v47 - 4;
            v46 = v73[3];
            LODWORD(v66) = v27;
            if ( v47 + v46 + 4 > v29 )
            {
              v29 = v47 + v46 + 4;
              DWORD2(v66) = v29;
            }
          }
          else
          {
            if ( v47 + v73[4] - 4 < v27 )
              v27 = v47 + v73[4] - 4;
            v48 = v73[5] + 4;
            LODWORD(v66) = v27;
            v49 = v47 + v48;
            if ( v49 > v29 )
              v29 = v49;
            DWORD2(v66) = v29;
          }
          v61 = 0;
          bFToL(v44 * v18, &v61, 0);
          v52 = v45[13] / (int)(v50 + 2);
          v53 = v61;
          v61 &= v50;
          p_ptl->x = v75 + v53 - v52;
          bFToL(v51 * v19, &v61, v50);
          p_ptl->y = a5 + v61 - v45[15] / (int)(v54 + 2);
          if ( !a9 )
            break;
          v55 = *a9;
          v61 &= v54;
          v56 = v55 + v70;
          ++a9;
          v70 = v56;
          bFToL((float)v56 * v20, &v61, v54);
          v31 = v61;
          if ( v35 )
          {
            *v35 = v56;
LABEL_41:
            ++v35;
          }
LABEL_42:
          p_ptl += 3;
          v36 = v64;
          ++v71;
          HIDWORD(v66) = v64;
          if ( v71 >= *(_DWORD *)this )
            goto LABEL_43;
        }
        v31 = v63 + *((_DWORD *)this + 29) + v38;
        v57 = *((_DWORD *)this + 30);
        if ( v57 )
        {
          if ( p_ptl[-2].x == v65 )
            v31 += v57;
        }
        if ( !v35 )
          goto LABEL_42;
        v61 &= v54;
        bFToL((float)v31 * v21, &v61, v54);
        *v35 = v61;
        goto LABEL_41;
      }
LABEL_43:
      v74 = 0;
      bFToL((float)v31 * v18, &v74, 0);
      v58 = v74;
      v74 = 0;
      *((_DWORD *)this + 20) = v58;
      bFToL((float)v31 * v19, &v74, 0);
      v59 = v66;
      v60 = v74;
      *((_DWORD *)this + 58) |= 4u;
      *((_OWORD *)this + 6) = v59;
      *((_DWORD *)this + 21) = v60;
    }
  }
}
