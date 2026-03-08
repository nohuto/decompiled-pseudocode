/*
 * XREFs of NtUserUnhookWindowsHook @ 0x1C01E0380
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00399AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01BCE2C (zzzUnhookWindowsHook.c)
 */

__int64 __fastcall NtUserUnhookWindowsHook(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v7; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)&v7, 5u, 0);
  v4 = (int)zzzUnhookWindowsHook(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
