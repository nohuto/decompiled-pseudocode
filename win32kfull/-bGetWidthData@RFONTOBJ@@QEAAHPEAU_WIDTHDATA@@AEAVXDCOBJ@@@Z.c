/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C010F3B4
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C010F0B0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0111610 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B7194 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  int v5; // ebx
  int v7; // edx
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  __int16 fxD; // cx
  __int64 result; // rax
  _BYTE *v15; // r8
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // r14d
  int v19; // ecx
  struct _GLYPHDATA *v20; // rax
  struct _GLYPHPOS v21; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+58h]

  v5 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)this + 468LL);
  v11 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v8 = 16 * *(_DWORD *)(*(_QWORD *)this + 356LL);
  v9 = 16 * *(_DWORD *)(*(_QWORD *)this + 312LL);
  v23 = v7;
  v10 = *(_QWORD *)(v11 + 32);
  LOBYTE(v11) = *(_BYTE *)(v10 + 44) + 0x80;
  if ( (unsigned __int8)v11 <= 8u && (v12 = 323, _bittest(&v12, v11)) )
  {
    if ( (*(_DWORD *)(v10 + 48) & 0x10000000) != 0 )
    {
      LODWORD(v16) = 0;
      v22 = 12288;
      memset(&v21, 0, sizeof(v21));
      while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v21, &v22, a3, 0LL)
           && v21.hg != *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v16 = (unsigned int)(v16 + 1);
        v22 = word_1C032A938[v16];
        if ( !v22 )
        {
          LODWORD(v17) = 0;
          v18 = WORD2(v21.pgdf[1].ppo);
          v22 = 12450;
          while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v21, &v22, 0LL, 0LL) )
          {
            v19 = WORD2(v21.pgdf[1].ppo);
            if ( v19 <= v18 )
              v19 = v18;
            v17 = (unsigned int)(v17 + 1);
            v18 = v19;
            v22 = word_1C032A928[v17];
            if ( !v22 )
            {
              v5 = v19;
              v20 = RFONTOBJ::pgdDefault(this);
              v7 = v23;
              fxD = v20->fxD;
              goto LABEL_4;
            }
          }
          return 0LL;
        }
      }
    }
  }
  else
  {
    fxD = 0;
LABEL_4:
    if ( ((v8 | v9 | v7 | v5) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 7) = fxD;
      *((_WORD *)a2 + 1) = v8;
      *((_WORD *)a2 + 2) = v9;
      *((_WORD *)a2 + 3) = v7;
      *((_WORD *)a2 + 6) = v5;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      result = 1LL;
      v15 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
      *((_BYTE *)a2 + 8) = v15[108];
      *((_BYTE *)a2 + 9) = v15[109];
      *((_BYTE *)a2 + 11) = v15[110];
      *((_BYTE *)a2 + 10) = v15[111];
      return result;
    }
  }
  return 0LL;
}
