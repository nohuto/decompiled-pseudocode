/*
 * XREFs of DxgkDispMgrOperation @ 0x1C01D5490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C0177D00 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D565C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1C01D59EC (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGPROCESS *Current; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  HANDLE Handle[2]; // [rsp+50h] [rbp-28h]
  HANDLE v21[2]; // [rsp+60h] [rbp-18h]
  PVOID v22; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)v21 = a1[1];
  Object = 0LL;
  LODWORD(v3) = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x20000u,
                  g_pDxgkDisplayManagerObjectType,
                  1,
                  0x4B677844u,
                  &Object,
                  0LL);
  if ( (int)v3 < 0 )
  {
    WdLogSingleEntry1(3LL, Handle[1]);
    goto LABEL_17;
  }
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry1(3LL, 859LL);
    goto LABEL_20;
  }
  if ( LODWORD(Handle[0]) != 1 )
  {
LABEL_20:
    LODWORD(v3) = -1073741811;
    goto LABEL_17;
  }
  v22 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(v21[0], 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v22, 0LL);
  LODWORD(v3) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(3LL, v21[0], v4);
  }
  else if ( LODWORD(v21[1]) )
  {
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    Current = DXGPROCESS::GetCurrent(v6);
    if ( !Current
      || !SessionDataForSpecifiedSession
      || (*((_DWORD *)Current + 106) & 4) == 0 && !*((_BYTE *)SessionDataForSpecifiedSession + 18500) )
    {
      WdLogSingleEntry1(3LL, 883LL);
      NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v22);
      LODWORD(v3) = -1073741790;
      goto LABEL_17;
    }
    v12 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionDataForSpecifiedSession);
    v3 = v12;
    if ( v12 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v13);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry2(2LL, v3, ProcessSessionId);
      v18 = PsGetCurrentProcess(v17);
      v19 = PsGetProcessSessionId(v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to connect to session broker with status 0x%I64x in session 0x%I64x",
        v3,
        v19,
        0LL,
        0LL,
        0LL);
    }
  }
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v22);
LABEL_17:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v3;
}
