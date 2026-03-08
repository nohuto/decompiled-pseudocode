/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14079508C
 * Callers:
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140871E3C (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058B2F4 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
