/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029308
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011E7D0 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F490 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F9B0 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011FCF0 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::RemoveResourceNotifier(
        CRenderTargetBitmap *this,
        const struct IDeviceResourceNotify *a2)
{
  CDeviceResource::RemoveResourceNotifier((CRenderTargetBitmap *)((char *)this - 56), a2);
}
