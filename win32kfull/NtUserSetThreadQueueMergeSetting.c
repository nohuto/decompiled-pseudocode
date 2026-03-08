/*
 * XREFs of NtUserSetThreadQueueMergeSetting @ 0x1C01DE000
 * Callers:
 *     <none>
 * Callees:
 *     _SetThreadQueueMergeSetting @ 0x1C01E4940 (_SetThreadQueueMergeSetting.c)
 */

__int64 __fastcall NtUserSetThreadQueueMergeSetting(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)SetThreadQueueMergeSetting(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
