/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02BD198
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00C49AC (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02BDB6C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
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
  int v17; // r15d
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  _DWORD *v22; // rbx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  struct _GLYPHPOS *v26; // r8
  signed int v27; // r15d
  unsigned __int16 *v28; // r9
  int v29; // ebx
  POINTL *p_ptl; // r13
  int v31; // r12d
  __int64 v32; // rax
  struct RFONTOBJ *v33; // rdx
  int v34; // r14d
  int *v35; // r14
  unsigned int v36; // ecx
  int v37; // edx
  signed int v38; // edi
  int v39; // ebx
  int v40; // r12d
  unsigned int v41; // r8d
  float v42; // xmm5_4
  int v43; // eax
  int v44; // eax
  float v45; // xmm5_4
  int *v46; // rdi
  int v47; // ecx
  signed int v48; // edx
  unsigned int v49; // r8d
  float v50; // xmm5_4
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // r8d
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // r8d
  __int128 v58; // xmm0
  int v59; // [rsp+48h] [rbp-B9h] BYREF
  unsigned int v60; // [rsp+4Ch] [rbp-B5h] BYREF
  int v61; // [rsp+50h] [rbp-B1h] BYREF
  int v62; // [rsp+54h] [rbp-ADh] BYREF
  int v63; // [rsp+58h] [rbp-A9h]
  int v64; // [rsp+5Ch] [rbp-A5h]
  float v65; // [rsp+60h] [rbp-A1h] BYREF
  float v66; // [rsp+64h] [rbp-9Dh] BYREF
  int v67; // [rsp+68h] [rbp-99h]
  int v68; // [rsp+6Ch] [rbp-95h]
  unsigned int v69; // [rsp+70h] [rbp-91h]
  __int128 v70; // [rsp+78h] [rbp-89h]
  int v71; // [rsp+88h] [rbp-79h]
  int v72; // [rsp+8Ch] [rbp-75h]
  signed int v73; // [rsp+90h] [rbp-71h]
  int v74; // [rsp+94h] [rbp-6Dh]
  int *v75; // [rsp+98h] [rbp-69h]
  int v76; // [rsp+158h] [rbp+57h] BYREF
  LONG v77; // [rsp+160h] [rbp+5Fh]

  v77 = a4;
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
    v65 = v15;
    v66 = v16;
    v61 = 0;
    v62 = 0;
    v67 = v17;
    v63 = 0;
    if ( !a9 )
    {
      v22 = (_DWORD *)((char *)this + 120);
      *((_DWORD *)this + 29) = 0;
      v23 = a6;
      *v22 = 0;
      v63 = 0;
      if ( v23 )
      {
        v24 = *(_QWORD *)a3;
        v76 = 0;
        bFToL((float)v23 * *(float *)(v24 + 444), &v76, 0);
        *((_DWORD *)this + 29) = v76;
      }
      if ( bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 444LL), a7, a8, (__int64)v22) )
      {
        vGenWidths(
          &v61,
          &v62,
          (struct EFLOAT *)&v66,
          (struct EFLOAT *)&v65,
          *(_DWORD *)(*(_QWORD *)a3 + 468LL),
          v17,
          0,
          v17);
        v25 = *((_DWORD *)this + 29);
        if ( v61 + v62 + v25 + *v22 < 0 )
          *v22 = -(v61 + v25 + v62);
        v63 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      }
    }
    v26 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v27 = 0x80000000;
    v28 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v29 = 0x7FFFFFFF;
    v68 = 0;
    v26->ptl.y = a5;
    p_ptl = &v26->ptl;
    v26->ptl.x = a4;
    v31 = 0;
    v32 = *(_QWORD *)a3;
    v76 = 0;
    v33 = (struct RFONTOBJ *)*(unsigned int *)this;
    v71 = *(_DWORD *)(v32 + 320);
    *(_QWORD *)&v70 = 0x800000007FFFFFFFuLL;
    *((_QWORD *)&v70 + 1) = 0x7FFFFFFF80000000LL;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v33, v26, v28, &v76, a2, this) )
    {
      if ( v76 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      v34 = *((_DWORD *)this + 58);
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x10) == 0 || (LOBYTE(v76) = 1, (v34 & 0x1400) != 0) )
        LOBYTE(v76) = 0;
      v69 = 0;
      if ( *(_DWORD *)this )
      {
        v35 = a10;
        v36 = 0x80000000;
        v37 = 0x7FFFFFFF;
        while ( 1 )
        {
          v38 = v36;
          v74 = v29;
          v75 = (int *)p_ptl[-1];
          v72 = v29;
          v39 = v37;
          v73 = v27;
          vGenWidths(&v61, &v62, (struct EFLOAT *)&v66, (struct EFLOAT *)&v65, v75[3], v75[6], v75[7], v67);
          v40 = v61 + v31;
          v60 = 0;
          bFToL((float)v40 * v16, (int *)&v60, 0);
          v43 = v60 + v71;
          if ( (int)(v60 + v71) >= v39 )
            v43 = v39;
          v64 = v43;
          v44 = v60 + v67;
          if ( (int)(v60 + v67) <= v38 )
            v44 = v38;
          v59 &= v41;
          v60 = v44;
          bFToL(v42 * v15, &v59, v41);
          v46 = v75;
          v47 = v59 - v75[3] / 2;
          if ( (_BYTE)v76 )
            break;
          v29 = v47 + v75[4] - 4;
          if ( v29 >= v74 )
            v29 = v74;
          v48 = v47 + v75[5] + 4;
          LODWORD(v70) = v29;
          if ( v48 > v27 )
          {
            v27 = v48;
            DWORD2(v70) = v48;
LABEL_31:
            LODWORD(v70) = v29;
          }
          v59 = 0;
          bFToL(v45 * v18, &v59, 0);
          v51 = v46[13] / (int)(v49 + 2);
          v52 = v59;
          v59 &= v49;
          p_ptl->x = v77 + v52 - v51;
          bFToL(v50 * v19, &v59, v49);
          p_ptl->y = a5 + v59 - v46[15] / (int)(v53 + 2);
          if ( !a9 )
          {
            v31 = v62 + *((_DWORD *)this + 29) + v40;
            v56 = *((_DWORD *)this + 30);
            if ( v56 )
            {
              if ( p_ptl[-2].x == v63 )
                v31 += v56;
            }
            if ( !v35 )
              goto LABEL_41;
            v59 &= v53;
            bFToL((float)v31 * v21, &v59, v53);
            *v35 = v59;
            goto LABEL_40;
          }
          v54 = *a9;
          v59 &= v53;
          v55 = v54 + v68;
          ++a9;
          v68 = v55;
          bFToL((float)v55 * v20, &v59, v53);
          v31 = v59;
          if ( v35 )
          {
            *v35 = v55;
LABEL_40:
            ++v35;
          }
LABEL_41:
          p_ptl += 3;
          v37 = v64;
          v36 = v60;
          ++v69;
          HIDWORD(v70) = v64;
          DWORD1(v70) = v60;
          if ( v69 >= *(_DWORD *)this )
          {
            v34 = *((_DWORD *)this + 58);
            goto LABEL_43;
          }
        }
        v29 = v47 - 4;
        v27 = v47 + v75[3] + 4;
        if ( v47 - 4 >= v72 )
          v29 = v72;
        if ( v27 <= v73 )
          v27 = v73;
        DWORD2(v70) = v27;
        goto LABEL_31;
      }
LABEL_43:
      v76 = 0;
      bFToL((float)v31 * v18, &v76, 0);
      v57 = v76;
      v76 = 0;
      *((_DWORD *)this + 20) = v57;
      bFToL((float)v31 * v19, &v76, 0);
      v58 = v70;
      *((_DWORD *)this + 21) = v76;
      *((_OWORD *)this + 6) = v58;
      *((_DWORD *)this + 58) = v34 | 4;
    }
  }
}
