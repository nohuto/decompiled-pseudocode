/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00476D0
 * Callers:
 *     DxgkCreateOverlay @ 0x1C027B390 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C027BA20 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C027BFC0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027C480 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027CA80 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 (__fastcall **v3)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 231)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && v3[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[84] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[83] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[82] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}
