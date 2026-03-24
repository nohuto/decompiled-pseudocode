/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EB28
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002660 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003260 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004A10 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C00050F0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0059010 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C005B4E0 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionGetDeletedResources @ 0x1C005B710 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C005B8D0 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionSynchronize @ 0x1C005E960 (NtDCompositionSynchronize.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C009F5B0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionWaitForChannel @ 0x1C009FBB0 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C00A0420 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00A0E50 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C00A2450 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C00A2550 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionSetDebugCounter @ 0x1C00AC8D0 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSuspendAnimations @ 0x1C01D2A20 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C01D2D30 (NtVisualCaptureBits.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D4EEC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C01D4F6C (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005FC94 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
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
