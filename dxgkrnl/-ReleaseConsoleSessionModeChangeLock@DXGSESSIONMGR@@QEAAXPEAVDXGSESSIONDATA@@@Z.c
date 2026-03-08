/*
 * XREFs of ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01AADDC
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0162550 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0009224 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(DXGSESSIONMGR *this, struct DXGSESSIONDATA *a2)
{
  DXGSESSIONDATA **v2; // rbx

  v2 = (DXGSESSIONDATA **)((char *)this + 136);
  if ( !a2 || a2 != *v2 )
  {
    WdLogSingleEntry1(1LL, 5758LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pConsoleSessionData != NULL) && (pConsoleSessionData == m_pConsoleSessionData)",
      5758LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::ReleaseSessionModeChangeLock(*v2);
}
