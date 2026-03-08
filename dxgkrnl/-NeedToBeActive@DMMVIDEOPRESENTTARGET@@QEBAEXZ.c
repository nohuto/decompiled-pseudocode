/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C017F2A0
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C017E6B8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C017E630 (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01F8050 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rdx
  char IsMonitorDisabled; // di
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 )
    return 0;
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( *((_BYTE *)this + 415) )
  {
    v3 = *((_QWORD *)this + 14);
    if ( v3 )
    {
      MONITOR_MGR::AcquireMonitorShared(&v7, v3);
      if ( v7 )
      {
        IsMonitorDisabled = DXGMONITOR::_IsMonitorDisabled(v7);
        if ( v4 )
        {
          ExReleaseResourceLite((PERESOURCE)(v4 + 24));
          KeLeaveCriticalRegion();
        }
        if ( IsMonitorDisabled )
          return v2;
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741275LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v7);
        WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), -1073741275LL);
      }
    }
    return 1;
  }
  return DMMVIDEOPRESENTTARGET::IsTargetForceable(this);
}
