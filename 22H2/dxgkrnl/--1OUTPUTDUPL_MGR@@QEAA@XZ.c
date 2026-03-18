/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C032A108
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C005438C (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C032B2EC (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0051BA8 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C032B384 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  DXGDIAGNOSTICS *v2; // rcx

  if ( this[7] != (OUTPUTDUPL_MGR *)(this + 7) )
  {
    WdLogSingleEntry1(1LL, 876LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_PendingDestroyListHead)",
      876LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v2 = this[10];
  if ( v2 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v2);
    this[10] = 0LL;
  }
}
