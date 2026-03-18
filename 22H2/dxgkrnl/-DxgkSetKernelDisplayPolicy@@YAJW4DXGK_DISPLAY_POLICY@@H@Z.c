/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01E4320
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001632C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0016F60 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v8; // rdi
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  bool v13; // bl
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  _BYTE v20[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v21; // [rsp+58h] [rbp-20h]
  int v22; // [rsp+60h] [rbp-18h]

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v5
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId),
        (v8 = SessionDataForSpecifiedSession) != 0LL) )
  {
    v9 = a1 - 1;
    if ( !v9 )
    {
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
          (DXGAUTOPUSHLOCK *)v20,
          (struct _KTHREAD **)SessionDataForSpecifiedSession + 2373,
          0);
        DXGPUSHLOCK::AcquireExclusive(v21);
        v22 = 2;
        *((_BYTE *)v8 + 18976) = 1;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
      }
      else
      {
        DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
      }
      return 0LL;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18499) = a2 == 0;
      return 0LL;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18498) = a2 == 0;
      return 0LL;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = a2 != 0;
      if ( *((_BYTE *)SessionDataForSpecifiedSession + 18977) != (a2 != 0) )
      {
        *((_BYTE *)SessionDataForSpecifiedSession + 18977) = v13;
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
      }
      *((_BYTE *)v8 + 18500) = v13;
      return 0LL;
    }
    if ( v12 == 1 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18501) = a2 != 0;
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry1(1LL, ProcessSessionId);
    v18 = PsGetCurrentProcess(v17);
    v19 = PsGetProcessSessionId(v18);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221226581LL;
  }
}
