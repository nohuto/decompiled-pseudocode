/*
 * XREFs of NtUserRemoveQueueCompletion @ 0x1C01D9E70
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C006A534 (xxxRemoveQueueCompletion.c)
 */

__int64 NtUserRemoveQueueCompletion()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxRemoveQueueCompletion();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
