/*
 * XREFs of ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C01150C4
 * Callers:
 *     _lambda_609c7463f0af8f0b222c22162fb8f533_::operator() @ 0x1C0118824 (_lambda_609c7463f0af8f0b222c22162fb8f533_--operator().c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 */

char __fastcall MapFontFiles(unsigned int a1, struct _FONTFILEVIEW **a2, void **a3, unsigned int *a4)
{
  __int64 v4; // rdi
  struct _FONTFILEVIEW **i; // r15
  __int64 v10; // rbp
  signed __int64 v12; // rsi

  v4 = 0LL;
  if ( !a1 )
    return 1;
  for ( i = a2; ; ++i )
  {
    v10 = (unsigned int)v4;
    if ( !(unsigned int)EngMapFontFileFDInternal(*i, &a3[v4], &a4[v4], 0LL) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= a1 )
      return 1;
  }
  if ( (_DWORD)v4 )
  {
    v12 = (char *)a2 - (char *)a3;
    do
    {
      EngUnmapFontFileFD(*(ULONG_PTR *)((char *)a3 + v12));
      *a3++ = 0LL;
      *a4++ = 0;
      --v10;
    }
    while ( v10 );
  }
  return 0;
}
