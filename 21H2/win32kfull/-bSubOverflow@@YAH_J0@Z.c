/*
 * XREFs of ?bSubOverflow@@YAH_J0@Z @ 0x1C02D8154
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D613C (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSubOverflow(__int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) >= 0 )
    return 0LL;
  if ( a1 < 0 )
  {
    if ( a1 >= (__int64)(a2 + 0x8000000000000000uLL) )
      return 0LL;
  }
  else if ( a1 <= a2 + 0x7FFFFFFFFFFFFFFFLL )
  {
    return 0LL;
  }
  return 1LL;
}
