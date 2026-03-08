/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C3798
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A702C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C01C16D8 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03B6EBC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  SESSION_ADAPTER *SessionAdapterFromLuid; // r15
  unsigned int v17; // ebx
  unsigned int i; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v26; // eax

  v2 = a2;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v6
    && (v9 = PsGetCurrentProcessSessionId(v5, v4, v7, v8),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, v9)) != 0LL) )
  {
    v11 = 340 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(340 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)));
    if ( SessionAdapterFromLuid )
    {
      v17 = *(_DWORD *)(v12 + 84);
      for ( i = 0; v17; v17 >>= 1 )
      {
        if ( (v17 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
          WdLogSingleEntry5(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v11 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v11),
            i,
            CurrentProcessSessionId,
            -1073741790LL);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v11 + 84) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v11 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v24 = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2),
        v24,
        -1073741790LL);
      return 3221225506LL;
    }
  }
  else
  {
    v26 = PsGetCurrentProcessSessionId(v5, v4, v7, v8);
    WdLogSingleEntry2(2LL, v26, -1073741811LL);
    return 3221225485LL;
  }
}
