/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0012424
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C0010400 (NtDCompositionSynchronize.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014810 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D2934 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02153B0 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0215428 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02154E8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this)
{
  if ( !*((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = DirectComposition::CApplicationChannel::GetBatchFragment(this, 0, 1);
}
