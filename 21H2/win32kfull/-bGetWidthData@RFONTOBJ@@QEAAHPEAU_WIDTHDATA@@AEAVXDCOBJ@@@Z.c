/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00642C4
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C009CC30 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C006407C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098AC0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0152D9C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r13d
  __int64 v12; // rdx
  char v13; // cl
  BOOL v14; // eax
  __int16 fxD; // cx
  _BYTE *v16; // rdx
  __int64 v18; // r15
  int v19; // r12d
  struct _GLYPHDATA *v20; // rax
  int v21; // [rsp+30h] [rbp-20h]
  struct _GLYPHPOS v22; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+58h]

  v3 = 0;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 468LL);
  v9 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 312LL);
  v11 = 16 * *(_DWORD *)(*(_QWORD *)this + 356LL);
  v24 = v10;
  v12 = *(_QWORD *)(v9 + 32);
  v21 = v8;
  v13 = *(_BYTE *)(v12 + 44);
  v14 = v13 == (char)0x80 || v13 == -127 || v13 == -120 || *(_BYTE *)(v12 + 44) == 0x86;
  fxD = 0;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v12 + 48) & 0x10000000) != 0 )
    {
      v23 = 12288;
      memset(&v22, 0, sizeof(v22));
      while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v22, &v23, a3, 0LL)
           && v22.hg != *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        v23 = word_1C02FBA68[v7];
        if ( !v23 )
        {
          LODWORD(v18) = 0;
          v19 = WORD2(v22.pgdf[1].ppo);
          v23 = 12450;
          while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v22, &v23, 0LL, 0LL) )
          {
            LODWORD(v7) = WORD2(v22.pgdf[1].ppo);
            if ( (int)v7 <= v19 )
              LODWORD(v7) = v19;
            v18 = (unsigned int)(v18 + 1);
            v19 = v7;
            v23 = word_1C02FBA58[v18];
            if ( !v23 )
            {
              v20 = RFONTOBJ::pgdDefault(this);
              v10 = v24;
              v8 = v21;
              fxD = v20->fxD;
              goto LABEL_6;
            }
          }
          return v3;
        }
      }
    }
  }
  else
  {
LABEL_6:
    if ( ((v11 | v10 | v8 | (unsigned int)v7) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 7) = fxD;
      *((_WORD *)a2 + 1) = v11;
      *((_WORD *)a2 + 2) = v10;
      *((_WORD *)a2 + 3) = v8;
      *((_WORD *)a2 + 6) = v7;
      v3 = 1;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      v16 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
      *((_BYTE *)a2 + 8) = v16[108];
      *((_BYTE *)a2 + 9) = v16[109];
      *((_BYTE *)a2 + 11) = v16[110];
      *((_BYTE *)a2 + 10) = v16[111];
    }
  }
  return v3;
}
