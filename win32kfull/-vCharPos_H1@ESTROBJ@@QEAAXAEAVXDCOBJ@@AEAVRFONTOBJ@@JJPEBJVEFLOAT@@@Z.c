/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0120BA0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C011DA20 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C011E1F4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0120F30 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C01234E4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B7194 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int *a6,
        int a7)
{
  struct _GLYPHPOS *v7; // rbx
  RFONTOBJ *v8; // r11
  unsigned __int16 *v9; // r12
  struct XDCOBJ *v10; // r8
  struct ESTROBJ *v11; // rdx
  int v12; // xmm6_4
  __int64 v13; // rax
  __int64 v14; // rax
  const unsigned __int16 *v15; // rdi
  __int64 v16; // r14
  struct _GLYPHPOS *v17; // rsi
  __int64 v18; // r15
  _DWORD *v19; // r15
  unsigned __int16 *v20; // r14
  struct GPRUN *v21; // rbp
  _DWORD *v22; // r15
  int v23; // ebx
  __int64 v24; // r8
  struct _GLYPHDATA *v25; // rbx
  int *v26; // r10
  __int64 v27; // rax
  int v28; // r15d
  int v29; // r9d
  int v30; // r14d
  LONG *p_y; // rbx
  int v32; // r12d
  int v33; // edi
  int v34; // r8d
  int v35; // ebp
  int *v36; // rsi
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  struct _GLYPHDATA *result; // rax
  int v42; // ecx
  struct GPRUN *Run; // rax
  __int64 v44; // rbx
  int v45; // esi
  int *v46; // rbp
  int v47; // edx
  int v48; // eax
  int v49; // [rsp+40h] [rbp-78h] BYREF
  int v50; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-70h]
  struct _GLYPHPOS *v52; // [rsp+50h] [rbp-68h]
  int v57; // [rsp+D8h] [rbp+20h]

  v8 = a3;
  v9 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v10 = a2;
  v11 = (struct ESTROBJ *)a1;
  v12 = a7;
  v13 = *(_QWORD *)v8;
  v52 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v7 = v52;
  a1[1] |= *(_DWORD *)(v13 + 276) & 0x40 | 2;
  v14 = *(_QWORD *)v8;
  v15 = v9;
  v16 = *a1;
  v17 = v7;
  v51 = *a1;
  if ( !*(_QWORD *)(v14 + 480) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(v8, (struct RFONTOBJ *)a1);
    if ( !(_DWORD)result )
      return result;
    v11 = (struct ESTROBJ *)a1;
    v8 = a3;
    v10 = a2;
  }
  v18 = *(_QWORD *)v8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 104LL) + 1792LL) & 0x40000000) != 0 && *(_DWORD *)(v18 + 88) == 1 )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(v8, (struct RFONTOBJ *)(unsigned int)v16, v7, v9, v10, v11);
    if ( !(_DWORD)result )
      return result;
    v8 = a3;
LABEL_43:
    v26 = (int *)a1;
    goto LABEL_14;
  }
  v19 = *(_DWORD **)(v18 + 480);
  a7 = 1;
  if ( !*v19 )
  {
    if ( (_DWORD)v16 )
    {
      do
      {
        v17->hg = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
        v17->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
        ++v17;
        LODWORD(v16) = v16 - 1;
      }
      while ( (_DWORD)v16 );
      v7 = v52;
      v8 = a3;
    }
    goto LABEL_13;
  }
  v20 = &v9[v16];
  v21 = (struct GPRUN *)(v19 + 4);
  if ( v9 >= v20 )
    goto LABEL_12;
  v22 = v19 + 5;
  do
  {
    v23 = *v15;
    v24 = (unsigned int)(v23 - *(_DWORD *)v21);
    if ( (unsigned int)v24 < *v22 )
    {
      _mm_lfence();
      v25 = *(struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v24);
      goto LABEL_8;
    }
    Run = RFONTOBJ::gprunFindRun(v8, v23);
    v21 = Run;
    v24 = (unsigned int)(v23 - *(_DWORD *)Run);
    v22 = (_DWORD *)((char *)Run + 4);
    if ( (unsigned int)v24 < *((_DWORD *)Run + 1) )
    {
      _mm_lfence();
      v8 = a3;
      v25 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v24);
LABEL_8:
      if ( !v25 )
      {
        v44 = (unsigned int)v24;
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(
                                        v8,
                                        (struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v24));
        if ( !(_DWORD)result )
          return result;
        v25 = *(struct _GLYPHDATA **)(*((_QWORD *)v21 + 1) + 8 * v44);
      }
      goto LABEL_9;
    }
    result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, (struct ESTROBJ *)a1, v15, v9, v51, &a7, 1);
    v25 = result;
    if ( !result )
      return result;
