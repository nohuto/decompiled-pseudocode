/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C00BA8E8 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C0236714 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0236EBC (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0236B90 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 anonymous_namespace_::NotifyIAMWindowManagementEvent()
{
  unsigned int v0; // ebx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rdi
  const struct tagTHREADINFO **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]
  char v11; // [rsp+88h] [rbp+10h] BYREF

  v0 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  v2 = gptiCurrent;
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 280) )
    {
      v4 = *(const struct tagTHREADINFO ***)(v3 + 320);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(v4[2], 0) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v3);
        }
        else
        {
          v9 = 0LL;
          v10 = 0LL;
          ThreadLock((__int64)v4, (__int64 *)&v9);
          v0 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v6, v5, v7);
        }
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11, v2, v1);
  return v0;
}
