/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DE194 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E56C0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EA400 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C012DE8C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C013E9F8 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C014F88C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C016AD30 (DxgkIsSourceInHardwareClone.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0223100 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C025A5B0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v7 = a1;
  if ( !a4 )
  {
    v21 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v21 + 24) = 0LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v22 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v22);
    return 3223191554LL;
  }
  v8 = a1[337];
  if ( !v8 )
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = v7;
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v25, v9);
    v10 = *(_QWORD *)(v9 + 88);
    v26 = -1;
    v24 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 88);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, v11);
    if ( v24 )
    {
      v14 = v24 + 96;
      v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 96), v4, a3, &v26);
      v7 = (_QWORD *)v15;
      if ( v15 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
        LODWORD(v7) = 0;
        *a4 = v26;
LABEL_10:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25[0] + 40), v18);
        return (unsigned int)v7;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
      v20[3] = a3;
      v20[4] = v4;
      v20[5] = v14;
      v20[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    goto LABEL_10;
  }
  v23 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v23 + 24) = v7;
  WdLogEvent5_WdError(v23);
  return 3223192373LL;
}
