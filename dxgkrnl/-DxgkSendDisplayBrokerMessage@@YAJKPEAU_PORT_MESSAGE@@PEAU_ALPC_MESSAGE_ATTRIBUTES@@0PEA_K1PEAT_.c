/*
 * XREFs of ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01DCA60
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01D5B30 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax

  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11, v14, v15);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
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
  CurrentProcess = PsGetCurrentProcess(v12);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  WdLogSingleEntry1(1LL, ProcessSessionId);
  v22 = PsGetCurrentProcess(v21);
  v23 = PsGetProcessSessionId(v22);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
    v23,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221226581LL;
}
