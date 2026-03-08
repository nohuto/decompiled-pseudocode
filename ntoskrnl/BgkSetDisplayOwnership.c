/*
 * XREFs of BgkSetDisplayOwnership @ 0x1403A7EF0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(__int64 a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
