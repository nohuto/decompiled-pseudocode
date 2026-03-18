/*
 * XREFs of ??$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z @ 0x1800D16DC
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800D1578 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D16A0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18021C9A0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ @ 0x18029D250 (-ReleaseD2DResources@CD2DEffect@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID2D1Effect>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
