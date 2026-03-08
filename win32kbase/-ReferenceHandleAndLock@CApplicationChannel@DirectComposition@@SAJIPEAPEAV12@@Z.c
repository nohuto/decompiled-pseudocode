/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00075F8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0007780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x1C000A0F0 (NtDCompositionGetFrameIdFromBatchId.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C000B338 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionSuspendAnimations @ 0x1C000D290 (NtDCompositionSuspendAnimations.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C005BFE0 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C005C6F0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionGetDeletedResources @ 0x1C005C7B0 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C005D530 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionSynchronize @ 0x1C005F260 (NtDCompositionSynchronize.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C00BF290 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionWaitForChannel @ 0x1C00BF880 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00C0F70 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetDebugCounter @ 0x1C00C8D00 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x1C02487F0 (NtDCompositionNotifySuperWetInkWork.c)
 *     NtVisualCaptureBits @ 0x1C0248C20 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F398 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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
