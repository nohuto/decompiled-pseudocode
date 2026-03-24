/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C00A3E38
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00A37E0 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int16 *v4; // rax
  const UNICODE_STRING *v6; // rdi
  int v7; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !gcwcFontsDirectory )
    return 0LL;
  v2 = gcwcFontsDirectory - 1;
  v3 = (unsigned int)v2;
  if ( a2 - (int)v2 < 8 )
    return 0LL;
  v4 = *(unsigned __int16 **)&a1[v2];
  if ( v4 == gMSYHFontFileNamePrefix )
  {
    v6 = &gMSYHFontFileNameSuffixes;
  }
  else
  {
    if ( v4 != gSimsunFontFileNamePrefix )
      return 0LL;
    v6 = (const UNICODE_STRING *)&unk_1C02E00B0;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v3 + 4]);
  v7 = 0;
  while ( !RtlEqualUnicodeString(&DestinationString, v6, 0) )
  {
    ++v6;
    if ( (unsigned int)++v7 >= 3 )
    {
      v7 = -1;
      break;
    }
  }
  return v7 >= 0;
}
