/*
 * XREFs of UserGetDelayedSwitchAction @ 0x1C014F480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetDelayedSwitchAction(__int64 a1)
{
  return *(unsigned int *)(SGDGetUserGdiSessionState(a1) + 16);
}
