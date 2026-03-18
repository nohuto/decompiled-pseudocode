/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02BD6B8
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C013BFF0 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02BDB6C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, int a5, int *a6)
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
  int v19; // esi
  unsigned __int16 *v20; // r9
  int v21; // edi
  int v22; // ecx
  int v23; // r13d
  __int64 v24; // r10
  POINTL *p_ptl; // r15
  int v26; // ebx
  struct XDCOBJ *v27; // rdx
  struct RFONTOBJ *v28; // rdx
  RFONTOBJ *v29; // r11
  unsigned int v30; // ecx
  int v31; // edx
  int *v32; // r15
  int v33; // ebx
  int v34; // r14d
  int v35; // esi
  signed int v36; // edi
  float v37; // xmm2_4
  unsigned int v38; // r8d
  int v39; // ecx
  signed int v40; // eax
  unsigned int v41; // r8d
  int v42; // edi
  int v43; // ecx
  unsigned int v44; // r8d
  unsigned int v45; // r8d
  signed int v46; // r14d
  unsigned int v47; // r8d
  unsigned int v48; // r8d
  int v49; // eax
  POINTL *v50; // r15
  int v51; // eax
  int *v52; // r14
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  unsigned int v57; // r8d
  unsigned int v58; // r8d
  unsigned int v59; // r8d
  unsigned int v60; // ecx
  __int128 v61; // xmm0
  struct XDCOBJ *v62; // [rsp+30h] [rbp-D8h]
  int v63; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v64; // [rsp+4Ch] [rbp-BCh] BYREF
  int v65; // [rsp+50h] [rbp-B8h]
  int v66; // [rsp+54h] [rbp-B4h]
  unsigned int v67; // [rsp+58h] [rbp-B0h]
  int v68; // [rsp+5Ch] [rbp-ACh] BYREF
  int v69; // [rsp+60h] [rbp-A8h]
  int v70; // [rsp+64h] [rbp-A4h]
  int v71[4]; // [rsp+68h] [rbp-A0h]
  float v72; // [rsp+78h] [rbp-90h] BYREF
  float v73; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v74; // [rsp+80h] [rbp-88h]
  BOOL v75; // [rsp+84h] [rbp-84h]
  BOOL v76; // [rsp+88h] [rbp-80h]
  POINTL *v77; // [rsp+90h] [rbp-78h]
  float v78; // [rsp+168h] [rbp+60h] BYREF
  LONG v79; // [rsp+170h] [rbp+68h]

  v79 = a4;
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
    v72 = v9;
    v73 = v10;
    v78 = v11;
    v64 = LODWORD(v12);
    v75 = EFLOAT::bIs16((EFLOAT *)&v78);
    v17 = EFLOAT::bIs16((EFLOAT *)&v64);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v19 = 0x80000000;
    v20 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v21 = 0x7FFFFFFF;
    v22 = a5;
    v23 = 0;
    v76 = v17;
    p_ptl = &v18->ptl;
    v69 = *(_DWORD *)(v24 + 316);
    v74 = *(_DWORD *)(v24 + 320);
    v71[1] = 0x80000000;
    v18->ptl.x = a4;
    v26 = 0;
    v18->ptl.y = v22;
    v62 = v27;
    v28 = (struct RFONTOBJ *)*(unsigned int *)this;
    v68 = 0;
    v77 = &v18->ptl;
    v71[0] = 0x7FFFFFFF;
    *(_QWORD *)&v71[2] = 0x7FFFFFFF80000000LL;
    v78 = 0.0;
    v65 = 0;
    v70 = 0;
    v63 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v29, v28, v18, v20, &v63, v62, this) )
    {
      if ( v63 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      v64 = 0;
      if ( *(_DWORD *)this )
      {
        v30 = 0x80000000;
        v31 = 0x7FFFFFFF;
        do
        {
          v32 = (int *)p_ptl[-1];
          v33 = v31;
          v34 = v19;
          v35 = v21;
          v36 = v30;
          vGenWidths(&v68, &v63, (struct EFLOAT *)&v73, (struct EFLOAT *)&v72, v32[3], v32[6], v32[7], v69);
          v63 = 0;
          v37 = (float)(v68 + LODWORD(v78));
          bFToL(v37 * v10, &v63, 0);
          v39 = v23 + v63 + v74;
          if ( v39 >= v33 )
            v39 = v33;
          v40 = v69 + v23 + v63;
          v66 = v39;
          if ( v40 <= v36 )
            v40 = v36;
          v78 = 0.0;
          v67 = v40;
          bFToL(v37 * v9, (int *)&v78, v38);
          v42 = v32[4];
          v43 = LODWORD(v78) - v32[3] / 2;
          v63 = 0;
          v21 = v43 + v42 - 4;
          if ( v21 >= v35 )
            v21 = v35;
          v19 = v32[5] + v43 + 4;
          if ( v19 <= v34 )
            v19 = v34;
          bFToL(v37 * v13, &v63, v41);
          v78 = 0.0;
          bFToL((float)v23 * v15, (int *)&v78, v44);
          v46 = v45 + 2;
          v77->x = v79 + v63 + LODWORD(v78) - v32[13] / (int)(v45 + 2);
          v63 = 0;
          bFToL(v37 * v14, &v63, v45);
          v78 = 0.0;
          bFToL((float)v23 * v16, (int *)&v78, v47);
          v49 = v32[15];
          v50 = v77;
          v51 = v49 / v46;
          v52 = a6;
          v53 = LODWORD(v78) - v51;
          v54 = v70;
          v77->y = a5 + v63 + v53;
          v55 = v52[1] + v65;
          v56 = *v52 + v54;
          v70 = v56;
          v65 = v55;
          if ( v75 )
          {
            v26 = 16 * v56;
          }
          else
          {
            v78 = 0.0;
            bFToL((float)v56 * v11, (int *)&v78, v48);
            v55 = v65;
            v26 = LODWORD(v78);
          }
          v78 = *(float *)&v26;
          if ( v76 )
          {
            v23 = 16 * v55;
          }
          else
          {
            v63 = 0;
            bFToL((float)v55 * v12, &v63, 0);
            v23 = v63;
          }
          p_ptl = v50 + 3;
          v31 = v66;
          v30 = v67;
          ++v64;
          v77 = p_ptl;
          a6 = v52 + 2;
          *(_QWORD *)v71 = __PAIR64__(v67, v21);
          *(_QWORD *)&v71[2] = __PAIR64__(v66, v19);
        }
        while ( v64 < *(_DWORD *)this );
      }
      v78 = 0.0;
      bFToL((float)v26 * v13, (int *)&v78, 0);
      v64 = 0;
      bFToL((float)v23 * v15, (int *)&v64, v57);
      *((_DWORD *)this + 20) = LODWORD(v78) + v64;
      v78 = 0.0;
      bFToL((float)v26 * v14, (int *)&v78, v58);
      v64 = 0;
      bFToL((float)v23 * v16, (int *)&v64, v59);
      v60 = LODWORD(v78) + v64;
      v61 = *(_OWORD *)v71;
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v60;
      *((_OWORD *)this + 6) = v61;
    }
  }
}
