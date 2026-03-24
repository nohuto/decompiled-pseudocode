/*
 * XREFs of MiMakePageFilePte @ 0x14034FF48
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406FAE00 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
