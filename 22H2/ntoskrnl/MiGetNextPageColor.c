/*
 * XREFs of MiGetNextPageColor @ 0x1402922AC
 * Callers:
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407063D4 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140A4A01C (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
