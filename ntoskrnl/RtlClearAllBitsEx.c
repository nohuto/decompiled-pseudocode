/*
 * XREFs of RtlClearAllBitsEx @ 0x1402D4520
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406A5890 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A34ABC (MiIdentifyPatchImageDataPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9811C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
