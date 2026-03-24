/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A999C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02B0498 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C005FA38 (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0169C58 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2)
{
  __int64 v2; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  int MonitorInstance; // edi
  struct DXGMONITOR *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int i; // edi
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  _QWORD *v25; // rax
  struct DXGMONITOR *v26; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = 0;
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v8 = (unsigned int)v2;
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
  {
    MonitorInstance = -1073741811;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 337);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_QWORD *)this + 337);
  }
  v14 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( v14 )
  {
    v26 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v2, 1, &v26);
    if ( MonitorInstance >= 0 )
    {
      v17 = v26;
      if ( !v26 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v18);
        v21 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v21);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
      for ( i = 1; i < 0x37; ++i )
      {
        EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v17, i);
        if ( !EdidBlockPtr )
          break;
        if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
        {
          v4 = 1;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
      KeLeaveCriticalRegion();
      return v4;
    }
LABEL_21:
    if ( MonitorInstance < 0 )
      goto LABEL_22;
    return v4;
  }
  v15 = WdLogNewEntry5_WdError(0LL, v9);
  *(_QWORD *)(v15 + 24) = this;
  WdLogEvent5_WdError(v15);
  MonitorInstance = -1073741811;
LABEL_22:
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
  v25[3] = MonitorInstance;
  v25[4] = this;
  v25[5] = v8;
  WdLogEvent5_WdError(v25);
  return 0LL;
}
