/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C02B6CD4
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C01211B4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0121768 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C01502CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0150304 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  unsigned __int64 v2; // r12
  RFONTOBJ *v3; // rbx
  __int64 v4; // r15
  unsigned int v5; // r14d
  int v6; // r10d
  unsigned int v7; // edx
  BOOL v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rbx
  BOOL v15; // r13d
  int v16; // ebx
  struct _LIST_ENTRY *i; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  struct PFE *v22; // [rsp+70h] [rbp+50h] BYREF
  __int64 v23; // [rsp+78h] [rbp+58h] BYREF

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v4 + 13272));
  if ( (unsigned __int16)(v2 + 0x2000) <= 0x18FFu )
    goto LABEL_22;
  if ( !*(_QWORD *)(v4 + 13320) && !*(_QWORD *)(v4 + 13328) )
  {
    v5 = 0;
    goto LABEL_5;
  }
  v5 = 0;
  if ( (unsigned __int16)v2 >= *(_WORD *)(v4 + 13864)
    && (unsigned __int16)v2 <= *(_WORD *)(v4 + 13866)
    && ((0x80000000 >> (v2 & 0x1F)) & *(_DWORD *)(*(_QWORD *)(v4 + 13872) + 4 * (v2 >> 5))) != 0 )
  {
LABEL_22:
    v5 = 1;
    goto LABEL_23;
  }
LABEL_5:
  if ( *(_DWORD *)(v4 + 19360) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)v3 + 844LL);
    v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 120LL) + 32LL) + 45LL) >> 4;
    if ( v7 >= 7 || !*(_DWORD *)(664LL * v7 + v4 + 14088) )
      v7 = 6;
    v8 = v6 != 0;
    if ( v6 )
    {
      v9 = 664LL * v7;
      if ( !*(_QWORD *)(v9 + v4 + 14744) )
      {
        if ( *(_QWORD *)(v9 + v4 + 14736) )
          v8 = 0;
      }
    }
    v22 = *(struct PFE **)(v4 + 8 * (v8 + 83LL * v7) + 14736);
    if ( v22 )
    {
      if ( *((_QWORD *)PFEOBJ::pql(&v22) + 1) )
      {
        if ( (unsigned __int16)v2 >= *(_WORD *)PFEOBJ::pql(&v22)
          && (unsigned __int16)v2 <= *((_WORD *)PFEOBJ::pql(&v22) + 1) )
        {
          v10 = *((_QWORD *)PFEOBJ::pql(&v22) + 1);
          v11 = (int)(v2 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) / 32;
          v12 = ((0x80000000 >> ((int)(v2 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) % 32)) & *(_DWORD *)(v10 + 4 * v11)) == 0;
          v3 = this;
          if ( !v12 )
            v5 = 1;
        }
      }
    }
    goto LABEL_30;
  }
LABEL_23:
  if ( *(_DWORD *)(v4 + 19352) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 120LL) + 12LL) & 0x10) != 0 )
    {
      v22 = *(struct PFE **)(v4 + 19336);
      if ( *((_QWORD *)PFEOBJ::pql(&v22) + 1) )
      {
        if ( (unsigned __int16)v2 >= *(_WORD *)PFEOBJ::pql(&v22)
          && (unsigned __int16)v2 <= *((_WORD *)PFEOBJ::pql(&v22) + 1) )
        {
          v13 = *((_QWORD *)PFEOBJ::pql(&v22) + 1);
          v14 = (int)(v2 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) / 32;
          if ( ((0x80000000 >> ((int)(v2 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) % 32)) & *(_DWORD *)(v13 + 4 * v14)) != 0 )
          {
LABEL_39:
            v5 = 1;
            goto LABEL_40;
          }
          v3 = this;
        }
      }
    }
  }
LABEL_30:
  if ( !v5 )
  {
    v15 = *(_DWORD *)(*(_QWORD *)v3 + 844LL) != 0;
    v23 = *(_QWORD *)(*(_QWORD *)v3 + 120LL);
    v16 = v2;
    for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v23)->Flink;
          i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v23);
          i = i->Flink )
    {
      v22 = (struct PFE *)*((_QWORD *)&i[2].Flink + (v15 & (unsigned int)-(*((_QWORD *)&i[2].Flink + v15) != 0LL)));
      if ( *((_QWORD *)PFEOBJ::pql(&v22) + 1)
        && (unsigned __int16)v2 >= *(_WORD *)PFEOBJ::pql(&v22)
        && (unsigned __int16)v2 <= *((_WORD *)PFEOBJ::pql(&v22) + 1) )
      {
        v18 = *((_QWORD *)PFEOBJ::pql(&v22) + 1);
        v19 = (v16 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) / 32;
        if ( ((0x80000000 >> ((int)(v2 - *(unsigned __int16 *)PFEOBJ::pql(&v22)) % 32)) & *(_DWORD *)(v18 + 4 * v19)) != 0 )
          goto LABEL_39;
        v16 = v2;
      }
    }
  }
LABEL_40:
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v4 + 13272));
  return v5;
}
