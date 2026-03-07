__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( !v3[0] )
    return 1LL;
  CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return CachedDpiScaleValue;
}
