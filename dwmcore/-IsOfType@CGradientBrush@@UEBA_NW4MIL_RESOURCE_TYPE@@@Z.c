/*
 * XREFs of ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C23E4
 * Callers:
 *     ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C2560 (-IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 17);
  result = 0;
  if ( (unsigned int)v2 <= 0x38 )
  {
    v3 = 0x100000040000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
