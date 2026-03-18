/*
 * XREFs of GreClientRgnUpdatedStable @ 0x1C0049624
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 GreClientRgnUpdatedStable()
{
  GreAcquireSemaphore(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness, 10LL);
  giVisRgnUniquenessStable = giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  return GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
}
