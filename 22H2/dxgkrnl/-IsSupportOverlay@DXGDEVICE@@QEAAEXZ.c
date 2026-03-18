/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00550FC
 * Callers:
 *     DxgkCreateOverlay @ 0x1C03357F0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0335FB0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C03365D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0336BB0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0337280 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 (__fastcall **v3)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 235)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && v3[87] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[95] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[94] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[93] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}
