/*
 * XREFs of ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78
 * Callers:
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0062280 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063350 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063848 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00639C4 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C00647D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C00648A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C006497C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A0F20 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5160 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D6894 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C024BB78 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C024BC04 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C024BCE4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C005DEB4 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

bool __fastcall DirectComposition::CBatch::GetPayloadWritePointer(
        DirectComposition::CBatchSharedMemoryPool **this,
        unsigned __int64 a2,
        void **a3)
{
  void *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  v4 = DirectComposition::CBatchSharedMemoryPool::UseSpace(this[17], a2);
  if ( v4 )
  {
    *(_QWORD *)(v5 + 152) += v6;
    *a3 = v4;
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}
