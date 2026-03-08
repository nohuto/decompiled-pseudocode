/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01D78F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001624C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0016C7C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v11; // rdi
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  bool v16; // bl
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  _BYTE v23[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v24; // [rsp+58h] [rbp-20h]
  int v25; // [rsp+60h] [rbp-18h]

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v6
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v7, v8),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId),
        (v11 = SessionDataForSpecifiedSession) != 0LL) )
  {
    v12 = a1 - 1;
    if ( !v12 )
    {
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
          (DXGAUTOPUSHLOCK *)v23,
          (struct _KTHREAD **)SessionDataForSpecifiedSession + 2373,
          0);
        DXGPUSHLOCK::AcquireExclusive(v24);
        v25 = 2;
        *((_BYTE *)v11 + 18976) = 1;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
      }
      else
      {
        DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
      }
      return 0LL;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18499) = a2 == 0;
      return 0LL;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18498) = a2 == 0;
      return 0LL;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v16 = a2 != 0;
      if ( *((_BYTE *)SessionDataForSpecifiedSession + 18977) != (a2 != 0) )
      {
        *((_BYTE *)SessionDataForSpecifiedSession + 18977) = v16;
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
      }
      *((_BYTE *)v11 + 18500) = v16;
      return 0LL;
    }
    if ( v15 == 1 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18501) = a2 != 0;
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry1(1LL, ProcessSessionId);
    v21 = PsGetCurrentProcess(v20);
    v22 = PsGetProcessSessionId(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221226581LL;
  }
}
