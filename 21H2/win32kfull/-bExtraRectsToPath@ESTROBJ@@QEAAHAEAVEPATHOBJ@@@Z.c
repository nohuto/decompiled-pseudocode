/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC3E0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C013A388 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C02BC158 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C02BC354 (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D464C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  _DWORD *v4; // r8
  int v5; // r11d
  int v6; // r12d
  int v7; // r13d
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v16; // ecx
  RFONTOBJ *v17; // r10
  unsigned int v18; // r13d
  struct _GLYPHPOS *v19; // r9
  unsigned int GlyphDataCache; // r12d
  __int64 v21; // rdi
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r13
  _DWORD *v27; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  __int64 v29; // r10
  _QWORD *v30; // rax
  float *v31; // r8
  GLYPHDEF *pgdf; // rbx
  int v33; // esi
  float v34; // xmm3_4
  int y; // r10d
  float v36; // xmm0_4
  int pgb; // edi
  int x; // eax
  float v39; // xmm1_4
  unsigned int v40; // r8d
  float v41; // xmm2_4
  int ppo_high; // eax
  unsigned int v43; // r8d
  float v44; // xmm1_4
  unsigned int v45; // r8d
  int v46; // ebx
  int v47; // edi
  struct EXFORMOBJ *v48; // [rsp+30h] [rbp-49h]
  int v49; // [rsp+40h] [rbp-39h] BYREF
  int v50; // [rsp+44h] [rbp-35h] BYREF
  int v51; // [rsp+48h] [rbp-31h]
  int v52; // [rsp+4Ch] [rbp-2Dh]
  int v53; // [rsp+50h] [rbp-29h]
  int v54; // [rsp+54h] [rbp-25h]
  int v55; // [rsp+58h] [rbp-21h]
  int v56; // [rsp+5Ch] [rbp-1Dh]
  int v57; // [rsp+60h] [rbp-19h]
  unsigned int v58; // [rsp+64h] [rbp-15h]
  struct _GLYPHPOS *v59; // [rsp+68h] [rbp-11h]
  struct RFONT *v60; // [rsp+70h] [rbp-9h] BYREF
  int v61; // [rsp+78h] [rbp-1h]
  int v62; // [rsp+7Ch] [rbp+3h]
  int v63; // [rsp+80h] [rbp+7h]
  float *v64; // [rsp+88h] [rbp+Fh]
  RFONTOBJ *v65; // [rsp+90h] [rbp+17h]
  __int64 v66; // [rsp+98h] [rbp+1Fh]
  unsigned int v67; // [rsp+E0h] [rbp+67h]
  int v69; // [rsp+F0h] [rbp+77h] BYREF
  int v70; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = (_DWORD *)**((_QWORD **)this + 7);
  v5 = 16 * v4[70];
  v6 = 16 * v4[71];
  v7 = 16 * v4[74];
  v8 = 16 * v4[72];
  v9 = 16 * v4[73];
  v10 = 16 * v4[76];
  v11 = 16 * v4[77];
  v51 = 16 * v4[75];
  v12 = *((_DWORD *)this + 58);
  v62 = v5;
  v61 = v6;
  v63 = v7;
  v55 = v8;
  v54 = v9;
  v57 = v10;
  v56 = v11;
  if ( (v12 & 8) != 0 )
  {
    v16 = *(_DWORD *)this;
    v17 = 0LL;
    v60 = 0LL;
    v18 = 0;
    v19 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    GlyphDataCache = v16;
    v21 = *((_QWORD *)this + 5);
    v59 = v19;
    v22 = 1;
    v65 = 0LL;
    v67 = v16;
    if ( v16 )
    {
      while ( 1 )
      {
        v23 = *((_DWORD *)this + 58);
        if ( (v23 & 2) == 0 )
        {
          if ( (v23 & 0x1400) != 0 )
          {
            if ( !v18 )
            {
              v24 = *((_QWORD *)this + 26);
              v25 = *(_DWORD *)this - v16;
              v26 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v26 < *(_DWORD *)this )
              {
                v27 = (_DWORD *)(v24 + 4 * v26);
                do
                {
                  if ( *v27 != *(_DWORD *)(v24 + 4 * v25) )
                    break;
                  LODWORD(v26) = v26 + 1;
                  ++v27;
                }
                while ( (unsigned int)v26 < *(_DWORD *)this );
              }
              v18 = v26 - v25;
              LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v25, *((struct RFONTOBJ **)this + 7));
              v19 = v59;
              v17 = (RFONTOBJ *)&v60;
              v65 = (RFONTOBJ *)&v60;
              v60 = LinkedRfontOnIndex;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v17 + 84LL) & 1) != 0 )
            {
              if ( v18 )
                GlyphDataCache = RFONTOBJ::bInsertGlyphbitsLookaside(v17, v19, *(_DWORD *)(*(_QWORD *)v17 + 88LL)) != 0;
              else
                GlyphDataCache = 0;
            }
            else
            {
              GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(v17, v18, v19);
            }
            if ( !GlyphDataCache )
              goto LABEL_43;
            v18 -= GlyphDataCache;
          }
          else
          {
            v29 = *((_QWORD *)this + 7);
            if ( (*(_DWORD *)(*(_QWORD *)v29 + 84LL) & 1) != 0 )
              GlyphDataCache = RFONTOBJ::bInsertGlyphbitsLookaside(
                                 *((RFONTOBJ **)this + 7),
                                 v19,
                                 *(_DWORD *)(*(_QWORD *)v29 + 88LL)) != 0;
            else
              GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(*((RFONTOBJ **)this + 7), v16, v19);
            if ( !GlyphDataCache )
              goto LABEL_43;
          }
          v19 = v59;
          v16 = v67;
        }
        v58 = 0;
        v21 += 2LL * GlyphDataCache;
        v30 = (_QWORD *)*((_QWORD *)this + 7);
        v66 = v21;
        v31 = (float *)(*v30 + 396LL);
        v64 = v31;
        if ( GlyphDataCache )
          break;
