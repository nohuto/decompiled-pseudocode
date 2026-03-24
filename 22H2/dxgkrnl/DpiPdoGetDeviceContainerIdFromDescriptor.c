/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0181CDC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0178A0C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0174BD0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0174C50 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0181FC8 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C018206C (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C01828F0 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r15
  __int64 ChildContainerId; // rdi
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGADAPTER *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _FAST_MUTEX *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v39; // eax
  __int64 v40; // rax
  GUID Guid; // [rsp+38h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-19h] BYREF
  int v43; // [rsp+50h] [rbp-11h]
  GUID v44; // [rsp+58h] [rbp-9h] BYREF
  __int128 v45; // [rsp+68h] [rbp+7h]
  struct DXGMONITOR *v46[2]; // [rsp+78h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v42 = 0LL;
  Guid = 0LL;
  v43 = 0;
  v3 = 0;
  v44 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v45 = 0LL;
  v6 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v7 = v6[5];
  if ( *(_DWORD *)(v2 + 496) != 1 )
  {
LABEL_18:
    if ( *(_DWORD *)(v7 + 28) >= 0x3005u && *(_QWORD *)(v7 + 768) )
    {
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(v6[487], 1LL);
      ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                v7,
                                v6[6],
                                *(unsigned int *)(*(_QWORD *)(v2 + 936) + 24LL),
                                &v44);
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)v6[487], v21);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 72LL), 0);
      if ( (_DWORD)ChildContainerId == -1071841279 )
      {
        if ( *(_DWORD *)(v2 + 496) != 1 )
          goto LABEL_22;
        v31 = WdLogNewEntry5_WdEvent(a1, a2);
        *(_QWORD *)(v31 + 24) = a1;
        WdLogEvent5_WdEvent(v31);
        LODWORD(ChildContainerId) = 0;
        v44 = Guid;
      }
      else if ( (int)ChildContainerId < 0 )
      {
        goto LABEL_22;
      }
    }
    if ( v3 )
    {
      v32 = *(_QWORD *)&v44.Data1 - *(_QWORD *)&Guid.Data1;
      if ( *(_QWORD *)&v44.Data1 == *(_QWORD *)&Guid.Data1 )
        v32 = *(_QWORD *)v44.Data4 - *(_QWORD *)Guid.Data4;
      if ( v32 )
      {
        v33 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v33 + 24) = *(_QWORD *)(v7 + 768);
        *(_QWORD *)(v33 + 32) = (int)ChildContainerId;
        WdLogEvent5_WdError(v33);
        v36 = WdLogNewEntry5_WdError(v35, v34);
        *(GUID *)(v36 + 24) = Guid;
        *(GUID *)(v36 + 40) = v44;
        WdLogEvent5_WdError(v36);
        v44 = Guid;
      }
    }
    goto LABEL_23;
  }
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v2 + 936) + 4LL)) )
    return (unsigned int)ChildContainerId;
  ChildContainerId = *(unsigned int *)(v2 + 504);
  v10 = (DXGADAPTER *)v6[487];
  v11 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v11 + 24) = ChildContainerId;
  *(_QWORD *)(v11 + 32) = v10;
  if ( !v10 || (_DWORD)ChildContainerId == -1 )
  {
    LODWORD(ChildContainerId) = -1073741811;
  }
  else
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v24);
    }
    v14 = *((_QWORD *)v10 + 337);
    if ( !v14 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v25);
      v14 = *((_QWORD *)v10 + 337);
    }
    v15 = *(struct _FAST_MUTEX **)(v14 + 96);
    if ( !v15 )
    {
      v26 = WdLogNewEntry5_WdError(0LL, v12);
      *(_QWORD *)(v26 + 24) = v10;
      WdLogEvent5_WdError(v26);
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    v46[0] = 0LL;
    LODWORD(ChildContainerId) = MONITOR_MGR::_GetMonitorInstance(v15, (unsigned int)ChildContainerId, 1, v46);
    if ( (int)ChildContainerId >= 0 )
    {
      ChildContainerId = (__int64)v46[0];
      if ( !v46[0] )
      {
        v27 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v27);
        v30 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v30);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(ChildContainerId + 296), 1u);
      MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                                (DXGMONITOR *)ChildContainerId,
                                (struct _MONITOR_PACKED_ELD_INFORMATION *)&v42);
      v19 = (struct _ERESOURCE *)(ChildContainerId + 296);
      LODWORD(ChildContainerId) = MonitorEldInformation;
      ExReleaseResourceLite(v19);
      KeLeaveCriticalRegion();
    }
  }
  if ( (int)ChildContainerId < 0 )
    return (unsigned int)ChildContainerId;
  LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v6[487], *(unsigned int *)(v2 + 504), &Guid);
  if ( (int)ChildContainerId >= 0 )
  {
    v3 = 1;
    goto LABEL_17;
  }
  v20 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v42, 12LL, &Guid);
  ChildContainerId = v20;
  if ( v20 >= 0 )
  {
LABEL_17:
    *(_QWORD *)&v45 = v42;
    DWORD2(v45) = v43;
    v44 = Guid;
    goto LABEL_18;
  }
LABEL_22:
  v22 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v22 + 24) = *(_QWORD *)(v7 + 768);
  *(_QWORD *)(v22 + 32) = ChildContainerId;
  WdLogEvent5_WdError(v22);
LABEL_23:
  if ( (int)ChildContainerId < 0 && !v3 )
    return (unsigned int)ChildContainerId;
  v37 = *(_QWORD *)&v44.Data1;
  *(_OWORD *)v46 = 0LL;
  if ( !*(_QWORD *)&v44.Data1 )
    v37 = *(_QWORD *)v44.Data4 - (unsigned __int64)v46[1];
  if ( !v37 )
  {
    ChildContainerId = -1073741823LL;
LABEL_43:
    v40 = WdLogNewEntry5_WdError(v37, a2);
    *(_QWORD *)(v40 + 24) = *(_QWORD *)(v7 + 768);
    *(_QWORD *)(v40 + 32) = ChildContainerId;
    WdLogEvent5_WdError(v40);
    return (unsigned int)ChildContainerId;
  }
  p_Guid = &v44;
  if ( v3 )
    p_Guid = &Guid;
  v39 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v2 + 960));
  ChildContainerId = v39;
  if ( v39 < 0 )
    goto LABEL_43;
  return (unsigned int)ChildContainerId;
}
