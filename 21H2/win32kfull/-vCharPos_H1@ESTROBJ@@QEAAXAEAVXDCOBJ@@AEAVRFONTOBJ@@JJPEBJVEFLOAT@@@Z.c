/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00379E0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0018B2C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0018F90 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C001AA60 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H1(
        int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int *a6,
        int a7)
{
  int v7; // r14d
  struct _GLYPHPOS *v8; // rbx
  struct XDCOBJ *v9; // r9
  unsigned __int16 *v10; // rdx
  RFONTOBJ *v11; // r15
  struct ESTROBJ *v12; // r13
  int v13; // xmm6_4
  int v14; // r10d
  const unsigned __int16 *v15; // rdi
  unsigned int v16; // r10d
  struct _GLYPHPOS *v17; // rsi
  __int64 v18; // r8
  _DWORD *v19; // r12
  struct GPRUN *v20; // rbp
  unsigned __int16 *v21; // r15
  _DWORD *v22; // r12
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  struct _GLYPHDATA **v27; // rdx
  struct _GLYPHDATA *v28; // rbx
  __int64 v29; // rax
  int v30; // r14d
  int v31; // ebp
  LONG *p_y; // rbx
  int v33; // r12d
  int v34; // edi
  int v35; // esi
  __int64 v36; // r9
  int v37; // r15d
  int *v38; // r14
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  struct _GLYPHDATA *result; // rax
  int v43; // ecx
  int v44; // r10d
  int *v45; // r11
  _BOOL8 v46; // r15
  __int64 v47; // rdx
  int v48; // r8d
  int v49; // eax
  int v50; // ecx
  struct GPRUN *Run; // rax
  __int64 v52; // rbx
  unsigned int v53; // edx
  __int64 v54; // r9
  __int64 v55; // r9
  unsigned int v56; // r14d
  unsigned int v57; // [rsp+40h] [rbp-78h]
  int v58; // [rsp+44h] [rbp-74h] BYREF
  unsigned __int16 *v59; // [rsp+48h] [rbp-70h]
  _BOOL8 v60; // [rsp+50h] [rbp-68h]
  struct _GLYPHPOS *v61; // [rsp+58h] [rbp-60h]
  int v66; // [rsp+D8h] [rbp+20h]

  v7 = a4;
  v9 = a2;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = a3;
  v12 = (struct ESTROBJ *)a1;
  v13 = a7;
  v14 = *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x40 | 2;
  v61 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v8 = v61;
  a1[1] |= v14;
  v59 = v10;
  v60 = *(float *)&v13 == 16.0;
  v15 = v10;
  v16 = *a1;
  v17 = v8;
  v57 = *a1;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, (struct RFONTOBJ *)v10);
    if ( !(_DWORD)result )
      return result;
    v16 = v57;
    v10 = (unsigned __int16 *)v15;
    v9 = a2;
  }
  v18 = *(_QWORD *)v11;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 104LL) + 1792LL) & 0x40000000) != 0 && *(_DWORD *)(v18 + 88) == 1 )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(v11, (struct RFONTOBJ *)v16, v8, v10, v9, v12);
    if ( (_DWORD)result )
      goto LABEL_13;
    return result;
  }
  v19 = *(_DWORD **)(v18 + 480);
  a7 = 1;
  if ( !*v19 )
  {
    if ( v16 )
    {
      v56 = v57;
      do
      {
        v17->hg = *(_DWORD *)(*(_QWORD *)v11 + 460LL);
        v17->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v11);
        ++v17;
        --v56;
      }
      while ( v56 );
      v7 = a4;
    }
    goto LABEL_12;
  }
  v20 = (struct GPRUN *)(v19 + 4);
  v21 = &v10[v16];
  if ( v10 >= v21 )
  {
    v11 = a3;
LABEL_12:
    v29 = *((_QWORD *)v12 + 8);
    *((_DWORD *)v12 + 58) |= 2u;
    *((_QWORD *)v12 + 4) = v29;
    goto LABEL_13;
  }
  v22 = v19 + 5;
  do
  {
    v23 = *v15;
    v24 = (unsigned int)(v23 - *(_DWORD *)v20);
    if ( (unsigned int)v24 < *v22 )
    {
      _mm_lfence();
      v25 = *((_QWORD *)v20 + 1);
      v26 = 8 * v24;
      goto LABEL_8;
    }
    Run = RFONTOBJ::gprunFindRun(a3, v23);
    v20 = Run;
    v52 = (unsigned int)(v23 - *(_DWORD *)Run);
    v22 = (_DWORD *)((char *)Run + 4);
    if ( (unsigned int)v52 < *((_DWORD *)Run + 1) )
    {
      _mm_lfence();
      v25 = *((_QWORD *)Run + 1);
      v26 = 8 * v52;
LABEL_8:
      v27 = (struct _GLYPHDATA **)(v26 + v25);
      v28 = *v27;
      if ( !*v27 )
      {
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(a3, v27);
        if ( !(_DWORD)result )
          return result;
        v28 = *(struct _GLYPHDATA **)(v26 + *((_QWORD *)v20 + 1));
      }
      goto LABEL_9;
    }
    result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, v12, v15, v59, v57, &a7, 1);
    v28 = result;
    if ( !result )
      return result;
