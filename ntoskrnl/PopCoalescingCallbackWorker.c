/*
 * XREFs of PopCoalescingCallbackWorker @ 0x140983F50
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058B2F4 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x14058B44C (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingCallbackWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  while ( 1 )
  {
    PopAcquirePolicyLock(a1);
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_9;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock(v5, v4, v6);
    v7 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v7);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock(v9, v8, v10);
    v7 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock(v2, v1, v3);
    v7 = 3;
    goto LABEL_8;
  }
LABEL_9:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock(v2, v1, v3);
}
