/*
 * XREFs of ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180109ACC
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801EDD64 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2, char a3)
{
  int *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  if ( !a3 )
  {
    v8 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 224), a2, (float *)&v8);
    a2 = (struct MilRectF *)&v8;
  }
  v4 = PixelAlign(v9, (float *)a2);
  v5 = *(_QWORD *)(a1 + 176);
  v7 = *(_OWORD *)v4;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 16LL))(v5, &v7);
  *(_BYTE *)(a1 + 392) = 1;
  return result;
}
