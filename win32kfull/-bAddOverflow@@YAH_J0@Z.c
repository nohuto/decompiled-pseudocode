/*
 * XREFs of ?bAddOverflow@@YAH_J0@Z @ 0x1C02FFEC8
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02FFF14 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bAddOverflow(signed __int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) >= 0 )
  {
    if ( a2 >= 0 )
      return 0x7FFFFFFFFFFFFFFFLL - a1 < a2;
    if ( a1 < (__int64)(0x8000000000000000uLL - a2) )
      return 1;
  }
  return 0;
}
