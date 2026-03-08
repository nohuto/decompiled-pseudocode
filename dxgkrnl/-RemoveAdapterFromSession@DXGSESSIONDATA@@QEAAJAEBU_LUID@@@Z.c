/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01C5874
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B734 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000B2E8 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A702C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01C595C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  unsigned int *v5; // rdx
  SESSION_ADAPTER *v6; // rbx
  SESSION_ADAPTER **v9; // rdx
  SESSION_ADAPTER **v10; // rcx

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v6 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v9 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 4);
      if ( v9[1] != (SESSION_ADAPTER *)((char *)v6 + 32)
        || (v10 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 5), *v10 != (SESSION_ADAPTER *)((char *)v6 + 32)) )
      {
        __fastfail(3u);
      }
      *v10 = (SESSION_ADAPTER *)v9;
      v9[1] = (SESSION_ADAPTER *)v10;
      SESSION_ADAPTER::`scalar deleting destructor'(v6);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(2LL, (int)v5[1], *v5, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x%08I64x is NOT being used in session 0x%I64x, returning 0x%I64x.",
      a2->HighPart,
      a2->LowPart,
      (__int64)this,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
}
