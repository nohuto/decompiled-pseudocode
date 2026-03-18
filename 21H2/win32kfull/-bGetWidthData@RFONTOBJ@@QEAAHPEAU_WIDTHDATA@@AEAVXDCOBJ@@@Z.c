/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0019F70
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C0019440 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C001A064 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  unsigned int v4; // ebx
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // edx
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r9d
  __int16 fxD; // cx
  _BYTE *v15; // rdx
  __int64 v17; // r15
  int v18; // r12d
  struct _GLYPHDATA *v19; // rax
  int v20; // [rsp+30h] [rbp-20h]
  struct _GLYPHPOS v21; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 468LL);
  v12 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v9 = 16 * *(_DWORD *)(*(_QWORD *)this + 312LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 356LL);
  v23 = v9;
  v11 = *(_QWORD *)(v12 + 32);
  v20 = v8;
  LOBYTE(v12) = *(_BYTE *)(v11 + 44) + 0x80;
  if ( (unsigned __int8)v12 <= 8u && (v13 = 323, _bittest(&v13, v12)) )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x10000000) != 0 )
    {
      *(_OWORD *)&v21.hg = 0LL;
      v22 = 12288;
      while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v21, &v22, a3, 0LL)
           && v21.hg != *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        v22 = word_1C02F9178[v7];
        if ( !v22 )
        {
          LODWORD(v17) = 0;
          v18 = WORD2(v21.pgdf[1].ppo);
          v22 = 12450;
          while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v21, &v22, 0LL, 0LL) )
          {
            LODWORD(v7) = WORD2(v21.pgdf[1].ppo);
            if ( (int)v7 <= v18 )
              LODWORD(v7) = v18;
            v17 = (unsigned int)(v17 + 1);
            v18 = v7;
            v22 = word_1C02F9180[v17];
            if ( !v22 )
            {
              v19 = RFONTOBJ::pgdDefault(this);
              v9 = v23;
              v8 = v20;
              fxD = v19->fxD;
              goto LABEL_4;
            }
          }
          return v4;
        }
      }
    }
  }
  else
  {
    fxD = 0;
LABEL_4:
    if ( ((v10 | v9 | v8 | (unsigned int)v7) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 7) = fxD;
      *((_WORD *)a2 + 1) = v10;
      *((_WORD *)a2 + 2) = v9;
      *((_WORD *)a2 + 3) = v8;
      *((_WORD *)a2 + 6) = v7;
      v4 = 1;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      v15 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
      *((_BYTE *)a2 + 8) = v15[108];
      *((_BYTE *)a2 + 9) = v15[109];
      *((_BYTE *)a2 + 11) = v15[110];
      *((_BYTE *)a2 + 10) = v15[111];
    }
  }
  return v4;
}
