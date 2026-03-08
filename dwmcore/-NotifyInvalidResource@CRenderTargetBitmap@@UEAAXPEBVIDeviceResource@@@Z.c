/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADFC0
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18011E790 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResource@@@Z @ 0x18011F450 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z @ 0x18011F950 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x18011FC90 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003C8F4 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1802879DC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B29DC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  const struct IDeviceResource *v2; // rsi
  CRenderTargetBitmap *v3; // rdi

  v2 = 0LL;
  v3 = (CRenderTargetBitmap *)((char *)this - 160);
  if ( *((_BYTE *)this - 16) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 160), a2) )
  {
    (*(void (__fastcall **)(CRenderTargetBitmap *, const struct IDeviceResource *))(*(_QWORD *)v3 + 8LL))(v3, a2);
    if ( v3 )
      v2 = (CRenderTargetBitmap *)((char *)this + *(int *)(*((_QWORD *)this - 18) + 12LL) - 144);
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this - 80), v2);
    CRenderTargetBitmap::ReleaseDeviceTarget(v3);
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
