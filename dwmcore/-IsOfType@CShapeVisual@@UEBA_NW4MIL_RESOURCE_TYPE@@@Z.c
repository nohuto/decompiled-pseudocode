/*
 * XREFs of ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DC220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeVisual::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  result = 1;
  if ( a2 != 196 )
  {
    v2 = (unsigned int)(a2 - 114);
    if ( (unsigned int)v2 > 0x36 )
      return 0;
    v3 = 0x40000000100001LL;
    if ( !_bittest64(&v3, v2) )
      return 0;
  }
  return result;
}
