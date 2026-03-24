/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x140309414
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1402A3D3C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402A4EF0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1402A5CA4 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402A5E50 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeVA @ 0x1402FA770 (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x1402FACE4 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrCommit @ 0x14030A610 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x14030AD50 (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapCreate @ 0x14037AF24 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x14037BB28 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x140389ACC (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403CB0F4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405949DC (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x140594B2C (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
  else
    return &ExPoolState;
}
