/*
 * XREFs of NtUserRemoveQueueCompletion @ 0x1C01FC0D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 */

__int64 NtUserRemoveQueueCompletion()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxRemoveQueueCompletion();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
