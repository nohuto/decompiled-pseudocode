/*
 * XREFs of ?VideoProcessorBlt@CStereoRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802B2900
 * Callers:
 *     ?VideoProcessorBlt@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x18011FA70 (-VideoProcessorBlt@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJPEAUID3D11Texture2D@@IW4DXGI_COL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStereoRenderTargetBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  return CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
}
