/*
 * XREFs of ?SetViewport@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUMilRectF@@@Z @ 0x1800D2A58
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D3A9C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetViewport(
        __int64 a1,
        __int128 *a2)
{
  _OWORD *v2; // r8
  __int64 *v3; // r9
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_OWORD *)(a1 + 104);
  v7 = *a2;
  if ( (unsigned __int8)operator!=(&v7, &v6, a2) )
  {
    v4 = *v3;
    *(_OWORD *)(v3 + 13) = *v2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 72))(v3, 0LL, 0LL);
  }
  return 0LL;
}
