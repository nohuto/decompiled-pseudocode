/*
 * XREFs of ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800EBBB0
 * Callers:
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800EBB50 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall CCachedVisualImage::CalcOcclusion(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rsi
  gsl::details **v6; // rax
  gsl::details *v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1 + 27;
  v5 = 0LL;
  if ( COcclusionContext::IsCurrent((COcclusionContext *)(a1 + 27))
    && (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1) == a1[28] )
  {
    return v2;
  }
  v6 = (gsl::details **)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1);
  v7 = *v6;
  v9[0] = 1LL;
  v9[1] = a2;
  if ( !a2 )
  {
    gsl::details::terminate(v7);
    JUMPOUT(0x1800EBC8DLL);
  }
  if ( (*((int (__fastcall **)(gsl::details **, _QWORD *, _QWORD *))v7 + 25))(v6, v9, v2) >= 0 )
    return v2;
  return (_QWORD *)v5;
}
