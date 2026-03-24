/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02BED70
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0095270 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01197E0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C014F6F0 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02BF1F0 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, LONG a5, int *a6)
{
  float *v6; // r10
  float v9; // xmm12_4
  float v10; // xmm13_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  BOOL v17; // eax
  struct _GLYPHPOS *v18; // r8
  int v19; // r14d
  unsigned __int16 *v20; // r9
  int v21; // r15d
  __int64 v22; // r10
  POINTL *p_ptl; // r13
  int v24; // eax
  struct XDCOBJ *v25; // rdx
  struct RFONTOBJ *v26; // rdx
  RFONTOBJ *v27; // r11
  unsigned int i; // r12d
  _DWORD *v29; // rdi
  int v30; // ebx
  float v31; // xmm2_4
  unsigned int v32; // r8d
  int v33; // edx
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  signed int v39; // ebx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  signed int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  unsigned int v48; // r8d
  int v49; // eax
  int *v50; // rbx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  int v58; // ecx
  __int128 v59; // xmm0
  struct XDCOBJ *v60; // [rsp+30h] [rbp-D8h]
  int v61; // [rsp+48h] [rbp-C0h] BYREF
  int v62; // [rsp+4Ch] [rbp-BCh] BYREF
  float v63; // [rsp+50h] [rbp-B8h] BYREF
  int v64; // [rsp+54h] [rbp-B4h] BYREF
  int v65; // [rsp+58h] [rbp-B0h]
  int v66; // [rsp+5Ch] [rbp-ACh]
  int v67; // [rsp+60h] [rbp-A8h]
  int v68; // [rsp+64h] [rbp-A4h]
  signed int v69; // [rsp+68h] [rbp-A0h]
  __int128 v70; // [rsp+70h] [rbp-98h]
  float v71; // [rsp+80h] [rbp-88h] BYREF
  float v72; // [rsp+84h] [rbp-84h] BYREF
  int v73; // [rsp+88h] [rbp-80h]
  BOOL v74; // [rsp+8Ch] [rbp-7Ch]
  BOOL v75; // [rsp+90h] [rbp-78h]
  float v76; // [rsp+168h] [rbp+60h] BYREF
  LONG v77; // [rsp+170h] [rbp+68h]

  v77 = a4;
  v6 = *a3;
  if ( !*((_DWORD *)*a3 + 160) )
  {
    v9 = v6[113];
    v10 = v6[114];
    v11 = v6[111];
    v12 = v6[106];
    v13 = v6[109];
    v14 = v6[110];
    v15 = v6[104];
    v16 = v6[105];
    v71 = v9;
    v72 = v10;
    v76 = v11;
    v63 = v12;
    v74 = EFLOAT::bIs16((EFLOAT *)&v76);
    v17 = EFLOAT::bIs16((EFLOAT *)&v63);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v19 = 0;
    v20 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v21 = 0;
    v75 = v17;
    p_ptl = &v18->ptl;
    v66 = *(_DWORD *)(v22 + 316);
    v24 = *(_DWORD *)(v22 + 320);
    v18->ptl.y = a5;
    v73 = v24;
    v69 = 0x80000000;
    v67 = 0x80000000;
    *(_QWORD *)((char *)&v70 + 4) = 0x8000000080000000uLL;
    v60 = v25;
    v18->ptl.x = a4;
    v26 = (struct RFONTOBJ *)*(unsigned int *)this;
    v68 = 0x7FFFFFFF;
    LODWORD(v70) = 0x7FFFFFFF;
    v65 = 0x7FFFFFFF;
    HIDWORD(v70) = 0x7FFFFFFF;
    v64 = 0;
    v76 = 0.0;
    v63 = 0.0;
    v61 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v27, v26, v18, v20, &v61, v60, this) )
    {
      if ( v61 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      for ( i = 0; i < *(_DWORD *)this; a6 = v50 + 2 )
      {
        v29 = (_DWORD *)p_ptl[-1];
        v30 = v29[3];
        vGenWidths(&v64, &v62, (struct EFLOAT *)&v72, (struct EFLOAT *)&v71, v30, v29[6], v29[7], v66);
        v61 = 0;
        v31 = (float)(v21 + v64);
        bFToL(v31 * v10, &v61, 0);
        v33 = v65;
        if ( v19 + v61 + v73 < v65 )
          v33 = v19 + v61 + v73;
        v34 = v67;
        v65 = v33;
        HIDWORD(v70) = v33;
        if ( v66 + v19 + v61 > v67 )
          v34 = v66 + v19 + v61;
        v61 = 0;
        v67 = v34;
        DWORD1(v70) = v34;
        bFToL(v31 * v9, &v61, v32);
        v36 = v29[4];
        v38 = v30 >> 31;
        v37 = v30;
        v62 = 0;
        v39 = v35 + 2;
        v40 = v61 - __SPAIR64__(v38, v37) / (int)(v35 + 2);
        v41 = v68;
        v42 = v40 + v36 - 4;
        if ( v42 < v68 )
          v41 = v42;
        v43 = v29[5] + v40 + 4;
        v68 = v41;
        LODWORD(v70) = v41;
        v44 = v69;
        if ( v43 > v69 )
          v44 = v43;
        v69 = v44;
        DWORD2(v70) = v44;
        bFToL(v31 * v13, &v62, v35);
        v61 = 0;
        bFToL((float)v19 * v15, &v61, v45);
        p_ptl->x = v77 + v62 + v61 - v29[13] / v39;
        v61 = 0;
        bFToL(v31 * v14, &v61, v46);
        v62 = 0;
        bFToL((float)v19 * v16, &v62, v47);
        v49 = v29[15] / v39;
        v50 = a6;
        v51 = v62 - v49;
        v52 = LODWORD(v63);
        p_ptl->y = a5 + v61 + v51;
        v53 = v50[1] + LODWORD(v76);
        v54 = *v50 + v52;
        v63 = *(float *)&v54;
        v76 = *(float *)&v53;
        if ( v74 )
        {
          v21 = 16 * v54;
        }
        else
        {
          v62 = 0;
          bFToL((float)v54 * v11, &v62, v48);
          v53 = LODWORD(v76);
          v21 = v62;
        }
        if ( v75 )
        {
          v19 = 16 * v53;
        }
        else
        {
          v62 = 0;
          bFToL((float)v53 * v12, &v62, 0);
          v19 = v62;
        }
        ++i;
        p_ptl += 3;
      }
      v76 = 0.0;
      bFToL((float)v21 * v13, (int *)&v76, 0);
      v63 = 0.0;
      bFToL((float)v19 * v15, (int *)&v63, v55);
      *((_DWORD *)this + 20) = LODWORD(v76) + LODWORD(v63);
      v76 = 0.0;
      bFToL((float)v21 * v14, (int *)&v76, v56);
      v63 = 0.0;
      bFToL((float)v19 * v16, (int *)&v63, v57);
      v58 = LODWORD(v76) + LODWORD(v63);
      v59 = v70;
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v58;
      *((_OWORD *)this + 6) = v59;
    }
  }
}
