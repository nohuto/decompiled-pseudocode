/*
 * XREFs of ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C00292B2
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C02B73F8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

void __fastcall DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 235);
  if ( v2 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v2 + 2920), a2);
}
