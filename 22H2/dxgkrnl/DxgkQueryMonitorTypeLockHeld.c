/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C0151550
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C025D66C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0297D20 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     MonitorGetMonitorType @ 0x1C01356A8 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9)
{
  __int64 v9; // rbx
  int MonitorType; // edi
  _DWORD *v12; // r9
  unsigned int v13; // r10d
  bool *v15; // r12
  char v16; // r8
  bool *v17; // r13
  _BYTE *v18; // r14
  _DWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v23; // rdx
  struct DMMVIDEOPRESENTTARGET *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  char v28; // al
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _FAST_MUTEX *v33; // rcx
  __int64 v34; // rax
  int MonitorInstance; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGMONITOR *v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  bool v48; // [rsp+30h] [rbp-58h]
  char IsVirtualModeSuportDisabled; // [rsp+31h] [rbp-57h]
  struct DXGMONITOR *v50; // [rsp+38h] [rbp-50h] BYREF
  __int64 v51; // [rsp+40h] [rbp-48h] BYREF
  struct DMMVIDEOPRESENTTARGET *v52; // [rsp+48h] [rbp-40h]
  struct HDXGMONITOR__ *v53; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+98h] [rbp+10h]
  _DWORD *v55; // [rsp+A0h] [rbp+18h]

  v55 = a3;
  v54 = a2;
  v9 = *(_QWORD *)(a1 + 2696);
  MonitorType = 0;
  v12 = a3;
  v13 = a2;
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v26 + 24) = a1;
    *(_QWORD *)(v26 + 32) = v54;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v15 = a9;
  v16 = 1;
  v17 = a8;
  v18 = a6;
  v19 = a5;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v20 = *(_QWORD *)(v9 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, v20);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 80) + 72LL));
    v21 = *(_QWORD *)(v20 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, v54);
    v52 = TargetById;
    v24 = TargetById;
    if ( !TargetById )
    {
      if ( v18 )
        *v18 = 0;
      if ( v17 )
        *v17 = *(_BYTE *)(*(_QWORD *)(a1 + 2696) + 249LL);
      if ( v15 )
        *v15 = *(_BYTE *)(*(_QWORD *)(a1 + 2696) + 250LL);
      goto LABEL_14;
    }
    if ( a4 )
      *a4 = *((_DWORD *)TargetById + 20);
    if ( v19 )
      *v19 = *((_DWORD *)TargetById + 21);
    if ( v18 )
      *v18 = *((_BYTE *)TargetById + 405);
    if ( !v17 && !v15 )
    {
LABEL_14:
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v23);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40), v23);
      v13 = v54;
      v16 = 1;
      v12 = v55;
      goto LABEL_17;
    }
    v27 = *((unsigned int *)TargetById + 6);
    v28 = 0;
    LOBYTE(v23) = 0;
    LOBYTE(v53) = 0;
    v48 = 0;
    if ( (_DWORD)v27 == -1 )
    {
      MonitorType = -1073741811;
LABEL_51:
      if ( MonitorType >= 0 )
      {
        if ( v17 )
          *v17 = v28 == 0;
        if ( v15 )
          *v15 = (_BYTE)v23 == 0;
        goto LABEL_14;
      }
LABEL_28:
      v31 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v31 + 24) = *((unsigned int *)v52 + 6);
      *(_QWORD *)(v31 + 32) = a1;
      WdLogEvent5_WdError(v31);
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v32);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40), v32);
      return (unsigned int)MonitorType;
    }
    v29 = *(_QWORD *)(a1 + 2696);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v30 + 24) = 9262LL;
      WdLogEvent5_WdError(v30);
      MonitorType = -1073741811;
      goto LABEL_28;
    }
    v33 = *(struct _FAST_MUTEX **)(v29 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdError(0LL, v23);
      *(_QWORD *)(v34 + 24) = a1;
      WdLogEvent5_WdError(v34);
      MonitorType = -1073741811;
LABEL_39:
      v37 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v37 + 24) = MonitorType;
      WdLogEvent5_WdAssertion(v37);
LABEL_49:
      v28 = (char)v53;
      LOBYTE(v23) = v48;
      goto LABEL_51;
    }
    v50 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, (unsigned int)v27, 1, &v50);
    MonitorType = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v36 = WdLogNewEntry5_WdDmmEvent(v24);
      *(_QWORD *)(v36 + 24) = v27;
      *(_QWORD *)(v36 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v36);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v38 = v50;
        if ( !v50 || *((_DWORD *)v50 + 108) != 1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v39);
        }
        if ( !v38 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v40);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v38 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v38);
        ExReleaseResourceLite((PERESOURCE)((char *)v38 + 296));
        KeLeaveCriticalRegion();
        MonitorType = 0;
        goto LABEL_46;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_38:
        if ( MonitorType < 0 )
          goto LABEL_39;
LABEL_46:
        if ( IsVirtualModeSuportDisabled )
        {
          v48 = 1;
          LOBYTE(v53) = 1;
        }
        else
        {
          v48 = *(_BYTE *)(v29 + 250) == 0;
          LOBYTE(v53) = *(_BYTE *)(v29 + 249) == 0;
        }
        goto LABEL_49;
      }
    }
    MonitorType = 0;
    goto LABEL_38;
  }
LABEL_17:
  if ( a7 )
  {
    v41 = *(_QWORD *)(a1 + 2696);
    if ( (!*(_BYTE *)(v41 + 249) || !*(_BYTE *)(v41 + 250))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v16 = 0;
    }
    *a7 = v16;
  }
  if ( !v12 )
    return (unsigned int)MonitorType;
  v53 = 0LL;
  result = MonitorGetMonitorHandle(a1, v13, 0, DxgkQueryMonitorTypeLockHeld, &v53);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v53, v55);
    if ( MonitorType < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v44 + 24) = v54;
      *(_QWORD *)(v44 + 32) = a1;
      WdLogEvent5_WdError(v44);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, (__int64)v53, DxgkQueryMonitorTypeLockHeld) < 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v47 + 24) = 2981LL;
      WdLogEvent5_WdAssertion(v47);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
