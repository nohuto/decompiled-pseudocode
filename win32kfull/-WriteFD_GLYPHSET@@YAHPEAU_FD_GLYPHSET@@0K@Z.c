/*
 * XREFs of ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00BAE00
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BCB4C (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02CB570 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CEB90 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall WriteFD_GLYPHSET(struct _FD_GLYPHSET *a1, struct _FD_GLYPHSET *a2, ULONG a3)
{
  ULONG cRuns; // r14d
  ULONG i; // esi
  __int64 v7; // rdx
  HGLYPH *v8; // rcx

  cRuns = a2->cRuns;
  a1->cjThis = a3;
  a1->flAccel = a2->flAccel;
  a1->cGlyphsSupported = a2->cGlyphsSupported;
  a1->cRuns = a2->cRuns;
  for ( i = 0; i < cRuns; ++i )
  {
    v7 = i;
    a1->awcrun[v7].wcLow = a2->awcrun[i].wcLow;
    a1->awcrun[v7].cGlyphs = a2->awcrun[i].cGlyphs;
    if ( a2->awcrun[i].phg )
    {
      v8 = (ULONG *)((char *)&a1->cjThis + (unsigned int)(LODWORD(a2->awcrun[i].phg) - (_DWORD)a2));
      a1->awcrun[i].phg = v8;
      memmove(v8, a2->awcrun[i].phg, 4LL * a2->awcrun[i].cGlyphs);
    }
    else
    {
      a1->awcrun[i].phg = 0LL;
    }
  }
  return 1LL;
}
