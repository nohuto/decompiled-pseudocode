/*
 * XREFs of ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1801E9ECC
 * Callers:
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BBI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C720 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BBI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@GI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C740 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@GI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@MI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C760 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@MI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011D640 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EBA?AVRenderTargetInfo@@XZ @ 0x18011D860 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@DI@EBA?AVRenderTargetInfo@@XZ @ 0x18011E560 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@DI@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800CEB6C (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetRenderTargetInfo(CDisplayManager *a1, __int64 a2)
{
  CDisplayManager::GetPrimaryAdapterLuid(a1, (struct _LUID *)a2);
  *(_DWORD *)(a2 + 8) = DisplayId::None;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  return a2;
}
