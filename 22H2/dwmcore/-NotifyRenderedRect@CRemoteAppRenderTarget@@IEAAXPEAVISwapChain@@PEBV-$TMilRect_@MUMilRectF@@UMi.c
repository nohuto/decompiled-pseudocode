/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801861E4
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186994 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077744 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    v9 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 184), a3, (float *)&v9);
    v10[0] = PixelAlign(*(float *)&v9, 0);
    v10[1] = PixelAlign(*((float *)&v9 + 1), v4);
    v10[2] = PixelAlign(*((float *)&v9 + 2), 1);
    v10[3] = PixelAlign(*((float *)&v9 + 3), v5);
    v6 = v10;
    v7 = *a2;
  }
  else
  {
    v7 = *a2;
    v6 = 0LL;
  }
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v7 + 16))(a2, v6);
}
