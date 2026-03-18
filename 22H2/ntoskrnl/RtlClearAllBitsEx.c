/*
 * XREFs of RtlClearAllBitsEx @ 0x14033CFF0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C61C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FA08 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A377EC (MiIdentifyPatchImageDataPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9B25C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
