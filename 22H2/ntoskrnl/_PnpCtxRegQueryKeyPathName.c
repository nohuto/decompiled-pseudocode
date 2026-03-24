/*
 * XREFs of _PnpCtxRegQueryKeyPathName @ 0x1407A34D0
 * Callers:
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 * Callees:
 *     _RegRtlQueryKeyPathName @ 0x1407D1F88 (_RegRtlQueryKeyPathName.c)
 */

__int64 __fastcall PnpCtxRegQueryKeyPathName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RegRtlQueryKeyPathName(a2, a3, a4);
}
