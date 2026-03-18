/*
 * XREFs of EngComputeGlyphSet @ 0x1C00E7D30
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00E7C7C (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02B12B0 (NtGdiEngComputeGlyphSet.c)
 * Callees:
 *     cUnicodeRangesSupported @ 0x1C00E7E10 (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C00E8038 (cComputeGlyphSet.c)
 */

FD_GLYPHSET *__stdcall EngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  FD_GLYPHSET *v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // r14d
  FD_GLYPHSET *v11; // rax

  v3 = cChars;
  v4 = 0LL;
  if ( (unsigned int)cChars <= 0xFFFF )
  {
    if ( 3 * cChars )
    {
      v7 = Win32AllocPoolZInit((unsigned int)(3 * cChars), 1936484167LL);
      v8 = v7;
      if ( v7 )
      {
        v9 = v7 + 2 * v3;
        v10 = cUnicodeRangesSupported(nCodePage, nFirstChar, v3, v7, v7 + 2 * v3);
        v11 = (FD_GLYPHSET *)EngAllocMem(0, 4 * ((int)v3 + 4 + 4 * v10), 0x736C6747u);
        v4 = v11;
        if ( v11 )
          cComputeGlyphSet(v8, v9, v3, v10, (__int64)v11);
        Win32FreePool(v8);
      }
    }
  }
  return v4;
}
