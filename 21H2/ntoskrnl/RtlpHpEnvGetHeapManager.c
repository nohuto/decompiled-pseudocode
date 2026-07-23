/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x140314164
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14022117C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140222330 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1402230E4 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140223290 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x140305A34 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x14037B678 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x140389C1C (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403CB264 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x140594C0C (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x140594D5C (RtlpHpSizeHeapInternal.c)
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
