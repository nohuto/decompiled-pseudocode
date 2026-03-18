/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C02227E4
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02226A4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C022286C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdi
  const wchar_t *v9; // r9

  if ( *((_DWORD *)this + 19) > 0x10u )
  {
    WdLogSingleEntry1(2LL, 16LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Output duplication manager only support 0x%I64x sources\n",
      16LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v3
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId)) == 0LL) )
  {
    v8 = 905LL;
    WdLogSingleEntry1(2LL, 905LL);
    v9 = L"DXGSESSIONDATA is NULL";
    goto LABEL_11;
  }
  v6 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v6 )
  {
    v8 = 912LL;
    WdLogSingleEntry1(2LL, 912LL);
    v9 = L"OUTPUTDUPL_SESSION_MGR is NULL";
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 2) = *v6;
  result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
  if ( (int)result >= 0 )
    return 0LL;
  *((_DWORD *)this + 19) = 0;
  return result;
}
