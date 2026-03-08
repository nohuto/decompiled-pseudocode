/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800354BC
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800351FC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E6F0 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x18011F3B0 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18011F8B0 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FBF0 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B16CC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this - 7);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0;
  }
  return v2;
}
