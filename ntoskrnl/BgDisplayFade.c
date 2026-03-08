/*
 * XREFs of BgDisplayFade @ 0x140AEC4BC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x14054C9A4 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140AEDF70 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
