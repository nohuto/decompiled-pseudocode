/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180090B90
 * Callers:
 *     ?Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011EE20 (-Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ @ 0x18011F5E0 (-Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x18011FE00 (-Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ @ 0x18011FF00 (-Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x1801218C0 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x180121EA0 (-Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x180121EC0 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBFA@EAAKXZ @ 0x180121EE0 (-Release@CSectionBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x180121F00 (-Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x180121FC0 (-Release@CWICBitmapRealization@@WGA@EAAKXZ.c)
 *     ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x180121FE0 (-Release@CColorKeyBitmapRealization@@WIA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ @ 0x180122140 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WHI@EAAKXZ @ 0x180122700 (-Release@CWICBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ @ 0x180122C00 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x180123B40 (-Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
