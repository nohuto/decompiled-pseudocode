/*
 * XREFs of ACPIMarkPagingPathPowerNodeEnum @ 0x1C0001960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIMarkPagingPathPowerNodeEnum(__int64 a1)
{
  _InterlockedOr64((volatile signed __int64 *)(a1 + 16), 0x40000uLL);
  return 0LL;
}
