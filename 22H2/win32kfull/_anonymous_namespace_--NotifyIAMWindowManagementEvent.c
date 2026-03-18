/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C004C7AC
 * Callers:
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x1C004A6E8 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C004A958 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C004BD48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021D458 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C021D4D8 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C021DE1C (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C004C888 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C021DAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]
  char v12; // [rsp+90h] [rbp+18h] BYREF

  v3 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v4 = (struct tagWND *)v3;
  if ( v3 )
  {
    if ( !IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v3 + 16), gdwHungAppTimeout) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
      v10 = 0LL;
      v11 = 0LL;
      ThreadLock(v4, &v10);
      v5 = xxxSendMessageCallback(v4, 0x342u, 0LL, 0LL, 1LL, 0, 1, 1);
      ThreadUnlock1(v7, v6, v8);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12);
      return v5;
    }
    if ( !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
  }
  return 0LL;
}
