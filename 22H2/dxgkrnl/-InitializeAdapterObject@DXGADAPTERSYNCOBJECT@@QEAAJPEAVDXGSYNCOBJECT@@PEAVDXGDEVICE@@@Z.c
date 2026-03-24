/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DCDB4
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C00DCAA8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0291180 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0008764 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0018C2C (-VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_S.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0027B94 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1C00D6190 (-DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7ED0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C015CE8C (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct DXGDEVICE *a3)
{
  char *v3; // rbp
  __int64 v4; // rbx
  __int64 v8; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // r9
  __int64 v10; // r8
  int SyncObject; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rax
  int v18; // r15d
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *v26; // rcx
  __int64 v27; // r8
  ADAPTER_RENDER *v28; // rcx
  int CpuEvent; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rcx
  char v36; // al
  __int64 v37; // rbx
  char *v38; // rsi
  char *v39; // rdi
  char **v40; // rax
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int128 v42; // [rsp+50h] [rbp-38h] BYREF
  __int128 v43; // [rsp+60h] [rbp-28h]

  v3 = (char *)this + 32;
  v4 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 1760LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_BYTE *)a2 + 277) )
    goto LABEL_31;
  if ( (unsigned int)(*((_DWORD *)a2 + 48) - 5) <= 1 )
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2, (__int64)a2);
  else
    MonitoredFenceStorage = 0LL;
  v10 = 0LL;
  if ( (*((_DWORD *)a2 + 49) & 4) != 0 )
    v10 = *((_QWORD *)a2 + 39);
  SyncObject = VIDSCH_EXPORT::VidSchCreateSyncObject(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                 *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
                 (__int64)a2,
                 (__int64)a2 + 192,
                 *((_DWORD *)a2 + 68),
                 v10,
                 v41,
                 (__int64)v3,
                 (__int64)MonitoredFenceStorage);
  v15 = SyncObject;
  if ( SyncObject < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v15;
  }
  v18 = *((_DWORD *)a2 + 49);
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() || (v18 & 0x100) == 0 || !a3 )
    goto LABEL_31;
  v19 = *((_QWORD *)a3 + 5);
  if ( (*(_BYTE *)(v19 + 347) & 0x20) != 0 )
  {
    v26 = (struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)*((_QWORD *)a2 + 25);
    *((_QWORD *)this + 5) = v26;
  }
  else
  {
    v20 = operator new();
    *((_QWORD *)this + 5) = v20;
    if ( !v20 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = 1798LL;
      WdLogEvent5_WdLowResource(v25);
      return 3221225495LL;
    }
    *(_BYTE *)(v20 + 19) = 1;
    v26 = (struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)*((_QWORD *)this + 5);
  }
  DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::AcquireReference(v26);
  v42 = 0LL;
  v43 = 0LL;
  if ( (v18 & 0x10) == 0 )
  {
    v28 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    *((_QWORD *)&v42 + 1) = *((_QWORD *)this + 5);
    *(_QWORD *)&v42 = *((_QWORD *)a3 + 73);
    CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v28, (struct _DXGKARG_CREATECPUEVENT *)&v42, v27);
    v33 = CpuEvent;
    if ( CpuEvent < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v34 + 24) = a2;
      *(_QWORD *)(v34 + 32) = v33;
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v33;
    }
  }
  v35 = (_QWORD *)*((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v19 + 347) & 0x20) != 0 )
  {
    *v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 496) + 496LL) + 128LL);
    v36 = *(_BYTE *)(v19 + 347);
    if ( (v36 & 0x20) != 0 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v19 + 496) + 496LL);
    }
    else
    {
      if ( (v36 & 0x10) == 0 )
      {
LABEL_29:
        *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = v4;
        goto LABEL_30;
      }
      v37 = *(_QWORD *)(v19 + 496);
    }
    v4 = v37 + 128;
    goto LABEL_29;
  }
  v35[1] = *((_QWORD *)a2 + 10);
  **((_QWORD **)this + 5) = 0LL;
LABEL_30:
  *(_QWORD *)(*((_QWORD *)this + 5) + 48LL) = *((_QWORD *)&v43 + 1);
  *(_QWORD *)(*((_QWORD *)this + 5) + 40LL) = a2;
LABEL_31:
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  ADAPTER_RENDER::AddSyncObject(*((ADAPTER_RENDER **)this + 2), this);
  *((_BYTE *)this + 24) = 1;
  *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 49) & 4) != 0;
  if ( (*((_DWORD *)a2 + 49) & 4) != 0 )
  {
    v38 = (char *)a2 + 296;
    v39 = (char *)this + 48;
    v40 = (char **)*((_QWORD *)v38 + 1);
    if ( *v40 != v38 )
      __fastfail(3u);
    *(_QWORD *)v39 = v38;
    *((_QWORD *)v39 + 1) = v40;
    *v40 = v39;
    *((_QWORD *)v38 + 1) = v39;
  }
  return 0LL;
}
