/*
 * XREFs of DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C00EF2D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C003E220 (UserIsWindowGdiScaled.c)
 *     GreGetScaledLogPixels @ 0x1C0199A00 (GreGetScaledLogPixels.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(__int64 a1)
{
  unsigned __int16 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)UserIsWindowGdiScaled(a1, &v2) )
    return (unsigned __int16)GreGetScaledLogPixels(v2) / 0x60u;
  else
    return 1LL;
}
