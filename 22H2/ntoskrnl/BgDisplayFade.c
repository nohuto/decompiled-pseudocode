/*
 * XREFs of BgDisplayFade @ 0x140AF020C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x14054EE44 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140AF1F70 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
