/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C032BF18
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C0330994 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C032A37C (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C032C874 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z @ 0x1C0331DBC (-GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  __int64 v6; // rsi
  struct DXGFASTMUTEX *v7; // rbx
  OUTPUTDUPL_CONTEXT **v8; // r14
  UINT v9; // ebx
  UINT NumOutputDuplContexts; // edx
  char *v11; // rax
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v16; // rcx
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  _BYTE v19[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[19];
  if ( a2->Size < (unsigned __int64)(56 * this[2] * v5) + 24 )
  {
    a2->Size = 56 * this[2] * this[19] + 24;
    return 1075707914LL;
  }
  v6 = 0LL;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v6 < a2->NumVidPnSources; v6 = (unsigned int)(v6 + 1) )
  {
    v7 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72 * v6);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v7, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v8 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v7 + 6);
    v9 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( NumOutputDuplContexts )
    {
      do
      {
        v11 = (char *)a2 + 56 * v9 + 56 * NumOutputDuplContexts * (_DWORD)v6;
        if ( *v8 )
        {
          OUTPUTDUPL_CONTEXT::GetDebugInfo(*v8, (struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO *)(v11 + 24));
        }
        else
        {
          *(_OWORD *)(v11 + 24) = 0LL;
          *(_OWORD *)(v11 + 40) = 0LL;
          *(_OWORD *)(v11 + 56) = 0LL;
          *((_QWORD *)v11 + 9) = 0LL;
        }
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v9;
        ++v8;
      }
      while ( v9 < NumOutputDuplContexts );
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v13
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId)) != 0LL) )
  {
    v16 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
    if ( v16 )
    {
      OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v16, a2);
      return 0LL;
    }
    v17 = 2198LL;
    WdLogSingleEntry1(2LL, 2198LL);
    v18 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    v17 = 2191LL;
    WdLogSingleEntry1(2LL, 2191LL);
    v18 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
