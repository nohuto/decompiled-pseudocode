/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02DCD48
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C02D1814 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02DD664 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
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
  unsigned __int16 *v19; // r9
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // r10
  POINTL *p_ptl; // r14
  unsigned int v24; // ebx
  signed int v25; // edi
  struct XDCOBJ *v26; // rdx
  struct RFONTOBJ *v27; // rdx
  RFONTOBJ *v28; // r11
  int v29; // ecx
  int *v30; // r14
  int v31; // esi
  int v32; // ebx
  float v33; // xmm2_4
  unsigned int v34; // r8d
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // r8d
  signed int v42; // edi
  signed int v43; // ebx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // r8d
  int v48; // ecx
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  int v52; // eax
  POINTL *v53; // r14
  int v54; // eax
  int *v55; // rdi
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  unsigned int v60; // r8d
  unsigned int v61; // r8d
  unsigned int v62; // r8d
  unsigned int v63; // ecx
  __int128 v64; // xmm0
  struct XDCOBJ *v65; // [rsp+30h] [rbp-D8h]
  int v66; // [rsp+48h] [rbp-C0h] BYREF
  int v67; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v68; // [rsp+50h] [rbp-B8h] BYREF
  int v69; // [rsp+54h] [rbp-B4h]
  signed int v70; // [rsp+58h] [rbp-B0h]
  __int128 v71; // [rsp+60h] [rbp-A8h]
  int v72; // [rsp+70h] [rbp-98h] BYREF
  int v73; // [rsp+74h] [rbp-94h]
  signed int v74; // [rsp+78h] [rbp-90h]
  int v75; // [rsp+7Ch] [rbp-8Ch]
  float v76; // [rsp+80h] [rbp-88h] BYREF
  float v77; // [rsp+84h] [rbp-84h] BYREF
  int v78; // [rsp+88h] [rbp-80h]
  BOOL v79; // [rsp+8Ch] [rbp-7Ch]
  BOOL v80; // [rsp+90h] [rbp-78h]
  POINTL *v81; // [rsp+98h] [rbp-70h]
  float v82; // [rsp+178h] [rbp+70h] BYREF
  LONG v83; // [rsp+180h] [rbp+78h]

  v83 = a4;
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
    v76 = v9;
    v77 = v10;
    v82 = v11;
    v68 = LODWORD(v12);
    v79 = EFLOAT::bIs16((EFLOAT *)&v82);
    v17 = EFLOAT::bIs16((EFLOAT *)&v68);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v20 = 0;
    v80 = v17;
    v21 = 0;
    v73 = *(_DWORD *)(v22 + 316);
    p_ptl = &v18->ptl;
    v78 = *(_DWORD *)(v22 + 320);
    v18->ptl.y = a5;
    v18->ptl.x = a4;
    v24 = 0x80000000;
    *(_QWORD *)&v71 = 0x800000007FFFFFFFuLL;
    v25 = 0x80000000;
    v82 = NAN;
    v65 = v26;
    v27 = (struct RFONTOBJ *)*(unsigned int *)this;
    v72 = 0;
    v81 = &v18->ptl;
    v74 = 0x80000000;
    *((_QWORD *)&v71 + 1) = 0x7FFFFFFF80000000LL;
    v70 = 0x80000000;
    v69 = 0;
    v75 = 0;
    v66 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v28, v27, v18, v19, &v66, v65, this) )
    {
      if ( v66 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      v68 = 0;
      if ( *(_DWORD *)this )
      {
        v29 = LODWORD(v82);
        do
        {
          v30 = (int *)p_ptl[-1];
          v31 = v24;
          v32 = v29;
          vGenWidths(&v72, &v67, (struct EFLOAT *)&v77, (struct EFLOAT *)&v76, v30[3], v30[6], v30[7], v73);
          v66 = 0;
          v33 = (float)(v21 + v72);
          bFToL(v33 * v10, &v66, 0);
          v35 = LODWORD(v82);
          v36 = v20 + v66 + v78;
          if ( v36 < SLODWORD(v82) )
            v35 = v20 + v66 + v78;
          HIDWORD(v71) = v35;
          v37 = v20 + v66 + v78;
          if ( v36 >= v32 )
            v37 = v32;
          v38 = v20 + v66 + v73;
          LODWORD(v82) = v37;
          v39 = v70;
          if ( v38 > v70 )
            v39 = v20 + v66 + v73;
          DWORD1(v71) = v39;
          v40 = v20 + v66 + v73;
          if ( v38 <= v25 )
            v40 = v25;
          v66 &= v34;
          v70 = v40;
          bFToL(v33 * v9, &v66, v34);
          v42 = v41 + 2;
          v43 = v74;
          v44 = v66 - v30[3] / (int)(v41 + 2);
          v45 = v71;
          if ( v44 + v30[4] - 4 < (int)v71 )
            v45 = v44 + v30[4] - 4;
          v46 = v30[5] + v44 + 4;
          LODWORD(v71) = v45;
          if ( v46 > v74 )
            v43 = v46;
          DWORD2(v71) = v43;
          v24 = v46;
          if ( v46 <= v31 )
            v24 = v31;
          v67 = 0;
          v74 = v24;
          bFToL(v33 * v13, &v67, v41);
          v66 = 0;
          bFToL((float)v20 * v15, &v66, v47);
          v48 = v66 - v30[13] / v42;
          v66 = 0;
          v81->x = v83 + v67 + v48;
          bFToL(v33 * v14, &v66, v49);
          v67 = 0;
          bFToL((float)v20 * v16, &v67, v50);
          v52 = v30[15];
          v53 = v81;
          v54 = v52 / v42;
          v55 = a6;
          v56 = v67 - v54;
          v57 = v75;
          v81->y = a5 + v66 + v56;
          v58 = v55[1] + v69;
          v59 = *v55 + v57;
          v75 = v59;
          v69 = v58;
          if ( v79 )
          {
            v21 = 16 * v59;
          }
          else
          {
            v67 = 0;
            bFToL((float)v59 * v11, &v67, v51);
            v58 = v69;
            v21 = v67;
          }
          if ( v80 )
          {
            v20 = 16 * v58;
          }
          else
          {
            v67 = 0;
            bFToL((float)v58 * v12, &v67, 0);
            v20 = v67;
          }
          v29 = LODWORD(v82);
          p_ptl = v53 + 3;
          a6 = v55 + 2;
          v25 = v70;
          ++v68;
          v81 = p_ptl;
          DWORD1(v71) = v70;
          *((_QWORD *)&v71 + 1) = __PAIR64__(LODWORD(v82), v24);
        }
        while ( v68 < *(_DWORD *)this );
      }
      v82 = 0.0;
      bFToL((float)v21 * v13, (int *)&v82, 0);
      v68 = 0;
      bFToL((float)v20 * v15, (int *)&v68, v60);
      *((_DWORD *)this + 20) = LODWORD(v82) + v68;
      v82 = 0.0;
      bFToL((float)v21 * v14, (int *)&v82, v61);
      v68 = 0;
      bFToL((float)v20 * v16, (int *)&v68, v62);
      v63 = LODWORD(v82) + v68;
      v64 = v71;
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v63;
      *((_OWORD *)this + 6) = v64;
    }
  }
}
