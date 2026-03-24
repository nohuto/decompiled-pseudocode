/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00E34F4
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00E3430 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00E361C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v26; // [rsp+58h] [rbp-20h]

  v26 = 0;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v8 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v21 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v22 = v21;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v22);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v22 = WdLogNewEntry5_WdError(v10, v9);
    goto LABEL_18;
  }
  v24[0] = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v24, 1);
  v15 = v12;
  if ( v12 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v23 + 24) = v15;
  }
  else
  {
    v16 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v8 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v17 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v16);
      v15 = v17;
      if ( v17 < 0 )
        break;
      if ( ++v16 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v23 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v23 + 24) = v16;
    *(_QWORD *)(v23 + 32) = v15;
  }
  WdLogEvent5_WdError(v23);
  v8 = v15;
LABEL_10:
  if ( v24[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_12:
  if ( v26 )
    KeUnstackDetachProcess(&ApcState);
  return v8;
}
