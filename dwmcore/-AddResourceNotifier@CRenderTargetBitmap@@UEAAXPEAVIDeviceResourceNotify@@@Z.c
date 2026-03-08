/*
 * XREFs of ?AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F8360
 * Callers:
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011E5D0 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F290 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F710 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011FAD0 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

void __fastcall CRenderTargetBitmap::AddResourceNotifier(CRenderTargetBitmap *this, struct IDeviceResourceNotify *a2)
{
  _BYTE *v3; // rdx
  struct IDeviceResourceNotify *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this - 11);
  if ( v3 == *((_BYTE **)this - 10) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)this - 12,
      v3,
      &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this - 11) += 8LL;
  }
}
