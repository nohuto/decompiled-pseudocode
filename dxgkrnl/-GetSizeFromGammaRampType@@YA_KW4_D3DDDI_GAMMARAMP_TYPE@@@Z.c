unsigned __int64 __fastcall GetSizeFromGammaRampType(enum _D3DDDI_GAMMARAMP_TYPE a1)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r8d

  switch ( a1 )
  {
    case D3DDDI_GAMMARAMP_DEFAULT:
      return 0LL;
    case D3DDDI_GAMMARAMP_RGB256x3x16:
      return 1536LL;
    case D3DDDI_GAMMARAMP_DXGI_1:
      return 12324LL;
    case D3DDDI_GAMMARAMP_MATRIX_3x4:
      return 49204LL;
  }
  if ( a1 != (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    v2 = a1;
    WdLogSingleEntry1(2LL, a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v3,
          v4,
          0,
          0,
          -1,
          (__int64)L"Invalide GAMMA Ramp type 0x%I64x.",
          v2,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 0LL;
  }
  return 98352LL;
}
