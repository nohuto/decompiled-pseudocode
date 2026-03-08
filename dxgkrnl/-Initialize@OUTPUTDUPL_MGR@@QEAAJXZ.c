/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0214204
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02140C4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C021428C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // rdi
  const wchar_t *v12; // r9

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
  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v4
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2, v5, v6),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId)) == 0LL) )
  {
    v11 = 905LL;
    WdLogSingleEntry1(2LL, 905LL);
    v12 = L"DXGSESSIONDATA is NULL";
    goto LABEL_11;
  }
  v9 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v9 )
  {
    v11 = 912LL;
    WdLogSingleEntry1(2LL, 912LL);
    v12 = L"OUTPUTDUPL_SESSION_MGR is NULL";
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 2) = *v9;
  result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
  if ( (int)result >= 0 )
    return 0LL;
  *((_DWORD *)this + 19) = 0;
  return result;
}
