/*
 * XREFs of RtlClearAllBitsEx @ 0x14023FAF0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409AD1BC (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
