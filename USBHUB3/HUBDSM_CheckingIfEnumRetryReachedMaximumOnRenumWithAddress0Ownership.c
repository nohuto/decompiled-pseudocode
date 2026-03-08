/*
 * XREFs of HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C0020900
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002EA10 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 */

__int64 __fastcall HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership(__int64 a1)
{
  return HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(*(_QWORD *)(a1 + 960));
}
