/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14069FE70
 * Callers:
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x14069FDFC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14056E9B8 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
