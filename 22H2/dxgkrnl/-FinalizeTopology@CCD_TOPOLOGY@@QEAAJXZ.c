/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFF88
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C01DFEC0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01E00A0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rdi
  unsigned int v5; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbp
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int CurrentProcessSessionId; // eax
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v16; // [rsp+58h] [rbp-20h]

  v16 = 0;
  v2 = -1073741811;
  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v4
    && (v5 = PsGetCurrentProcessSessionId(v3),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, v5)) != 0LL) )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
    Current = DXGPROCESS::GetCurrent(v7);
    if ( Current )
    {
      v14[0] = 0;
      v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v14, 1);
      v2 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
      }
      else
      {
        v10 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
        {
          while ( 1 )
          {
            v11 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v10);
            v2 = v11;
            if ( v11 < 0 )
              break;
            if ( ++v10 >= *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
              goto LABEL_8;
          }
          WdLogSingleEntry2(2LL, v10, v11);
        }
        else
        {
LABEL_8:
          v2 = 0;
        }
      }
      if ( v14[0] )
        DxgkReleaseSessionModeChangeLock();
    }
    else
    {
      WdLogSingleEntry0(2LL);
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
  }
  if ( v16 )
    KeUnstackDetachProcess(&ApcState);
  return v2;
}
