/*
 * XREFs of ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801847A8
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180091458 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018489C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180184BC8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077744 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801843D4 (-DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 */

__int64 __fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, float *a2, char a3)
{
  int v4; // eax
  __int64 v5; // r8
  float v6; // xmm0_4
  int v7; // edx
  int v8; // eax
  __int64 v9; // r8
  float v10; // xmm0_4
  int v11; // eax
  __int64 v12; // r8
  float v13; // xmm0_4
  int v14; // edx
  __int64 v15; // rcx
  __int128 *v16; // rdx
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v18 = 0LL;
    if ( a3 )
    {
      CLegacyRenderTarget::DesktopRectToRenderTargetRect(a1, (__int64)a2, (__int64)a2, &v18);
    }
    else
    {
      v4 = PixelAlign(*a2, 0);
      v6 = *(float *)(v5 + 4);
      LODWORD(v18) = v4;
      v8 = PixelAlign(v6, v7);
      v10 = *(float *)(v9 + 8);
      DWORD1(v18) = v8;
      v11 = PixelAlign(v10, 1);
      v13 = *(float *)(v12 + 12);
      DWORD2(v18) = v11;
      HIDWORD(v18) = PixelAlign(v13, v14);
    }
    v15 = *(_QWORD *)(a1 + 160);
    v16 = &v18;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 160);
    v16 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 16LL))(v15, v16);
  *(_BYTE *)(a1 + 18586) = 1;
  return result;
}
