/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C
 * Callers:
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C000A870 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C001400C (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014E40 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D2934 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02153B0 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0215428 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02154E8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C0013A44 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        bool a3,
        const struct DirectComposition::SynchronizationObject *a4)
{
  bool v8; // si
  struct DirectComposition::CBatch *v10; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CBatch *v11; // [rsp+38h] [rbp-10h] BYREF

  do
  {
    v10 = 0LL;
    v11 = 0LL;
    v8 = DirectComposition::CApplicationChannel::BuildBatch(this, &v10, &v11, a3);
    if ( v10 )
      DirectComposition::CApplicationChannel::SubmitBatch(this, v10, v11, *((_BYTE *)this + 48) & 1, a4);
  }
  while ( !v8 );
  if ( a2 )
    *a2 = *((_DWORD *)this + 129) != 0;
  return 0LL;
}
