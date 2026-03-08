/*
 * XREFs of ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C02173F4
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C02172A4 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ConvertCoordinates @ 0x1C0217828 (ConvertCoordinates.c)
 */

__int64 __fastcall GetAdjustedHimetricWithoutRoundTripError(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  int *v12; // r10
  _DWORD *v13; // r10
  int v14; // r11d
  int v15; // eax
  LONG plResult; // [rsp+30h] [rbp-18h] BYREF
  LONG v18[5]; // [rsp+34h] [rbp-14h] BYREF

  plResult = 0;
  v18[0] = 0;
  *a8 = a6;
  if ( !a7 )
    return 1LL;
  if ( (unsigned int)ConvertCoordinates(0, a2 - a1, 0, a4 - a3, a7, &plResult) )
  {
    *v12 += plResult;
    if ( (unsigned int)ConvertCoordinates(a3, a4, a1, a2, *v12, v18) )
    {
      if ( v18[0] != v14 + a5 )
      {
        v15 = 1;
        if ( v14 <= 0 )
          v15 = -1;
        *v13 += v15;
      }
      return 1LL;
    }
  }
  return 0LL;
}
