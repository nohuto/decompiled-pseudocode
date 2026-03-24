/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C0117F20 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01869A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0239474 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA7D0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02BCAC0 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE29C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ?IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ @ 0x1C00266B4 (-IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C023B0F4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0248098 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0292490 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        POBJECT_HANDLE_INFORMATION a5,
        unsigned int a6,
        DXGSYNCOBJECT **a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int IsEnabledDeviceUsage; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v26; // r12
  int v27; // r8d
  unsigned int v28; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  PERESOURCE *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct DXGGLOBAL *v40; // rax
  int v41; // ebx
  __int64 v42; // r14
  DXGSYNCOBJECT *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int HostProcess; // r13d
  __int64 v48; // rax
  PVOID v49; // rax
  void *v50; // rcx
  NTSTATUS v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  int SyncObject; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 *v63; // rbx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  DXGSYNCOBJECT *v69; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  PERESOURCE *v71; // [rsp+70h] [rbp-29h] BYREF
  char v72; // [rsp+78h] [rbp-21h]
  unsigned int v73[4]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v74[8]; // [rsp+90h] [rbp-9h]
  unsigned int v75; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v76; // [rsp+F0h] [rbp+57h]

  v76 = a3;
  if ( a1 )
  {
    v13 = *(_QWORD *)(a3 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v16 + 24) = 36LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  *a7 = 0LL;
  IsEnabledDeviceUsage = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
  v20 = *(unsigned int *)(a4 + 12);
  v21 = IsEnabledDeviceUsage != 0;
  if ( IsEnabledDeviceUsage )
  {
    if ( (v20 & 0x100) != 0 )
    {
      Current = DXGPROCESS::GetCurrent(v21, v20, v18, v19);
      if ( (*((_BYTE *)Current + 347) & 0x20) == 0
        || !DXGVIRTUALMACHINE::IsWsl2Guest(*(DXGVIRTUALMACHINE **)(*((_QWORD *)Current + 62) + 496LL)) )
      {
        v24 = WdLogNewEntry5_WdError(v21, v23);
        *(_QWORD *)(v24 + 24) = 47LL;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(a4 + 8) != 4 )
      {
        v24 = WdLogNewEntry5_WdError(v21, v23);
        *(_QWORD *)(v24 + 24) = 52LL;
LABEL_14:
        WdLogEvent5_WdError(v24);
        return 3221225485LL;
      }
      v20 = *(unsigned int *)(a4 + 12);
      if ( (v20 & 5) != 0 )
      {
        v24 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v24 + 24) = 57LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    LODWORD(v20) = v20 & 0xFFFFFEFF;
    *(_DWORD *)(a4 + 12) = v20;
  }
  v26 = (_DWORD *)(a4 + 8);
  v75 = 0;
  v27 = *(_DWORD *)(a4 + 8);
  v28 = 0;
  v69 = 0LL;
  if ( v27 == 5 )
  {
    v28 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v27 != 6 )
      goto LABEL_26;
    v28 = *(_DWORD *)(a4 + 48);
  }
  v21 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 280LL);
  if ( (_DWORD)v21 == 1 )
    v28 = 1;
  if ( v28 >= 1 << v21 )
    v28 = (1 << v21) - 1;
  if ( v27 == 6 )
  {
    v20 = (unsigned int)v20 | 0x17;
    *(_DWORD *)(a4 + 12) = v20;
  }
LABEL_26:
  Global = DXGGLOBAL::GetGlobal(v21, v20);
  v71 = (PERESOURCE *)Global;
  v72 = 0;
  if ( !Global )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31, v30);
    *(_QWORD *)(v32 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v32);
    Global = (struct DXGGLOBAL *)v71;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v35 + 24) = 2432LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v72 )
  {
    v36 = WdLogNewEntry5_WdCriticalError(v34, v33);
    *(_QWORD *)(v36 + 40) = &v71;
    *(_QWORD *)(v36 + 24) = 275LL;
    *(_QWORD *)(v36 + 32) = 4LL;
    *(_OWORD *)(v36 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  v37 = v71;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v37[65], 1u);
  v72 = 1;
  v40 = DXGGLOBAL::GetGlobal(v39, v38);
  v41 = (int)a5;
  LODWORD(v42) = DXGGLOBAL::CreateSyncObject(
                   v40,
                   a3,
                   a1,
                   v28,
                   a4 + 8,
                   (_DWORD)a5,
                   a2,
                   0LL,
                   &v69,
                   a8,
                   (unsigned __int64)&v75 & -(__int64)(a1 != 0),
                   a9);
  if ( v72 )
  {
    v72 = 0;
    ExReleaseResourceLite(v71[65]);
    KeLeaveCriticalRegion();
  }
  if ( (int)v42 < 0 )
    return (unsigned int)v42;
  v43 = v69;
  *(_DWORD *)(a4 + 88) = v75;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v43 + 18);
  *a7 = v43;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() && (*(_DWORD *)(a4 + 12) & 0x100) != 0 )
    *((_DWORD *)v43 + 49) |= 0x30u;
  if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 209LL) )
    return (unsigned int)v42;
  v46 = a6;
  if ( a6 )
  {
    *((_BYTE *)v43 + 278) = 1;
LABEL_72:
    *((_DWORD *)v43 + 19) = v46;
    return (unsigned int)v42;
  }
  if ( a1 )
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(a1 + 40));
  else
    HostProcess = 0;
  if ( !HostProcess && a1 )
  {
    v48 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v48 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v48);
    return 3221225473LL;
  }
  if ( *v26 == 4 )
  {
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    {
      v49 = (PVOID)*((_QWORD *)v43 + 10);
    }
    else
    {
      v50 = *(void **)(a4 + 16);
      Object = 0LL;
      v51 = ObReferenceObjectByHandle(v50, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v42 = v51;
      if ( v51 < 0 )
      {
        v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
        *(_QWORD *)(v55 + 24) = v42;
        WdLogEvent5_WdWarning(v55);
        return (unsigned int)v42;
      }
      v49 = Object;
      *((_QWORD *)v43 + 10) = Object;
    }
    *(_QWORD *)(a4 + 16) = v49;
  }
  *(_OWORD *)v73 = 0LL;
  *(_OWORD *)v74 = 0LL;
  if ( a1 )
    v56 = *(unsigned int *)(a1 + 440);
  else
    v56 = 0LL;
  SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                 *(_QWORD *)(v76 + 16) + 4240LL,
                 HostProcess,
                 v56,
                 a4,
                 v41,
                 v73);
  v42 = SyncObject;
  if ( SyncObject >= 0 )
  {
    if ( (unsigned int)(*v26 - 5) <= 1 )
    {
      v61 = *a8;
      *(_DWORD *)(v61 + 44) = v73[0];
      v62 = *(_QWORD *)&v73[2];
      *(_QWORD *)(v61 + 48) = *(_QWORD *)&v73[2];
      if ( *v26 == 5 )
        *(_QWORD *)(a4 + 32) = v62;
      else
        *(_QWORD *)(a4 + 40) = v62;
      v63 = (__int64 *)(v61 + 56);
      v64 = MapGuestFenceCpuVaToHost(
              v74[0],
              (void **)(v61 + 56),
              (unsigned __int64 *)(v61 + 80),
              (unsigned int *)(v61 + 88));
      v42 = v64;
      if ( v64 >= 0 )
      {
        v68 = *v63;
        if ( *v26 == 5 )
          *(_QWORD *)(a4 + 24) = v68;
        else
          *(_QWORD *)(a4 + 32) = v68;
      }
      else
      {
        v67 = WdLogNewEntry5_WdError(v66, v65);
        *(_QWORD *)(v67 + 24) = v42;
        *(_QWORD *)(v67 + 32) = 246LL;
        WdLogEvent5_WdError(v67);
      }
    }
    else if ( v73[0] )
    {
      LODWORD(v42) = DXGSYNCOBJECT::SetHostHandle(v43, v75, v73[0]);
    }
    if ( (*((_BYTE *)v43 + 196) & 1) == 0 )
      return (unsigned int)v42;
    v46 = v73[1];
    *((_BYTE *)v43 + 278) = 0;
    goto LABEL_72;
  }
  v60 = WdLogNewEntry5_WdError(v59, v58);
  *(_QWORD *)(v60 + 24) = v42;
  *(_QWORD *)(v60 + 32) = 221LL;
  WdLogEvent5_WdError(v60);
  return (unsigned int)v42;
}
