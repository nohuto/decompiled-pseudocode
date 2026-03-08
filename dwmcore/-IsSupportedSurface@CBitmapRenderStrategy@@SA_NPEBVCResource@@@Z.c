/*
 * XREFs of ?IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z @ 0x1800E9798
 * Callers:
 *     ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1800E9708 (-FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRenderStrategy::IsSupportedSurface(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 42LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 13LL) )
  {
    return 1;
  }
  return v2;
}