LABEL_41:
        v16 -= GlyphDataCache;
        v67 = v16;
        if ( !v16 )
          goto LABEL_44;
        v17 = v65;
      }
      while ( 1 )
      {
        pgdf = v19->pgdf;
        v33 = *((_DWORD *)this + 58);
        v34 = *v31;
        y = 16 * v19->ptl.y;
        v36 = *v31;
        pgb = (int)pgdf[2].pgb;
        if ( (v33 & 0x100) != 0 )
          y = v19->ptl.y;
        x = 16 * v19->ptl.x;
        v39 = (float)pgb;
        if ( (v33 & 0x100) != 0 )
          x = v19->ptl.x;
        v52 = y;
        v70 = 0;
        v53 = x;
        bFToL(v36 * v39, &v70, 0);
        v69 &= v40;
        v41 = v64[1];
        bFToL(v41 * v39, &v69, v40);
        ppo_high = HIDWORD(pgdf[2].ppo);
        v50 &= v43;
        v44 = (float)(ppo_high - pgb);
        bFToL(v34 * v44, &v50, v43);
        v49 &= v45;
        bFToL(v41 * v44, &v49, v45);
        v46 = v52;
        v47 = v53;
        if ( (v33 & 0x20) != 0 )
        {
          LODWORD(v48) = v51;
          if ( !(unsigned int)bAddPgmToPath(a2, v70 + v53 + v62, v61 + v52 + v69, v50, v49, v63, v48) )
            break;
        }
        if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
        {
          LODWORD(v48) = v56;
          if ( !(unsigned int)bAddPgmToPath(a2, v55 + v47 + v70, v54 + v46 + v69, v50, v49, v57, v48) )
            break;
        }
        v22 = 1;
        v31 = v64;
        v19 = v59 + 1;
        ++v58;
        ++v59;
        if ( v58 >= GlyphDataCache )
        {
          v16 = v67;
          v21 = v66;
          goto LABEL_41;
        }
      }
LABEL_43:
      v22 = 0;
    }
LABEL_44:
    v60 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
    return v22;
  }
  else
  {
    v13 = (*((_DWORD *)this + 18) + 8) & 0xFFFFFFF0;
    v14 = (*((_DWORD *)this + 19) + 8) & 0xFFFFFFF0;
    if ( (v12 & 0x20) != 0 )
    {
      LODWORD(v48) = v51;
      if ( !(unsigned int)bAddPgmToPath(a2, v5 + v13, v6 + v14, *((_DWORD *)this + 22), *((_DWORD *)this + 23), v7, v48) )
        return 0LL;
      v8 = v55;
      v9 = v54;
      v10 = v57;
      v11 = v56;
    }
    if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
    {
      LODWORD(v48) = v11;
      if ( !(unsigned int)bAddPgmToPath(
                            a2,
                            v13 + v8,
                            v14 + v9,
                            *((_DWORD *)this + 22),
                            *((_DWORD *)this + 23),
                            v10,
                            v48) )
        return 0LL;
    }
    return 1LL;
  }
}
