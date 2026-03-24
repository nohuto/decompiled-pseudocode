/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0063548
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0098FC0 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00997C0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009C1E4 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7468 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0063464 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C006411C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  unsigned __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v5; // rax
  BOOL v6; // r13d
  int v7; // ebx
  struct _LIST_ENTRY *i; // rsi
  int v10; // edi
  __int64 v11; // rbx
  int v12; // r10d
  unsigned int v13; // edx
  BOOL v14; // r8d
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rbx
  struct PFE *v20; // [rsp+70h] [rbp+50h] BYREF
  __int64 v21; // [rsp+78h] [rbp+58h] BYREF

  v3 = a2;
  GreAcquireSemaphore(ghsemEUDC1);
  v4 = 0;
  if ( (unsigned __int16)(v3 + 0x2000) <= 0x18FFu
    || *(_OWORD *)&gappfeSysEUDC != 0LL
    && (unsigned __int16)v3 >= gqlEUDC
    && (unsigned __int16)v3 <= *(&gqlEUDC + 1)
    && ((0x80000000 >> (v3 & 0x1F)) & *(_DWORD *)(qword_1C033A8A8 + 4 * (v3 >> 5))) != 0 )
  {
    v4 = 1;
    goto LABEL_4;
  }
  if ( !bFinallyInitializeFontAssocDefault )
  {
LABEL_4:
    if ( gbSystemDBCSFontEnabled )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL) & 0x10) != 0 )
      {
        v20 = gappfeSystemDBCS;
        if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
        {
          if ( (unsigned __int16)v3 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20)
            && (unsigned __int16)v3 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
          {
            v18 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
            v19 = (int)(v3 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20)) / 32;
            if ( ((0x80000000 >> (((int)v3 - v18) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1)
                                                                     + 4 * v19)) != 0 )
              v4 = 1;
          }
        }
      }
    }
    if ( v4 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v12 = *(_DWORD *)(*(_QWORD *)this + 844LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 45LL) >> 4;
  if ( v13 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v13) )
    v13 = 6;
  v14 = v12 != 0;
  if ( v12 )
  {
    v15 = 664LL * v13;
    if ( !*(_QWORD *)((char *)&FontAssocDefaultTable + v15 + 656) )
    {
      if ( *(_QWORD *)((char *)&FontAssocDefaultTable + v15 + 648) )
        v14 = 0;
    }
  }
  v20 = (struct PFE *)*((_QWORD *)&FontAssocDefaultTable + 83 * v13 + v14 + 81);
  if ( v20 )
  {
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
    {
      if ( (unsigned __int16)v3 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20)
        && (unsigned __int16)v3 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
      {
        v16 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
        v17 = (int)(v3 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20)) / 32;
        if ( ((0x80000000 >> (((int)v3 - v16) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) + 4 * v17)) != 0 )
        {
LABEL_15:
          v4 = 1;
          goto LABEL_8;
        }
      }
    }
  }
LABEL_6:
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
  v21 = v5;
  v7 = v3;
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v21)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v21); i = i->Flink )
  {
    v20 = (struct PFE *)*((_QWORD *)&i[2].Flink + (v6 & (unsigned int)-(*((_QWORD *)&i[2].Flink + v6) != 0LL)));
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1)
      && (unsigned __int16)v3 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20)
      && (unsigned __int16)v3 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
    {
      v10 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
      v11 = (v7 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20)) / 32;
      if ( ((0x80000000 >> (((int)v3 - v10) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) + 4 * v11)) != 0 )
        goto LABEL_15;
      v7 = v3;
    }
  }
LABEL_8:
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v4;
}
