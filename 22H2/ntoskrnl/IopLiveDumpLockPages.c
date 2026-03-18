/*
 * XREFs of IopLiveDumpLockPages @ 0x14094EB00
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140A9AF70 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
