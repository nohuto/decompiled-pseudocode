/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0025208
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0330DB0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0331570 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0331B90 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0332170 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0332840 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 856), 0);
  return this;
}
