/*
 * XREFs of ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800BA254
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800B5B04 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BAC20 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800BA294 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 */

void __fastcall CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        CCompositionSurfaceInfo *this,
        struct ICompositionSurfaceInfoListener *a2)
{
  struct ICompositionSurfaceInfoListener **i; // rdx

  for ( i = (struct ICompositionSurfaceInfoListener **)*((_QWORD *)this + 8);
        i != *((struct ICompositionSurfaceInfoListener ***)this + 9);
        ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 64,
        ((__int64)i - *((_QWORD *)this + 8)) >> 3);
      return;
    }
  }
}
