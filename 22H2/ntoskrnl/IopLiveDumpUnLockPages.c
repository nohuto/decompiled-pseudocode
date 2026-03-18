/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14055B9E0
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140A9C6C8 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
