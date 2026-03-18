/*
 * XREFs of ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C000FA44
 * Callers:
 *     _lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator() @ 0x1C00103BC (_lambda_3837b0e11e5c1550d1f290a74bcd7a94_--operator().c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C000FAC4 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 */

char __fastcall MapFontFiles(unsigned int a1, struct _FONTFILEVIEW **a2, void **a3, unsigned int *a4)
{
  __int64 v4; // rbx
  struct _FONTFILEVIEW **i; // r15
  signed __int64 v11; // r14

  v4 = 0LL;
  if ( !a1 )
    return 1;
  for ( i = a2; (unsigned int)EngMapFontFileFDInternal(*i, &a3[v4], &a4[v4], 0LL); ++i )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= a1 )
      return 1;
  }
  if ( (_DWORD)v4 )
  {
    v11 = (char *)a2 - (char *)a3;
    do
    {
      EngUnmapFontFileFD(*(ULONG_PTR *)((char *)a3 + v11));
      *a3++ = 0LL;
      *a4++ = 0;
      --v4;
    }
    while ( v4 );
  }
  return 0;
}
