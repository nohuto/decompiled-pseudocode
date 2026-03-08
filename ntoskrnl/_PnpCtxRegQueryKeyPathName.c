/*
 * XREFs of _PnpCtxRegQueryKeyPathName @ 0x1408563D8
 * Callers:
 *     PipHardwareConfigInit @ 0x140B694FC (PipHardwareConfigInit.c)
 * Callees:
 *     _RegRtlQueryKeyPathName @ 0x14085E3CC (_RegRtlQueryKeyPathName.c)
 */

__int64 __fastcall PnpCtxRegQueryKeyPathName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RegRtlQueryKeyPathName(a2, a3, a4);
}
