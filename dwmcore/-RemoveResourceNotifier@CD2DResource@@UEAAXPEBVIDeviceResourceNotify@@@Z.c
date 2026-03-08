/*
 * XREFs of ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029318
 * Callers:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800F8DF0 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011AC90 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011BC70 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011BD70 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011C170 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011C450 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F690 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x1801BE6D4 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1801C2820 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceR.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CD2DResource::RemoveResourceNotifier(CD2DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **v4; // rcx
  const struct IDeviceResourceNotify **v6; // rdx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5);
  v4 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 6);
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
    *((_QWORD *)this - 5) -= 8LL;
  }
}
