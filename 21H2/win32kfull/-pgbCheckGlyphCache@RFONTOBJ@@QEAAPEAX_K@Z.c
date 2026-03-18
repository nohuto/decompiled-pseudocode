/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C001B588
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0018B7C (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0018FE0 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C001B4D8 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0141258 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D47E4 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r8
  __int64 *v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)(*(_QWORD *)this + 584LL);
  if ( v4 + a2 >= v4 )
  {
    if ( v4 + a2 <= *(_QWORD *)(v2 + 592) )
      return v4;
    v6 = *(__int64 **)(v2 + 576);
    if ( v6 && (v13 = *v6) != 0 )
    {
      v4 = v13 + 8;
      v14 = *(unsigned int *)(v2 + 552) - 8LL;
      *(_QWORD *)(v2 + 576) = v13;
      v15 = v14 + v13;
      *(_QWORD *)(v2 + 584) = v4;
      *(_QWORD *)(v2 + 592) = v15;
      if ( v4 + a2 <= v15 )
        return v4;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 560);
      if ( v7 )
        v8 = *(_DWORD *)(v2 + 552);
      else
        v8 = *(_DWORD *)(v2 + 548);
      if ( (*(_DWORD *)(v2 + 84) & 1) == 0 && v7 < *(_DWORD *)(v2 + 556) )
      {
        v9 = v8;
        if ( a2 + 8 <= (unsigned __int64)v8 )
        {
          if ( v8 )
          {
            v10 = (_QWORD *)Win32AllocPool(v8, 543319879LL);
            if ( v10 )
            {
              ++*(_DWORD *)(v2 + 560);
              v11 = *(_QWORD **)(v2 + 576);
              if ( v11 )
                *v11 = v10;
              else
                *(_QWORD *)(v2 + 568) = v10;
              *(_QWORD *)(v2 + 576) = v10;
              *v10 = 0LL;
              v12 = *(_QWORD *)(v2 + 576);
              v4 = v12 + 8;
              *(_QWORD *)(v2 + 584) = v12 + 8;
              *(_QWORD *)(v2 + 592) = v9 + v12 - 8;
              return v4;
            }
          }
          EngSetLastError(8u);
        }
      }
    }
  }
  return 0LL;
}
