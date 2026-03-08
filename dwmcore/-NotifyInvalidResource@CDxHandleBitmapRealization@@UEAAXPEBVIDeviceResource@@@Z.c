/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF620
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18011E3F0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x18011E410 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z @ 0x18011EA10 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AFE1C (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1802879DC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B29DC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rsi
  const struct IDeviceResource *v4; // rbx

  v2 = (char *)this - 408;
  v4 = 0LL;
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleBitmapRealization *)((char *)this - 408), a2) )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL))(v2);
    if ( v2 )
      v4 = (CDxHandleBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 49) + 20LL) - 392);
    CDeviceResource::NotifyInvalid((CDxHandleBitmapRealization *)((char *)this - 88), v4);
  }
}
