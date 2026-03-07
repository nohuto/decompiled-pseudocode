float __fastcall ValidateSDRBoost(float a1, const struct PixelFormatInfo *a2)
{
  if ( IsDXGIColorSpaceHDR(*((_DWORD *)a2 + 2)) )
    return fmaxf(1.0, a1);
  else
    return 0.0;
}
