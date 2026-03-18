/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01E9FA4
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DC5C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0183FF8 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01AB278 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03BB77C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int v6; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r15
  unsigned int v12; // ebx
  unsigned int i; // edi
  __int64 v14; // rcx
  unsigned int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v18; // eax

  v2 = a2;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v5
    && (v6 = PsGetCurrentProcessSessionId(v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, v6)) != 0LL) )
  {
    v8 = 340 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(340 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)));
    if ( SessionAdapterFromLuid )
    {
      v12 = *(_DWORD *)(v9 + 84);
      for ( i = 0; v12; v12 >>= 1 )
      {
        if ( (v12 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
          WdLogSingleEntry5(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v8 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v8),
            i,
            CurrentProcessSessionId,
            -1073741790LL);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v8 + 84) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v16 = PsGetCurrentProcessSessionId(v10);
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2),
        v16,
        -1073741790LL);
      return 3221225506LL;
    }
  }
  else
  {
    v18 = PsGetCurrentProcessSessionId(v4);
    WdLogSingleEntry2(2LL, v18, -1073741811LL);
    return 3221225485LL;
  }
}
