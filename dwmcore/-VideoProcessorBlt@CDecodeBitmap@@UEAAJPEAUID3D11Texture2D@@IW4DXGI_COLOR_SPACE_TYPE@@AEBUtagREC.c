/*
 * XREFs of ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802B18B0
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800E716C (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802AE1C0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 */

__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    v10 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 120));
    }
  }
  return v8;
}
