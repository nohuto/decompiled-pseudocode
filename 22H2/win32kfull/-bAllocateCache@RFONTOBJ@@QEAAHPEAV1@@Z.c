/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C001DFB8
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00951E0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0095D10 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0097F00 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098A30 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0098F30 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C009C938 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C009D7AC (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C009D900 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00E7808 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0119460 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C015254C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01527DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C01586A0 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int v6; // edi
  unsigned int v7; // r13d
  unsigned int *v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  char *v17; // r12
  __int64 v18; // rdx
  unsigned __int16 *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v31; // rax
  unsigned __int16 *v32; // rsi
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  size_t Size; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  int v41; // [rsp+98h] [rbp+10h]
  unsigned int v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v41 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v41 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = (unsigned int *)(v4 + 8);
  }
  else
  {
    v31 = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v31 + 72);
    if ( !v3 )
      return 0LL;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(unsigned int **)(v31 + 72);
  }
  v9 = 16LL * v7;
  v43 = *v8;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = 8LL * *v8;
  Size = v10;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v11 = v9 + 16;
  if ( (unsigned int)v9 >= 0xFFFFFFF0 )
    return 0LL;
  v12 = v11 + v10;
  v42 = v11 + v10;
  if ( v11 + (unsigned int)v10 < v11 )
    return 0LL;
  v13 = v12 + (*(_DWORD *)(v2 + 640) != 0 ? 768 : 2048);
  if ( v13 + 8 > 0xC00 )
  {
    v13 = (v12 + 4095) & 0xFFFFF000;
    if ( v13 - v12 < 0x80 )
      v13 += 4096;
  }
  v14 = PALLOCMEM2(v13);
  v15 = *(_QWORD *)this;
  v39 = v14;
  if ( !v14 )
  {
    *(_DWORD *)(v15 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v15 + 480) = v14;
  v16 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v17 = (char *)(v16 + v9 + 16);
  *(_QWORD *)(v16 + 8) = 0LL;
  *(_DWORD *)v16 = v7;
  memset(v17, 0, Size);
  if ( v7 )
  {
    v18 = v7;
    if ( v41 )
    {
      v19 = (unsigned __int16 *)(v4 + 18);
      v20 = v16 - v4;
      do
      {
        *(_QWORD *)((char *)v19 + v20 + 6) = v17;
        *(_DWORD *)((char *)v19 + v20 - 2) = *(v19 - 1);
        v21 = *v19;
        *(_DWORD *)((char *)v19 + v20 + 2) = v21;
        v19 += 8;
        v17 += 8 * v21;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      v32 = (unsigned __int16 *)(v3 + 8);
      v33 = v16 + 20;
      do
      {
        *(_QWORD *)(v33 + 4) = v17;
        v34 = *v32;
        v32 += 2;
        *(_DWORD *)(v33 - 4) = v34;
        v35 = *(v32 - 1);
        *(_DWORD *)v33 = v35;
        v33 += 16LL;
        v17 += 8 * v35;
        --v18;
      }
      while ( v18 );
    }
  }
  v22 = (_QWORD *)(v39 + v42);
  *(_QWORD *)(v2 + 536) = v22;
  *v22 = 0LL;
  v23 = *(_QWORD *)(v2 + 536) + 16LL;
  v24 = v39 + v13;
  *(_QWORD *)(v2 + 528) = v24;
  *(_QWORD *)(v2 + 520) = v24;
  *(_QWORD *)(v2 + 512) = v23;
  v25 = *(_QWORD *)this;
  v26 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v26 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_22;
  if ( v26 == 2 )
    goto LABEL_34;
  v27 = *(_DWORD *)(v2 + 632);
  v6 = 16 * v27;
  v28 = (16 * v27 + 4095) & 0xFFFFF000;
  if ( v28 <= 0x2000 )
  {
    if ( v6 >= 0xC00 )
      v6 = (v6 + 4095) & 0xFFFFF000;
    goto LABEL_21;
  }
  if ( (unsigned int)(8 * v27) > 0x2000 )
  {
    v6 = 0x10000;
    if ( ((8 * v27 + 4095) & 0xFFFFF000) < 0x10000 )
      v6 = (8 * v27 + 4095) & 0xFFFFF000;
LABEL_34:
    v28 = v6;
    goto LABEL_21;
  }
  v6 = 0x2000;
  v28 = 0x2000;
LABEL_21:
  *(_DWORD *)(v2 + 552) = v28;
  *(_DWORD *)(v2 + 548) = v6;
  *(_DWORD *)(v2 + 556) = ((unsigned int)(v43 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 552);
  v25 = *(_QWORD *)this;
LABEL_22:
  v29 = **(int **)(v25 + 480);
  if ( (unsigned int)v29 > 0xC8 )
  {
    *(_DWORD *)(v2 + 604) = v29 - 1;
    v36 = v29 - 1;
    if ( (((_DWORD)v29 - 1) & 0xF000) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 12) & 0xF] + 12;
    }
    else if ( (((_WORD)v29 - 1) & 0xF00) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 8) & 0xF] + 8;
    }
    else if ( (((_BYTE)v29 - 1) & 0xF0) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 4) & 0xF] + 4;
    }
    else
    {
      v37 = acBits[v36 & 0xF];
    }
    *(_DWORD *)(v2 + 612) = v37;
    *(_DWORD *)(v2 + 608) = *((_DWORD *)&aiStart + v37);
  }
  else
  {
    *(_DWORD *)(v2 + 604) = 0;
  }
  return 1LL;
}
