/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1407E47EC
 * Callers:
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140874CFC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058D824 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
