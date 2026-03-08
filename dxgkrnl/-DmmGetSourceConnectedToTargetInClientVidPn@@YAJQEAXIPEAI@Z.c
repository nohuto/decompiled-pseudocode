/*
 * XREFs of ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0056E0C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01AE1E0 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C01AFD40 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x1C01F8364 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAC68 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C02BDBDC (DxgkOpmGetRedirectionInfo.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02F90F0 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C036DA78 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rsi
  __int64 v8; // rsi
  struct _KTHREAD **v9; // r15
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v7 = a1[365];
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 104);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  v9 = (struct _KTHREAD **)(v8 + 40);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 40));
  v14 = *(_QWORD *)(v8 + 128);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
    v11 = *(_QWORD *)(v8 + 128);
    v23 = v11;
    if ( v11 )
    {
      v15 = v11 + 96;
      v16 = v11 + 120;
      v17 = *(_QWORD *)(v11 + 120);
      if ( v17 == v11 + 120 || (v13 = v17 - 8, v10 = (_QWORD *)(v17 - 8), v17 == 8) )
      {
LABEL_13:
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v16, v13) + 24) = v15;
      }
      else
      {
        do
        {
          if ( *(_DWORD *)(v10[12] + 24LL) == (_DWORD)v4 )
          {
            v18 = *(unsigned int *)(v10[11] + 24LL);
            if ( (_DWORD)v18 == -1 )
              goto LABEL_14;
            *a3 = v18;
            ReferenceCounted::Release((ReferenceCounted *)(v11 + 24));
            goto LABEL_12;
          }
          v21 = v10[1];
          v10 = (_QWORD *)(v21 - 8);
          if ( v21 == v16 )
            v10 = 0LL;
        }
        while ( v10 );
        if ( !v13 )
          goto LABEL_13;
        v22 = WdLogNewEntry5_WdTrace(v11, 0LL, v16, v13);
        *(_QWORD *)(v22 + 24) = v4;
        *(_QWORD *)(v22 + 32) = v15;
      }
LABEL_14:
      v20 = WdLogNewEntry5_WdTrace(v11, v18, v16, v13);
      v3 = -1071774912;
      *(_QWORD *)(v20 + 24) = v4;
      *(_QWORD *)(v20 + 32) = a1;
      goto LABEL_15;
    }
  }
  else
  {
    v23 = 0LL;
  }
  v3 = -1071774884;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a1;
LABEL_15:
  auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
LABEL_12:
  DXGFASTMUTEX::Release(v9);
  return v3;
}
