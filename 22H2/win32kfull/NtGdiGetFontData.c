/*
 * XREFs of NtGdiGetFontData @ 0x1C009B410
 * Callers:
 *     <none>
 * Callees:
 *     ulGetFontData @ 0x1C009B358 (ulGetFontData.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  _BYTE *v9; // rdi
  unsigned int FontData; // ebx
  char *v11; // rdx

  v9 = 0LL;
  FontData = -1;
  if ( a5 )
  {
    if ( a5 <= 0x2710000 )
      v9 = (_BYTE *)AllocFreeTmpBuffer(a5);
    if ( v9 )
    {
      FontData = ulGetFontData(a1, a2, a3, v9, a5);
      if ( FontData != -1 )
      {
        if ( FontData > a5 )
          FontData = -1;
        if ( FontData != -1 )
        {
          v11 = &a4[FontData];
          if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v9, FontData);
        }
      }
      FreeTmpBuffer(v9);
    }
  }
  else
  {
    return (unsigned int)ulGetFontData(a1, a2, a3, 0LL, 0);
  }
  return FontData;
}
