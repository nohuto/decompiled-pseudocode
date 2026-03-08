/*
 * XREFs of ?IsOfType@CBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F0CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x2F )
  {
    v2 = 0x800000020200LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
