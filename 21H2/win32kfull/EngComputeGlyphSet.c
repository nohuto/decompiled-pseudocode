/*
 * XREFs of EngComputeGlyphSet @ 0x1C00A48E0
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A482C (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02B29A0 (NtGdiEngComputeGlyphSet.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     cUnicodeRangesSupported @ 0x1C00A49B4 (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C00A4BE4 (cComputeGlyphSet.c)
 */

FD_GLYPHSET *__stdcall EngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  FD_GLYPHSET *v4; // rsi
  void *v7; // rax
  void *v8; // rdi
  int v9; // ebp
  int v10; // r14d
  FD_GLYPHSET *v11; // rax

  v3 = cChars;
  v4 = 0LL;
  if ( (unsigned int)cChars <= 0xFFFF )
  {
    v7 = PALLOCMEM2((unsigned int)(3 * cChars), 1936484167LL, 1);
    v8 = v7;
    if ( v7 )
    {
      v9 = (_DWORD)v7 + 2 * v3;
      v10 = cUnicodeRangesSupported(nCodePage, nFirstChar, v3, (_DWORD)v7, (__int64)v7 + 2 * v3);
      v11 = (FD_GLYPHSET *)EngAllocMem(0, 4 * ((int)v3 + 4 + 4 * v10), 0x736C6747u);
      v4 = v11;
      if ( v11 )
        cComputeGlyphSet((_DWORD)v8, v9, v3, v10, (__int64)v11);
      Win32FreePool(v8);
    }
  }
  return v4;
}
