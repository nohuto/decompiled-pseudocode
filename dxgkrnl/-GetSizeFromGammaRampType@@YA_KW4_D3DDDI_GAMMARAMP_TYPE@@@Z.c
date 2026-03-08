/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0004A10
 * Callers:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0004974 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0069D88 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

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
