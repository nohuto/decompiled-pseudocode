/*
 * XREFs of ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01841B4
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0182344 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F9EEC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

MONITORSCOUNT_CALLBACK_CONTEXT *__fastcall MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT(
        MONITORSCOUNT_CALLBACK_CONTEXT *this)
{
  char v1; // bl
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  MONITORSCOUNT_CALLBACK_CONTEXT *result; // rax

  v1 = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = -1;
  *(_DWORD *)((char *)this + 25) = 257;
  *(_WORD *)((char *)this + 29) = 0;
  *((_BYTE *)this + 31) = 0;
  *((_DWORD *)this + 8) = 0;
  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v4
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId)) == 0LL)
    || !*((_BYTE *)SessionDataForSpecifiedSession + 18499) )
  {
    v1 = 1;
  }
  result = this;
  *((_BYTE *)this + 24) = v1;
  return result;
}
