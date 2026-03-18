/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0018B2C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0018F90 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C001A108 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00379E0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0141258 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0151CF0 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02A590C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02A59A4 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned int v6; // edi
  unsigned int v7; // r12d
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r15
  char *v19; // rdx
  unsigned __int16 *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v32; // rax
  char *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned __int16 *v36; // rbp
  int v37; // eax
  __int64 v38; // rax
  signed int v39; // ecx
  __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+20h] [rbp-58h]
  char *v42; // [rsp+20h] [rbp-58h]
  unsigned int v44; // [rsp+88h] [rbp+10h]
  int v45; // [rsp+90h] [rbp+18h]
  unsigned int v46; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v45 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v45 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = (unsigned int *)(v4 + 8);
  }
  else
  {
    v32 = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v32 + 72);
    if ( !v3 )
      return 0LL;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(unsigned int **)(v32 + 72);
  }
  v9 = *v8;
  v10 = 16LL * v7;
  v44 = v9;
  v41 = v10;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v11 = 8 * v9;
  if ( v11 > 0xFFFFFFFF )
    return 0LL;
  v12 = v10 + 16;
  if ( v12 < 0x10 )
    return 0LL;
  v13 = v12 + v11;
  v46 = v12 + v11;
  if ( v12 + (unsigned int)v11 < v12 )
    return 0LL;
  v14 = v13 + (*(_DWORD *)(v2 + 640) != 0 ? 768 : 2048);
  if ( v14 + 8 > 0xC00 )
  {
    v14 = (v13 + 4095) & 0xFFFFF000;
    if ( v14 - v13 < 0x80 )
      v14 += 4096;
  }
  if ( !v14 )
  {
    v16 = v2;
    goto LABEL_47;
  }
  v15 = Win32AllocPool(v14, 1667326791LL);
  v16 = *(_QWORD *)this;
  v17 = v15;
  if ( !v15 )
  {
LABEL_47:
    *(_DWORD *)(v16 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v16 + 480) = v15;
  v18 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v42 = (char *)(v18 + v41 + 16);
  *(_QWORD *)(v18 + 8) = 0LL;
  *(_DWORD *)v18 = v7;
  memset(v42, 0, 8LL * v44);
  if ( v45 )
  {
    if ( v7 )
    {
      v19 = v42;
      v20 = (unsigned __int16 *)(v4 + 18);
      v21 = v7;
      v22 = v18 - v4;
      do
      {
        *(_QWORD *)((char *)v20 + v22 + 6) = v19;
        *(_DWORD *)((char *)v20 + v22 - 2) = *(v20 - 1);
        v23 = *v20;
        *(_DWORD *)((char *)v20 + v22 + 2) = v23;
        v20 += 8;
        v19 += 8 * v23;
        --v21;
      }
      while ( v21 );
    }
  }
  else if ( v7 )
  {
    v33 = v42;
    v34 = v18 + 20;
    v35 = v7;
    v36 = (unsigned __int16 *)(v3 + 8);
    do
    {
      *(_QWORD *)(v34 + 4) = v33;
      v37 = *v36;
      v36 += 2;
      *(_DWORD *)(v34 - 4) = v37;
      v38 = *(v36 - 1);
      *(_DWORD *)v34 = v38;
      v34 += 16LL;
      v33 += 8 * v38;
      --v35;
    }
    while ( v35 );
  }
  v24 = (_QWORD *)(v17 + v46);
  *(_QWORD *)(v2 + 536) = v24;
  *v24 = 0LL;
  v25 = v17 + v14;
  *(_QWORD *)(v2 + 512) = *(_QWORD *)(v2 + 536) + 16LL;
  *(_QWORD *)(v2 + 528) = v25;
  *(_QWORD *)(v2 + 520) = v25;
  v26 = *(_QWORD *)this;
  v27 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v27 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_25;
  if ( v27 != 2 )
  {
    v28 = *(_DWORD *)(v2 + 632);
    v6 = 16 * v28;
    v29 = (16 * v28 + 4095) & 0xFFFFF000;
    if ( v29 <= 0x2000 )
    {
      if ( v6 >= 0xC00 )
        v6 = (v6 + 4095) & 0xFFFFF000;
      goto LABEL_24;
    }
    if ( (unsigned int)(8 * v28) <= 0x2000 )
    {
      v6 = 0x2000;
      v29 = 0x2000;
      goto LABEL_24;
    }
    v6 = 0x10000;
    if ( ((8 * v28 + 4095) & 0xFFFFF000) < 0x10000 )
      v6 = (8 * v28 + 4095) & 0xFFFFF000;
  }
  v29 = v6;
LABEL_24:
  *(_DWORD *)(v2 + 552) = v29;
  *(_DWORD *)(v2 + 548) = v6;
  *(_DWORD *)(v2 + 556) = ((v44 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 552);
  v26 = *(_QWORD *)this;
LABEL_25:
  v30 = **(_DWORD **)(v26 + 480);
  if ( v30 > 0xC8 )
  {
    v39 = v30 - 1;
    *(_DWORD *)(v2 + 604) = v39;
    if ( (v39 & 0xF000) != 0 )
    {
      v40 = (unsigned int)acBits[((__int64)v39 >> 12) & 0xF] + 12;
    }
    else if ( (v39 & 0xF00) != 0 )
    {
      v40 = (unsigned int)acBits[((__int64)v39 >> 8) & 0xF] + 8;
    }
    else if ( (v39 & 0xF0) != 0 )
    {
      v40 = (unsigned int)acBits[((__int64)v39 >> 4) & 0xF] + 4;
    }
    else
    {
      v40 = acBits[v39 & 0xF];
    }
    *(_DWORD *)(v2 + 612) = v40;
    *(_DWORD *)(v2 + 608) = *((_DWORD *)&aiStart + v40);
  }
  else
  {
    *(_DWORD *)(v2 + 604) = 0;
  }
  return 1LL;
}
