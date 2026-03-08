/*
 * XREFs of BvgaNotifyDisplayOwnershipChange @ 0x14054CF60
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BvgaAcquireDisplayOwnership @ 0x14054CCF0 (BvgaAcquireDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054CFC0 (BvgaNotifyDisplayOwnershipLost.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  if ( a1 )
  {
    if ( BvgaDisplayState )
      BvgaAcquireDisplayOwnership();
  }
  else if ( BvgaDisplayState != 2 )
  {
    BvgaNotifyDisplayOwnershipLost(0LL);
  }
  BgkNotifyDisplayOwnershipChange(a1, a2);
  return 0LL;
}
