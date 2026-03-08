/*
 * XREFs of ?IsOfType@CCompositionSkyBoxBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180222980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSkyBoxBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x2F )
  {
    v2 = 0x810000020000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
