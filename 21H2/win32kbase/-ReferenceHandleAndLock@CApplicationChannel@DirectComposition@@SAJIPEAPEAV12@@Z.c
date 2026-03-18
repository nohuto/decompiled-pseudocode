/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002580 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0002AF8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0005DFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00076D0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C00088F0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0008CF0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0008DF0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0009560 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C00097F0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C000BA00 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionGetDeletedResources @ 0x1C000DE60 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionSynchronize @ 0x1C0010400 (NtDCompositionSynchronize.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0084460 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C00AFA10 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00B1700 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C00B3850 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionWaitForChannel @ 0x1C00B3D10 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSetDebugCounter @ 0x1C00BFF50 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x1C0211C80 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x1C0211DB0 (NtDCompositionNotifySuperWetInkWork.c)
 *     NtDCompositionSuspendAnimations @ 0x1C0212150 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C02125D0 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00102CC (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
