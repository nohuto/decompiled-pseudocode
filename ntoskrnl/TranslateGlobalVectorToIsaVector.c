/*
 * XREFs of TranslateGlobalVectorToIsaVector @ 0x1408424F4
 * Callers:
 *     HalacpiIrqTranslateResourcesIsa @ 0x1408421E0 (HalacpiIrqTranslateResourcesIsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateGlobalVectorToIsaVector(int a1, _DWORD *a2)
{
  unsigned __int8 v2; // r8

  v2 = 0;
  while ( *((_DWORD *)HalpPicVectorRedirect + v2) != a1 )
  {
    if ( ++v2 >= 0x10u )
      return 3221226021LL;
  }
  *a2 = v2;
  return 0LL;
}
