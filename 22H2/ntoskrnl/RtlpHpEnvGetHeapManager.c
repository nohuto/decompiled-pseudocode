/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x140289A94
 * Callers:
 *     RtlpHpFreeVA @ 0x14027ADF0 (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x14027B364 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrCommit @ 0x14028AC90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x14028B3D0 (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402C2790 (RtlpHpFreeHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402FC658 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402FD80C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1402FE5C0 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402FE76C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpHeapCreate @ 0x14037A994 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x14037B598 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x1403893CC (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403CA9F4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14059491C (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x140594A6C (RtlpHpSizeHeapInternal.c)
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
