/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C
 * Callers:
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x1C000EF90 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00EB814 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C02200D8 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0220A24 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C009BA28 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C00E2134 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C02206CC (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(void *a1, unsigned int a2)
{
  __int64 v4; // rax
  struct tagTHREADINFO **v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]
  char v13; // [rsp+90h] [rbp+18h] BYREF

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = (struct tagTHREADINFO **)v4;
  if ( v4 )
  {
    if ( !IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v4 + 16), gdwHungAppTimeout) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
      v11 = 0LL;
      v12 = 0LL;
      ThreadLock(v5, &v11);
      v6 = xxxSendMessageCallback(v5, 0x342u, 0LL, a1, 0LL, 1LL, 0, 1, 1);
      ThreadUnlock1(v8, v7, v9);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
      return v6;
    }
    if ( !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
  }
  return 0LL;
}
