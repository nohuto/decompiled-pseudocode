/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005FC4C
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C005F260 (NtDCompositionSynchronize.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C006A0C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D6894 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C024BB78 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C024BC04 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C024BCE4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0060A74 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this)
{
  if ( !*((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = DirectComposition::CApplicationChannel::GetBatchFragment(
                               this,
                               *((_DWORD *)this + 96) + 1,
                               0,
                               1);
}
