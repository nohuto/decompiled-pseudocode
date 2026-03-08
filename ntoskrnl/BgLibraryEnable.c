/*
 * XREFs of BgLibraryEnable @ 0x14066F498
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x14054C830 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x1403843F4 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v4; // ebx

  if ( a2 )
    dword_140C0E3B0 |= 0xC00u;
  if ( !a1 )
    return (dword_140C0E3B0 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    v4 = BgpFwLibraryEnable(a1);
  else
    v4 = -1073741637;
  BgpFwReleaseLock();
  return v4;
}
