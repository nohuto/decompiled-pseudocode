/*
 * XREFs of ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180098784
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x180037AFC (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097B60 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800AD67C (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 */

__int64 __fastcall CWindowList::HandleScreenRotation(CWindowList *this, int a2, int a3)
{
  CScreenRotation *v6; // rcx
  unsigned int v7; // ebx
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = (CScreenRotation *)*((_QWORD *)this + 62);
  v7 = 0;
  if ( v6 )
  {
    if ( *((_QWORD *)v6 + 3) )
    {
      CScreenRotation::UpdateAngle(v6, a2, a3);
      updated = CWindowList::ForceUpdateScene(this);
      v7 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x7BEu);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v7;
}
