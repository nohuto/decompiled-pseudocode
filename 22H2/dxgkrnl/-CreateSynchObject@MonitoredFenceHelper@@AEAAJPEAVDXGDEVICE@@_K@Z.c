/*
 * XREFs of ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02BCAC0
 * Callers:
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C02BD718 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C02907DC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall MonitoredFenceHelper::CreateSynchObject(MonitoredFenceHelper *this, struct DXGDEVICE *a2, UINT64 a3)
{
  D3DKMT_HANDLE v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _OBJECT_HANDLE_INFORMATION *v15; // [rsp+28h] [rbp-39h]
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v16; // [rsp+58h] [rbp-9h] BYREF
  struct DXGSYNCOBJECT *v17; // [rsp+C8h] [rbp+67h] BYREF

  memset(&v16, 0, sizeof(v16));
  v6 = *((_DWORD *)a2 + 109);
  v7 = *((_QWORD *)a2 + 2);
  v16.Info.SynchronizationMutex.InitialState = 0;
  v17 = 0LL;
  v16.hDevice = v6;
  v16.Info.Semaphore.InitialCount = *((_DWORD *)this + 10);
  v16.Info.Type = D3DDDI_PERIODIC_MONITORED_FENCE;
  v16.Info.PeriodicMonitoredFence.EngineAffinity = 1;
  v16.Info.Flags.Value = v16.Info.Flags.Value & 0xFFFFFF5F | 0x80;
  LODWORD(v15) = 0;
  v16.Info.PeriodicMonitoredFence.Time = a3;
  v8 = CreateSynchronizationObjectInternal((__int64)a2, 0, v7, (__int64)&v16, v15, 0, &v17, (__int64 *)this + 4, 0LL);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    *(_QWORD *)(v13 + 32) = 1886LL;
    WdLogEvent5_WdWarning(v13);
  }
  return CreatePeriodicMonitoredFenceNotificationInternal(
           *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
           *(struct ADAPTER_RENDER ***)(*((_QWORD *)a2 + 2) + 16LL),
           v17,
           &v16,
           1);
}
