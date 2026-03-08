/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0167848
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C0167780 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0167960 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGPROCESS *Current; // rbp
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int CurrentProcessSessionId; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v18; // [rsp+58h] [rbp-20h]

  v18 = 0;
  v2 = -1073741811;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v5
    && (v8 = PsGetCurrentProcessSessionId(v4, v3, v6, v7),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, v8)) != 0LL) )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      v16[0] = 0;
      v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v16, 1);
      v2 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
      }
      else
      {
        v12 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
        {
          while ( 1 )
          {
            v13 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v12);
            v2 = v13;
            if ( v13 < 0 )
              break;
            if ( ++v12 >= *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
              goto LABEL_8;
          }
          WdLogSingleEntry2(2LL, v12, v13);
        }
        else
        {
LABEL_8:
          v2 = 0;
        }
      }
      if ( v16[0] )
        DxgkReleaseSessionModeChangeLock();
    }
    else
    {
      WdLogSingleEntry0(2LL);
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3, v6, v7);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
  }
  if ( v18 )
    KeUnstackDetachProcess(&ApcState);
  return v2;
}
