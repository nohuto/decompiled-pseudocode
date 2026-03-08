/*
 * XREFs of ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1800E9708
 * Callers:
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180049388 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8E38 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z @ 0x1800E9798 (-IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void ***__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return off_1803E0718;
  if ( CBitmapRenderStrategy::IsSupportedSurface(a1) )
    return &off_1803E0720;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 202LL) )
    return off_1803E0708;
  return (void ***)((unsigned __int64)off_1803E0710 & -(__int64)((*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(
                                                                   a1,
                                                                   129LL) != 0));
}
