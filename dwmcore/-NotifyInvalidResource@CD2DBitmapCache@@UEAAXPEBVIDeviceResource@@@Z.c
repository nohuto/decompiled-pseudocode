/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ACBC0
 * Callers:
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18011DC10 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z @ 0x18011DC30 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z @ 0x18011DC50 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@PA@EAAXPEBVIDeviceResource@@@Z @ 0x18011DC70 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@PA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x18011DDB0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BHI@EAAXPEBVIDeviceResource@@@Z @ 0x18011DF70 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BHI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z @ 0x18011E510 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CD2DBitmapCache *)((char *)this - 88), a2);
}
