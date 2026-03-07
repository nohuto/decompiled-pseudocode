unsigned __int8 __fastcall IsValidGammaRamp(const struct _D3DKMDT_GAMMA_RAMP *a1)
{
  enum _D3DDDI_GAMMARAMP_TYPE Type; // ecx
  unsigned __int8 result; // al

  Type = a1->Type;
  if ( (unsigned int)(Type - 1) > 4 || a1->DataSize != GetSizeFromGammaRampType(Type) )
    return 0;
  result = 1;
  if ( (a1->Type != D3DDDI_GAMMARAMP_DEFAULT || a1->Data.pRgb256x3x16) && !a1->Data.pRgb256x3x16 )
    return 0;
  return result;
}
