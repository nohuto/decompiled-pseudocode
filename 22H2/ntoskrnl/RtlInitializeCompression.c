/*
 * XREFs of RtlInitializeCompression @ 0x140585324
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A170 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 RtlInitializeCompression()
{
  return ExInitializeNPagedLookasideListInternal(
           (__int64)&RtlLznt1DecompressChunkLookaside,
           0LL,
           0LL,
           512,
           88,
           1667529324,
           0,
           0);
}
