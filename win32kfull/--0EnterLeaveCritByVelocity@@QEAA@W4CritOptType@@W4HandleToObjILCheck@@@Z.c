/*
 * XREFs of ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00399AC
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00397B0 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C00D23D0 (NtUserUnhookWinEvent.c)
 *     NtUserBuildPropList @ 0x1C0102310 (NtUserBuildPropList.c)
 *     NtUserCallMsgFilter @ 0x1C01471C0 (NtUserCallMsgFilter.c)
 *     NtUserUnhookWindowsHook @ 0x1C01E0380 (NtUserUnhookWindowsHook.c)
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
