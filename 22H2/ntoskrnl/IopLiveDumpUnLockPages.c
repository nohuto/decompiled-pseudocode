/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14050A218
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409AD728 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
