/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029360
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029308 (-RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011AB70 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011AB90 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011ABB0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011B450 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011B9D0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011BF10 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011CA70 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011D130 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011D510 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011E4B0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011E4D0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011EA70 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F1D0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(CDeviceResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **v4; // rcx
  const struct IDeviceResourceNotify **v6; // rdx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 4);
  v4 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this - 4) -= 8LL;
  }
}
