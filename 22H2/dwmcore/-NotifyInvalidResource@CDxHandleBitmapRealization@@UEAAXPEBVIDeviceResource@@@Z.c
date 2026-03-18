/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B2DA0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1801225A0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x1801225C0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z @ 0x180122BC0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B359C (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18028B15C (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B615C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
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
