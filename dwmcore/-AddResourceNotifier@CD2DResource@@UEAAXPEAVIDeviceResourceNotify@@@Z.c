/*
 * XREFs of ?AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F6F78
 * Callers:
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011ABD0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011BB90 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011BC90 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011BF70 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011C1B0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F4D0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

void __fastcall CD2DResource::AddResourceNotifier(CD2DResource *this, struct IDeviceResourceNotify *a2)
{
  _BYTE *v3; // rdx
  struct IDeviceResourceNotify *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this - 5);
  if ( v3 == *((_BYTE **)this - 4) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)this - 6,
      v3,
      &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this - 5) += 8LL;
  }
}
