/*
 * XREFs of HUBHSM_InitializingResetCount @ 0x1C0008960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_InitializingResetCount(__int64 a1)
{
  *(_WORD *)(*(_QWORD *)(a1 + 960) + 52LL) = 0;
  return 2053LL;
}
