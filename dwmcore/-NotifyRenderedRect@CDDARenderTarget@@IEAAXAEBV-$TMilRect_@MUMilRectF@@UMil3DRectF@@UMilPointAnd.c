/*
 * XREFs of ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F635C
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDARenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 248), a2, (float *)&v4);
  PixelAlign(v5, (float *)&v4);
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 160) + 16LL))(*(_QWORD *)(a1 + 160), v5);
  *(_BYTE *)(a1 + 2080) = 1;
  return result;
}
