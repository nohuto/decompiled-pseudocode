/*
 * XREFs of BgLibraryDisable @ 0x140AEC480
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
