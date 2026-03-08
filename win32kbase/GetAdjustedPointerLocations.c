/*
 * XREFs of GetAdjustedPointerLocations @ 0x1C00F4070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C02172A4 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C0217910 (GetAdjustedPointerPixelLocation.c)
 */

__int64 __fastcall GetAdjustedPointerLocations(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        __int64 a6,
        struct tagPOINT *a7,
        __int64 a8,
        struct tagPOINT *a9,
        struct tagHID_POINTER_DEVICE_INFO *a10)
{
  unsigned int v13; // r14d

  v13 = 0;
  if ( !(unsigned int)GetAdjustedHimetric(a1, a2, a5, a7, a10)
    || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetAdjustedPointerPixelLocation)(a1, a5, a6)
    || !(unsigned int)GetAdjustedHimetric(a3, a4, a5, a9, a10) )
  {
    return 0LL;
  }
  LOBYTE(v13) = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetAdjustedPointerPixelLocation)(
                                a3,
                                a5,
                                a8) != 0;
  return v13;
}
