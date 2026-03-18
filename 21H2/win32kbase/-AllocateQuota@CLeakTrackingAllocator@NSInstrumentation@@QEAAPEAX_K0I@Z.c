/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874
 * Callers:
 *     ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C0006F94 (-AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00080A4 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0008EEC (-AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJPEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x1C0008FA8 (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 *     ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0009748 (-AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C00097F0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     DirectComposition::Memory::Allocate @ 0x1C0085484 (DirectComposition--Memory--Allocate.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0085808 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0085F60 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8E90 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00AD680 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00AF298 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AFB90 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00B5220 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     DirectComposition::Memory::Allocate_1 @ 0x1C00EA21C (DirectComposition--Memory--Allocate_1.c)
 *     Win32UAFMAllocPoolWithQuota @ 0x1C0167430 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C0167490 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C0214978 (-EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0214D9C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C0216080 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02180E0 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C021B4A4 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021E550 (-SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0230160 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0234390 (-SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0237B30 (-SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C002FE1C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  PVOID v4; // rsi
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  char v9; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = gpLeakTrackingAllocator;
  v7 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          a4) )
    return ExAllocatePool2(v6 | 3, v5);
  v9 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v9 = 1;
    v5 += 16LL;
  }
  Pool2 = ExAllocatePool2(v6 | 3, v5);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v4,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v4,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v7;
}
