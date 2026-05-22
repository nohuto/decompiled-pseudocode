/*
 * XREFs of ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x1801165D8
 * Callers:
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x180113568 (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 * Callees:
 *     memcpy_s_1 @ 0x18011A468 (memcpy_s_1.c)
 */

__int64 __fastcall InitPropVariantFromString(const unsigned __int16 *Source, struct tagPROPVARIANT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  void *v7; // rax

  v2 = 0;
  if ( !Source )
  {
    v2 = -2147024809;
LABEL_8:
    *(_OWORD *)&a2->vt = 0LL;
    a2->bstrblobVal.pData = 0LL;
    return v2;
  }
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  v6 = 2 * v5 + 2;
  v7 = CoTaskMemAlloc(v6);
  a2->hVal.QuadPart = (LONGLONG)v7;
  if ( !v7 )
  {
    v2 = -2147024882;
    goto LABEL_8;
  }
  memcpy_s_1(v7, v6, Source, v6);
  a2->vt = 31;
  return v2;
}
