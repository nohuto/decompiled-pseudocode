/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x1800909C0
 * Callers:
 *     ?Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011AC70 (-Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ @ 0x18011B430 (-Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x18011BC50 (-Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ @ 0x18011BD50 (-Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x18011D710 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18011DCF0 (-Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x18011DD10 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBFA@EAAKXZ @ 0x18011DD30 (-Release@CSectionBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x18011DD50 (-Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x18011DE10 (-Release@CWICBitmapRealization@@WGA@EAAKXZ.c)
 *     ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x18011DE30 (-Release@CColorKeyBitmapRealization@@WIA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ @ 0x18011DF90 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WHI@EAAKXZ @ 0x18011E550 (-Release@CWICBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ @ 0x18011EA50 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x18011F990 (-Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
