/*
 * XREFs of ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00E6220
 * Callers:
 *     NtUserBuildPropList @ 0x1C00E56A0 (NtUserBuildPropList.c)
 *     NtUserUnhookWinEvent @ 0x1C00E5900 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00E5B40 (NtUserSetWinEventHook.c)
 *     NtUserCallMsgFilter @ 0x1C013EA70 (NtUserCallMsgFilter.c)
 *     NtUserUnhookWindowsHook @ 0x1C01FFE70 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (unsigned __int8)ShouldRunShared(a2) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, a3);
  return a1;
}
