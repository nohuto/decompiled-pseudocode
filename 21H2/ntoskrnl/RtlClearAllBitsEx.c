/*
 * XREFs of RtlClearAllBitsEx @ 0x1402340F0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700460 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14093DA18 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1409739A4 (MiIdentifyPatchImageDataPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A666B0 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
