/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00EA314
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E90D0 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0137DA0 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this)
{
  char v2; // bl
  struct HDXGMONITOR__ *v3; // rcx
  int MonitorFromHandle; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct DXGMONITOR *v8; // rdi
  struct _ERESOURCE *v9; // rsi
  int v10; // eax
  bool v11; // di
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 )
    return 0;
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( !*((_BYTE *)this + 415) )
    return DMMVIDEOPRESENTTARGET::IsTargetForceable(this);
  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v3 )
    return 1;
  v18 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v3, &v18);
  v7 = MonitorFromHandle;
  if ( MonitorFromHandle < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v17 + 32) = v7;
    WdLogEvent5_WdError(v17);
    v11 = 0;
  }
  else
  {
    v8 = v18;
    if ( !v18 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v13);
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v16);
    }
    v9 = (struct _ERESOURCE *)((char *)v8 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    v10 = *((_DWORD *)v8 + 10);
    v11 = (v10 & 0x20) != 0 || (v10 & 2) != 0 && (v10 & 4) != 0;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
  }
  if ( !v11 )
    return 1;
  return v2;
}
