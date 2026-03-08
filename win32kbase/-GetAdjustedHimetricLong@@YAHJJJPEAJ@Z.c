/*
 * XREFs of ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C021738C
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C02172A4 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C00A7CFC (LongLongToLong.c)
 */

__int64 __fastcall GetAdjustedHimetricLong(int a1, int a2, int a3, int *a4)
{
  __int64 v4; // rbx
  LONG *v5; // r9
  int v6; // r11d
  unsigned int v7; // r10d

  if ( a3 && a1 && a2 )
  {
    v4 = a2;
    if ( LongLongToLong(a2 * (__int64)a3, a4) < 0 )
    {
      return 0LL;
    }
    else
    {
      LOBYTE(v7) = LongLongToLong(v4 + *v5 / v6, v5) >= 0;
      return v7;
    }
  }
  else
  {
    *a4 = a2;
    return 1LL;
  }
}
