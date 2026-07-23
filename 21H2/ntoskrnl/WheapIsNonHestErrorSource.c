/*
 * XREFs of WheapIsNonHestErrorSource @ 0x1403BB214
 * Callers:
 *     WheaAddErrorSource @ 0x1407AF4C0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapIsNonHestErrorSource(signed int a1)
{
  bool result; // al
  int v2; // eax

  result = 0;
  if ( a1 > 3 )
  {
    if ( (unsigned int)a1 > 0xB )
      return 1;
    v2 = 3776;
    if ( !_bittest(&v2, a1) )
      return 1;
  }
  return result;
}
