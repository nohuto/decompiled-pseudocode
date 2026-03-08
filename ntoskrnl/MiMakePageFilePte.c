/*
 * XREFs of MiMakePageFilePte @ 0x14064BCA4
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A4071C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
