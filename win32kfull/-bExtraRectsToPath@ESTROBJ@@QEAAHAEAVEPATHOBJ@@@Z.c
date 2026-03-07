__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  unsigned int v4; // esi
  _DWORD *v5; // r8
  int v6; // ecx
  int v7; // edx
  int v8; // r9d
  int v9; // r11d
  int v10; // r13d
  int v11; // ecx
  int v12; // edx
  int v13; // r9d
  int v14; // r11d
  int v15; // r13d
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  unsigned int v20; // ecx
  RFONTOBJ *v21; // r9
  struct _GLYPHPOS *v22; // r13
  unsigned int v23; // r12d
  unsigned int GlyphDataCache; // r15d
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r12
  _DWORD *v29; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  __int64 v31; // r9
  _QWORD *v32; // rax
  float *v33; // rdx
  LONG x; // eax
  LONG y; // ecx
  float v36; // xmm3_4
  GLYPHDEF *pgdf; // rbx
  int pgb; // edi
  float v39; // xmm2_4
  unsigned int v40; // r8d
  int v41; // eax
  float v42; // xmm1_4
  unsigned int v43; // r8d
  unsigned int v44; // r8d
  struct EXFORMOBJ *v45; // [rsp+30h] [rbp-49h]
  int v46; // [rsp+40h] [rbp-39h] BYREF
  int v47; // [rsp+44h] [rbp-35h] BYREF
  int v48; // [rsp+48h] [rbp-31h] BYREF
  int v49; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v50; // [rsp+50h] [rbp-29h]
  int v51; // [rsp+54h] [rbp-25h]
  int v52; // [rsp+58h] [rbp-21h]
  unsigned int v53; // [rsp+5Ch] [rbp-1Dh]
  struct RFONT *v54; // [rsp+60h] [rbp-19h] BYREF
  int v55; // [rsp+68h] [rbp-11h]
  int v56; // [rsp+6Ch] [rbp-Dh]
  int v57; // [rsp+70h] [rbp-9h]
  int v58; // [rsp+74h] [rbp-5h]
  int v59; // [rsp+78h] [rbp-1h]
  int v60; // [rsp+7Ch] [rbp+3h]
  float *v61; // [rsp+80h] [rbp+7h]
  RFONTOBJ *v62; // [rsp+88h] [rbp+Fh]
  unsigned int v63; // [rsp+E0h] [rbp+67h]
  int v65; // [rsp+F0h] [rbp+77h]
  int v66; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v4 = 0;
  v5 = (_DWORD *)**((_QWORD **)this + 7);
  v6 = v5[70];
  v7 = v5[71];
  v8 = v5[74];
  v9 = v5[75];
  v10 = v5[72];
  v50 = 16 * v5[73];
  v52 = 16 * v5[76];
  v11 = 16 * v6;
  v12 = 16 * v7;
  v13 = 16 * v8;
  v14 = 16 * v9;
  v15 = 16 * v10;
  v51 = 16 * v5[77];
  v16 = *((_DWORD *)this + 58);
  v57 = v11;
  v56 = v12;
  v59 = v13;
  v58 = v14;
  v60 = v15;
  if ( (v16 & 8) == 0 )
  {
    v17 = (*((_DWORD *)this + 18) + 8) & 0xFFFFFFF0;
    v18 = (*((_DWORD *)this + 19) + 8) & 0xFFFFFFF0;
    if ( (v16 & 0x20) == 0 )
      goto LABEL_5;
    LODWORD(v45) = v14;
    if ( (unsigned int)bAddPgmToPath(v3, v11 + v17, v12 + v18, *((_DWORD *)this + 22), *((_DWORD *)this + 23), v13, v45) )
    {
      v3 = a2;
LABEL_5:
      if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
      {
        LODWORD(v45) = v51;
        LOBYTE(v4) = (unsigned int)bAddPgmToPath(
                                     v3,
                                     v17 + v15,
                                     v18 + v50,
                                     *((_DWORD *)this + 22),
                                     *((_DWORD *)this + 23),
                                     v52,
                                     v45) != 0;
        return v4;
      }
      return 1LL;
    }
    return 0LL;
  }
  v20 = *(_DWORD *)this;
  v21 = 0LL;
  v22 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v23 = 0;
  v54 = 0LL;
  GlyphDataCache = v20;
  v62 = 0LL;
  v63 = v20;
  if ( v20 )
  {
    while ( 1 )
    {
      v25 = *((_DWORD *)this + 58);
      if ( (v25 & 2) == 0 )
      {
        if ( (v25 & 0x1400) != 0 )
        {
          if ( !v23 )
          {
            v26 = *((_QWORD *)this + 26);
            v27 = *(_DWORD *)this - v20;
            v28 = (unsigned int)(v27 + 1);
            if ( (unsigned int)v28 < *(_DWORD *)this )
            {
              v29 = (_DWORD *)(v26 + 4 * v28);
              do
              {
                if ( *v29 != *(_DWORD *)(v26 + 4 * v27) )
                  break;
                LODWORD(v28) = v28 + 1;
                ++v29;
              }
              while ( (unsigned int)v28 < *(_DWORD *)this );
            }
            v23 = v28 - v27;
            LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v27, *((struct RFONTOBJ **)this + 7));
            v21 = (RFONTOBJ *)&v54;
            v54 = LinkedRfontOnIndex;
            v62 = (RFONTOBJ *)&v54;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v21 + 84LL) & 1) != 0 )
          {
            if ( v23 )
              GlyphDataCache = RFONTOBJ::bInsertGlyphbitsLookaside(v21, v22, *(_DWORD *)(*(_QWORD *)v21 + 88LL)) != 0;
            else
              GlyphDataCache = 0;
          }
          else
          {
            GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(v21, v23, v22);
          }
          if ( !GlyphDataCache )
            goto LABEL_39;
          v23 -= GlyphDataCache;
        }
        else
        {
          v31 = *((_QWORD *)this + 7);
          if ( (*(_DWORD *)(*(_QWORD *)v31 + 84LL) & 1) != 0 )
            GlyphDataCache = RFONTOBJ::bInsertGlyphbitsLookaside(
                               *((RFONTOBJ **)this + 7),
                               v22,
                               *(_DWORD *)(*(_QWORD *)v31 + 88LL)) != 0;
          else
            GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(*((RFONTOBJ **)this + 7), v20, v22);
          if ( !GlyphDataCache )
            goto LABEL_39;
        }
        v20 = v63;
      }
      v32 = (_QWORD *)*((_QWORD *)this + 7);
      v53 = 0;
      v33 = (float *)(*v32 + 396LL);
      v61 = v33;
      if ( GlyphDataCache )
        break;
