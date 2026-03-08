/*
 * XREFs of QDIV @ 0x1C02FFE00
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02FFF14 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QDIV(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9
  char v6; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = *a2;
  v4 = 0LL;
  if ( (*a2 & 0x8000000000000000uLL) == 0LL )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v3 = -(__int64)v3;
  }
  *a1 = v3 / a3;
  result = v3 / a3;
  v8 = v3 % a3;
  if ( v6 )
  {
    v9 = -(__int64)(v3 / a3);
    *a1 = v9;
    if ( v8 )
    {
      result = v9 - 1;
      *a1 = v9 - 1;
      v4 = a3 - v8;
    }
  }
  else
  {
    v4 = v3 % a3;
  }
  a1[1] = v4;
  return result;
}
