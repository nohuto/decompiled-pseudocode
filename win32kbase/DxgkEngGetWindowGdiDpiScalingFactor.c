__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(__int64 a1)
{
  unsigned __int16 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)UserIsWindowGdiScaled(a1, &v2) )
    return (unsigned __int16)GreGetScaledLogPixels(v2) / 0x60u;
  else
    return 1LL;
}
