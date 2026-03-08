/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C01C5F08
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01C5D50 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01C5E00 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01E5250 (DxgkSessionReconnected.c)
 *     ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02BC6D0 (-IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 DxgkIncreaseSessionAdapterUniqueness()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v7; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v2
    && (v5 = PsGetCurrentProcessSessionId(v1, v0, v3, v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, v5)) != 0LL) )
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2316);
    if ( v7 )
      _InterlockedIncrement(v7);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1, v0, v3, v4);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v14 = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
