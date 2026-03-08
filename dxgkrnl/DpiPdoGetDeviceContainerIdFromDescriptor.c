/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0200E78
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01E7088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01E70A8 (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0201144 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C02011E8 (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0201290 (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  char v1; // r14
  __int64 v2; // r15
  DXGMONITOR *ChildContainerId; // rbx
  bool v4; // zf
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  int MonitorEldInformation; // r13d
  int v16; // eax
  __int64 v17; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v19; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  DXGMONITOR *v23; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-31h]
  GUID Guid; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-19h] BYREF
  int v27; // [rsp+58h] [rbp-11h]
  GUID v28; // [rsp+60h] [rbp-9h] BYREF
  __int128 v29; // [rsp+70h] [rbp+7h]
  __int128 v30; // [rsp+80h] [rbp+17h]

  *(_QWORD *)&v30 = a1;
  Guid = 0LL;
  v26 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildContainerId) = -1073741637;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v4 = *(_DWORD *)(v2 + 496) == 1;
  v5 = v2 + 936;
  v6 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v24 = v6;
  v7 = v6[5];
  if ( !v4 )
    goto LABEL_10;
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)v5 + 4LL)) )
    return (unsigned int)ChildContainerId;
  v12 = *(unsigned int *)(v2 + 504);
  v13 = v6[489];
  v14 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v14 + 24) = v12;
  *(_QWORD *)(v14 + 32) = v13;
  if ( !v13 || (_DWORD)v12 == -1 )
  {
    LODWORD(ChildContainerId) = -1073741811;
    return (unsigned int)ChildContainerId;
  }
  MONITOR_MGR::AcquireMonitorShared(&v23, v13, v12);
  ChildContainerId = v23;
  if ( !v23 )
  {
    LODWORD(ChildContainerId) = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v23);
    return (unsigned int)ChildContainerId;
  }
  MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(v23, (struct _MONITOR_PACKED_ELD_INFORMATION *)&v26);
  ExReleaseResourceLite((PERESOURCE)((char *)ChildContainerId + 24));
  KeLeaveCriticalRegion();
  LODWORD(ChildContainerId) = MonitorEldInformation;
  if ( MonitorEldInformation >= 0 )
  {
    v6 = v24;
    LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v24[489], *(unsigned int *)(v2 + 504), &Guid);
    if ( (int)ChildContainerId >= 0 )
    {
      v1 = 1;
    }
    else
    {
      v16 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v26, 12LL, &Guid);
      ChildContainerId = (DXGMONITOR *)v16;
      if ( v16 < 0 )
        goto LABEL_23;
    }
    *(_QWORD *)&v29 = v26;
    DWORD2(v29) = v27;
    v28 = Guid;
LABEL_10:
    if ( *(_DWORD *)(v7 + 28) >= 0x3005u && *(_QWORD *)(v7 + 768) )
    {
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)v5 + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(v6[489], 1);
      ChildContainerId = (DXGMONITOR *)(int)DpiDxgkDdiGetChildContainerId(
                                              v7,
                                              v6[6],
                                              *(unsigned int *)(*(_QWORD *)v5 + 24LL),
                                              &v28);
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)v6[489]);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)v5 + 72LL), 0);
      if ( (_DWORD)ChildContainerId != -1071841279 )
      {
        if ( (int)ChildContainerId >= 0 )
          goto LABEL_14;
LABEL_29:
        WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 768), ChildContainerId);
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v2 + 496) != 1 )
        goto LABEL_29;
      WdLogSingleEntry1(4LL, v30);
      LODWORD(ChildContainerId) = 0;
      v28 = Guid;
    }
LABEL_14:
    if ( v1 )
    {
      v22 = *(_QWORD *)&v28.Data1 - *(_QWORD *)&Guid.Data1;
      if ( *(_QWORD *)&v28.Data1 == *(_QWORD *)&Guid.Data1 )
        v22 = *(_QWORD *)v28.Data4 - *(_QWORD *)Guid.Data4;
      if ( v22 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 768), (int)ChildContainerId);
        WdLogSingleEntry4(
          2LL,
          *(_QWORD *)&Guid.Data1,
          *(_QWORD *)Guid.Data4,
          *(_QWORD *)&v28.Data1,
          *(_QWORD *)v28.Data4);
        v28 = Guid;
      }
    }
  }
LABEL_15:
  if ( (int)ChildContainerId < 0 && !v1 )
    return (unsigned int)ChildContainerId;
  v17 = *(_QWORD *)&v28.Data1;
  v30 = 0LL;
  if ( !*(_QWORD *)&v28.Data1 )
    v17 = *(_QWORD *)v28.Data4 - *((_QWORD *)&v30 + 1);
  if ( !v17 )
  {
    v21 = -1073741823LL;
    LODWORD(ChildContainerId) = -1073741823;
    goto LABEL_37;
  }
  p_Guid = &v28;
  if ( v1 )
    p_Guid = &Guid;
  v19 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v2 + 960));
  ChildContainerId = (DXGMONITOR *)v19;
  if ( v19 < 0 )
  {
LABEL_23:
    v21 = (__int64)ChildContainerId;
LABEL_37:
    WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 768), v21);
  }
  return (unsigned int)ChildContainerId;
}
