/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x140362B58
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrCommit @ 0x140351880 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x140351E90 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140362714 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 *     RtlpHpSegSegmentAllocate @ 0x1403633A0 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpFreeVA @ 0x140363E50 (RtlpHpFreeVA.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140366CB0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegSegmentFree @ 0x14036808C (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x14036F520 (RtlpHpMetadataCommit.c)
 *     RtlpHpHeapCreate @ 0x14036F620 (RtlpHpHeapCreate.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140371398 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpRegisterEnvironment @ 0x140371C50 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpExtrasSetPresent @ 0x1405F2F80 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405F30C0 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608);
  else
    return &ExPoolState;
}
