FD_GLYPHSET *__stdcall EngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  FD_GLYPHSET *v4; // rsi
  __int64 v6; // rax
  void *v7; // rdi
  int v8; // ebp
  int v9; // r14d
  FD_GLYPHSET *v10; // rax

  v3 = cChars;
  v4 = 0LL;
  if ( (unsigned int)cChars <= 0xFFFF )
  {
    if ( 3 * cChars )
    {
      v6 = Win32AllocPoolZInit((unsigned int)(3 * cChars), 1936484167LL);
      v7 = (void *)v6;
      if ( v6 )
      {
        v8 = v6 + 2 * v3;
        v9 = cUnicodeRangesSupported(nCodePage, (char *)(v6 + 2 * v3));
        v10 = (FD_GLYPHSET *)EngAllocMem(0, 4 * ((int)v3 + 4 + 4 * v9), 0x736C6747u);
        v4 = v10;
        if ( v10 )
          cComputeGlyphSet((_DWORD)v7, v8, v3, v9, (__int64)v10);
        Win32FreePool(v7);
      }
    }
  }
  return v4;
}
