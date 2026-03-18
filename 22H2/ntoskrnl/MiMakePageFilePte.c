/*
 * XREFs of MiMakePageFilePte @ 0x14064E2C0
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A433FC (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
