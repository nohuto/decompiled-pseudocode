/*
 * XREFs of ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800354CC
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800352EC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180122840 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AUPixelFormatInfo@@XZ @ 0x180123500 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA?AUPixelFormatInfo@@XZ @ 0x1801239E0 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x180123D40 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B4E4C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = *(_QWORD *)(a1 - 80);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL));
    (**v4)(v4, a2);
  }
  else
  {
    *a2 = 0;
    a2[2] = 0;
    a2[1] = 3;
  }
  return a2;
}
