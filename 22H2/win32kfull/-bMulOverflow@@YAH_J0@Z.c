/*
 * XREFs of ?bMulOverflow@@YAH_J0@Z @ 0x1C02D6808
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D54FC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMulOverflow(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = a2;
  if ( a1 && a2 )
  {
    if ( (a2 ^ a1) >= 0 )
    {
      if ( a1 <= 0 )
      {
        if ( a1 == 0x8000000000000000uLL || a2 == 0x8000000000000000uLL )
          return 1LL;
        v4 = 0x8000000000000001uLL;
        v2 = -a2;
      }
      else
      {
        v4 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v3 = v4 / a1 < v2;
    }
    else if ( a1 >= 0 )
    {
      v3 = a2 < (__int64)0x8000000000000000uLL / a1;
    }
    else
    {
      v3 = a1 < (__int64)0x8000000000000000uLL / a2;
    }
    if ( v3 )
      return 1LL;
  }
  return 0LL;
}
