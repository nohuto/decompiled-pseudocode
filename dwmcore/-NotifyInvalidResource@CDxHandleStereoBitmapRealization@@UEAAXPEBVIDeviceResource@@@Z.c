/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AFE1C
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18011EC90 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@.c)
 * Callees:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF620 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B29DC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CDxHandleStereoBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleBitmapRealization *v2; // rdi

  v2 = (CDxHandleStereoBitmapRealization *)((char *)this - 104);
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleStereoBitmapRealization *)((char *)this - 104), a2) )
    CDxHandleBitmapRealization::NotifyInvalidResource(v2, a2);
}