LABEL_9:
    if ( !v25->gdf.pgb && a7 && *(_DWORD *)(*(_QWORD *)a3 + 88LL) && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v25) )
      a7 = 0;
    ++v15;
    v8 = a3;
    v17->hg = v25->hg;
    v17->pgdf = &v25->gdf;
    ++v17;
  }
  while ( v15 < v20 );
  v7 = v52;
LABEL_12:
  if ( !a7 )
    goto LABEL_43;
LABEL_13:
  v26 = (int *)a1;
  v27 = *((_QWORD *)a1 + 8);
  a1[58] |= 2u;
  *((_QWORD *)a1 + 4) = v27;
LABEL_14:
  v28 = 0;
  v57 = a4 + 8;
  v29 = v57;
  v7->ptl.x = v57 >> 4;
  v30 = 0;
  p_y = &v7->ptl.y;
  v32 = (a5 + 8) >> 4;
  v33 = 0;
  v34 = 0;
  *p_y = v32;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 276LL) & 0x10) == 0 || (v26[58] & 0x1400) != 0 )
  {
    v35 = *v26;
    v36 = a6;
    while ( 1 )
    {
      v37 = *(_QWORD *)(p_y - 3);
      v38 = v34 + *(_DWORD *)(v37 + 16);
      if ( v38 >= v28 )
        v38 = v28;
      v28 = v38;
      if ( v34 + *(_DWORD *)(v37 + 20) > v30 )
        v30 = v34 + *(_DWORD *)(v37 + 20);
      v39 = *v36++;
      v33 += v39;
      if ( *(float *)&v12 == 16.0 )
      {
        v34 = 16 * v33;
      }
      else
      {
        v50 = 0;
        bFToL((float)v33 * *(float *)&v12, &v50, 0);
        v29 = v57;
        v34 = v50;
      }
      if ( !--v35 )
        break;
      p_y += 6;
      *p_y = v32;
      *(p_y - 1) = (v34 + v29) >> 4;
    }
  }
  else
  {
    v45 = *v26;
    v46 = a6;
    while ( 1 )
    {
      ++v46;
      v47 = v30;
      v48 = v34;
      if ( v34 >= v28 )
        v48 = v28;
      v28 = v48;
      v30 = v34 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      if ( v30 <= v47 )
        v30 = v47;
      v33 += *(v46 - 1);
      if ( *(float *)&v12 == 16.0 )
      {
        v34 = 16 * v33;
      }
      else
      {
        v49 = 0;
        bFToL((float)v33 * *(float *)&v12, &v49, 0);
        v29 = v57;
        v34 = v49;
      }
      if ( !--v45 )
        break;
      p_y += 6;
      *p_y = v32;
      *(p_y - 1) = (v34 + v29) >> 4;
    }
  }
  a1[20] = v34;
  if ( v34 <= v30 )
    v34 = v30;
  a1[26] = v34;
  a1[21] = 0;
  a1[24] = v28;
  v40 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
  {
    a1[25] = -*(_DWORD *)(v40 + 320);
    result = *(struct _GLYPHDATA **)a3;
    v42 = -*(_DWORD *)(*(_QWORD *)a3 + 316LL);
  }
  else
  {
    a1[25] = *(_DWORD *)(v40 + 316);
    result = *(struct _GLYPHDATA **)a3;
    v42 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
  }
  a1[27] = v42;
  a1[58] |= 4u;
  return result;
}
