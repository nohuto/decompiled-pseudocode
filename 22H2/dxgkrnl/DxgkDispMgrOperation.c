/*
 * XREFs of DxgkDispMgrOperation @ 0x1C0166F30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00E58E4 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAX@@QEAA@XZ @ 0x1C0167100 (--1-$NT_OBJECT_REFERENCE@PEAX@@QEAA@XZ.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0167134 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 CurrentProcess; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h]
  HANDLE v37[2]; // [rsp+50h] [rbp-18h]
  PVOID v38; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)v37 = a1[1];
  Object = 0LL;
  LODWORD(v5) = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x20000u,
                  g_pDxgkDisplayManagerObjectType,
                  1,
                  0x4B677844u,
                  &Object,
                  0LL);
  if ( (int)v5 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(HANDLE *)(v26 + 24) = Handle[1];
    WdLogEvent5_WdWarning(v26);
    goto LABEL_17;
  }
  if ( !*(_QWORD *)Object )
  {
    v27 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(_QWORD *)(v27 + 24) = 856LL;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_21;
  }
  if ( LODWORD(Handle[0]) != 1 )
  {
LABEL_21:
    LODWORD(v5) = -1073741811;
    goto LABEL_17;
  }
  v38 = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(v37[0], 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v38, 0LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(HANDLE *)(v28 + 24) = v37[0];
    *(_QWORD *)(v28 + 32) = v5;
    WdLogEvent5_WdWarning(v28);
  }
  else if ( LODWORD(v37[1]) )
  {
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 102);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    Current = DXGPROCESS::GetCurrent(v12, v11, v14, v15);
    if ( !Current
      || !SessionDataForSpecifiedSession
      || !*((_BYTE *)Current + 346) && !*((_BYTE *)SessionDataForSpecifiedSession + 18492) )
    {
      v29 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v29 + 24) = 880LL;
      WdLogEvent5_WdWarning(v29);
      NT_OBJECT_REFERENCE<void *>::~NT_OBJECT_REFERENCE<void *>(&v38);
      LODWORD(v5) = -1073741790;
      goto LABEL_17;
    }
    v22 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionDataForSpecifiedSession);
    v5 = v22;
    if ( v22 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v30 + 24) = v5;
      CurrentProcess = PsGetCurrentProcess(v32, v31, v33, v34);
      *(_QWORD *)(v30 + 32) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
      WdLogEvent5_WdError(v30);
    }
  }
  NT_OBJECT_REFERENCE<void *>::~NT_OBJECT_REFERENCE<void *>(&v38);
LABEL_17:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v5;
}
