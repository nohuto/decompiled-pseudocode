/*
 * XREFs of PREALLOCMEM2 @ 0x1C011D46C
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C0105F6C (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C029C874 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     vInitFontSubTable @ 0x1C0391C50 (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1C0391F80 (vInitFontMapperFamilyFallbackTable.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

char *__fastcall PREALLOCMEM2(void *Src, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  char *v7; // rax
  char *v8; // rdi

  v5 = a2;
  if ( !a3 )
    return 0LL;
  v7 = (char *)Win32AllocPool(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v5 >= a3 )
      v5 = a3;
    memmove(v7, Src, (unsigned int)v5);
    Win32FreePool(Src);
    memset(&v8[v5], 0, a3 - (unsigned int)v5);
  }
  return v8;
}
