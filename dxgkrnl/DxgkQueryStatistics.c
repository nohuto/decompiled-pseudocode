/*
 * XREFs of DxgkQueryStatistics @ 0x1C02215C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 */

__int64 __fastcall DxgkQueryStatistics(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkQueryStatisticsInternal(a1, a2);
}