LABEL_9:
    if ( !v28->gdf.pgb
      && *(float *)&a7 != 0.0
      && *(_DWORD *)(*(_QWORD *)a3 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v28) )
    {
      *(float *)&a7 = 0.0;
    }
    ++v15;
    v17->hg = v28->hg;
    v17->pgdf = &v28->gdf;
    ++v17;
  }
  while ( v15 < v21 );
  v7 = a4;
  v8 = v61;
  v11 = a3;
  if ( *(float *)&a7 != 0.0 )
    goto LABEL_12;
LABEL_13:
  v30 = v7 + 8;
  v66 = v30;
  v8->ptl.x = v30 >> 4;
  v31 = 0;
  p_y = &v8->ptl.y;
  v33 = (a5 + 8) >> 4;
  v34 = 0;
  v35 = 0;
  LODWORD(v36) = 0;
  *p_y = v33;
  if ( (*(_DWORD *)(*(_QWORD *)v11 + 276LL) & 0x10) == 0 || (*((_DWORD *)v12 + 58) & 0x1400) != 0 )
  {
    v44 = *(_DWORD *)v12;
    v45 = a6;
    v46 = v60;
    while ( 1 )
    {
      v47 = *(_QWORD *)(p_y - 3);
      v48 = v34;
      v49 = *v45++;
      v50 = v36 + *(_DWORD *)(v47 + 16);
      if ( v50 >= v31 )
        v50 = v31;
      v34 = v36 + *(_DWORD *)(v47 + 20);
      v31 = v50;
      if ( v34 <= v48 )
        v34 = v48;
      v35 += v49;
      if ( v46 )
      {
        LODWORD(v36) = 16 * v35;
      }
      else
      {
        LODWORD(v36) = 0;
        *(float *)&a7 = (float)v35 * *(float *)&v13;
        v53 = (unsigned __int8)(a7 >> 23);
        if ( v53 <= 0x9E )
        {
          v54 = a7 & 0x7FFFFF | 0x800000LL;
          v55 = v53 < 0x76 ? v54 >> (118 - (unsigned __int8)v53) : v54 << ((unsigned __int8)v53 - 118);
          v36 = (v55 + 0x80000000LL) >> 32;
          if ( a7 < 0 )
            LODWORD(v36) = -(int)v36;
        }
      }
      if ( !--v44 )
        break;
      p_y += 6;
      *p_y = v33;
      *(p_y - 1) = ((int)v36 + v30) >> 4;
    }
    v12 = (struct ESTROBJ *)a1;
  }
  else
  {
    v37 = *(_DWORD *)v12;
    v38 = a6;
    while ( 1 )
    {
      if ( (int)v36 < v31 )
        v31 = v36;
      v39 = (unsigned int)(v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v39 > v34 )
        v34 = v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v40 = *v38++;
      v35 += v40;
      if ( v60 )
      {
        LODWORD(v36) = 16 * v35;
      }
      else
      {
        v58 = 0;
        bFToL(v39, &v58, 0LL);
        LODWORD(v36) = v58;
      }
      if ( !--v37 )
        break;
      p_y += 6;
      *(p_y - 1) = ((int)v36 + v66) >> 4;
      *p_y = v33;
    }
  }
  *((_DWORD *)v12 + 20) = v36;
  if ( (int)v36 <= v34 )
    LODWORD(v36) = v34;
  *((_DWORD *)v12 + 26) = v36;
  *((_DWORD *)v12 + 21) = 0;
  *((_DWORD *)v12 + 24) = v31;
  v41 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *((_DWORD *)v12 + 25) = -*(_DWORD *)(v41 + 320);
    result = *(struct _GLYPHDATA **)a3;
    v43 = -*(_DWORD *)(*(_QWORD *)a3 + 316LL);
  }
  else
  {
    *((_DWORD *)v12 + 25) = *(_DWORD *)(v41 + 316);
    result = *(struct _GLYPHDATA **)a3;
    v43 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
  }
  *((_DWORD *)v12 + 27) = v43;
  *((_DWORD *)v12 + 58) |= 4u;
  return result;
}