LABEL_37:
      v20 -= GlyphDataCache;
      v63 = v20;
      if ( !v20 )
        goto LABEL_41;
      v21 = v62;
    }
    while ( 1 )
    {
      x = v22->ptl.x;
      y = v22->ptl.y;
      v65 = x;
      v66 = y;
      v55 = *((_DWORD *)this + 58);
      if ( (v55 & 0x100) == 0 )
      {
        v66 = 16 * y;
        v65 = 16 * x;
      }
      v36 = *v33;
      pgdf = v22->pgdf;
      v47 = 0;
      pgb = (int)pgdf[2].pgb;
      bFToL(v36 * (float)pgb, &v47, 0);
      v46 = 0;
      v39 = v61[1];
      bFToL(v39 * (float)pgb, &v46, v40);
      v41 = HIDWORD(pgdf[2].ppo) - pgb;
      v49 = 0;
      v42 = (float)v41;
      bFToL(v36 * (float)v41, &v49, v43);
      v48 = 0;
      bFToL(v39 * v42, &v48, v44);
      if ( (v55 & 0x20) != 0 )
      {
        LODWORD(v45) = v58;
        if ( !(unsigned int)bAddPgmToPath(a2, v65 + v47 + v57, v66 + v46 + v56, v49, v48, v59, v45) )
          break;
      }
      if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
      {
        LODWORD(v45) = v51;
        if ( !(unsigned int)bAddPgmToPath(a2, v65 + v47 + v60, v66 + v46 + v50, v49, v48, v52, v45) )
          break;
      }
      ++v22;
      ++v53;
      v33 = v61;
      if ( v53 >= GlyphDataCache )
      {
        v20 = v63;
        goto LABEL_37;
      }
    }
LABEL_39:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v54);
    return 0LL;
  }
LABEL_41:
  v54 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
  return 1LL;
}
