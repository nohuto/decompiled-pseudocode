/*
 * XREFs of IopLiveDumpUnLockPages @ 0x140559540
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140A99588 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
