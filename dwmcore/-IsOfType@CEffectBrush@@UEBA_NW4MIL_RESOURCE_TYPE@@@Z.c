/*
 * XREFs of ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DB1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x39 )
  {
    v2 = 0x200800000020000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
