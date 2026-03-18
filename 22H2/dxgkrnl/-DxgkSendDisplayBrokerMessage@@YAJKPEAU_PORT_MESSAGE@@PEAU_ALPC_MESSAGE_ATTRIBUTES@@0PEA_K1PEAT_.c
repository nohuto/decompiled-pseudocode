/*
 * XREFs of ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9830
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02F4AB8 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F5670 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E2850 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DxgkSendDisplayBrokerMessage(
        unsigned int a1,
        struct _PORT_MESSAGE *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        struct _PORT_MESSAGE *a4,
        unsigned __int64 *a5,
        struct _ALPC_MESSAGE_ATTRIBUTES *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax

  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      return DispBrokerClient::SendDisplayBrokerMessage(
               (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18968),
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7);
  }
  CurrentProcess = PsGetCurrentProcess(v11);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  WdLogSingleEntry1(1LL, ProcessSessionId);
  v19 = PsGetCurrentProcess(v18);
  v20 = PsGetProcessSessionId(v19);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
    v20,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221226581LL;
}
