__int64 __fastcall MonitoredFenceHelper::CreateSynchObject(MonitoredFenceHelper *this, struct DXGDEVICE *a2, UINT64 a3)
{
  D3DKMT_HANDLE v6; // eax
  __int64 v7; // r8
  int v8; // eax
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v10; // [rsp+58h] [rbp-9h] BYREF
  struct DXGSYNCOBJECT *v11; // [rsp+C8h] [rbp+67h] BYREF

  memset(&v10, 0, sizeof(v10));
  v6 = *((_DWORD *)a2 + 117);
  v7 = *((_QWORD *)a2 + 2);
  v10.Info.SynchronizationMutex.InitialState = 0;
  v11 = 0LL;
  v10.hDevice = v6;
  v10.Info.Semaphore.InitialCount = *((_DWORD *)this + 10);
  v10.Info.Type = D3DDDI_PERIODIC_MONITORED_FENCE;
  v10.Info.PeriodicMonitoredFence.EngineAffinity = 1;
  v10.Info.Flags.Value = v10.Info.Flags.Value & 0xFFFFFF5F | 0x80;
  v10.Info.PeriodicMonitoredFence.Time = a3;
  v8 = CreateSynchronizationObjectInternal(
         (__int64)a2,
         0,
         v7,
         (__int64)&v10,
         0,
         0,
         &v11,
         (struct DXGDEVICESYNCOBJECT **)this + 4,
         0LL);
  if ( v8 < 0 )
    WdLogSingleEntry2(3LL, v8, 2155LL);
  return CreatePeriodicMonitoredFenceNotificationInternal(
           *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
           *(struct ADAPTER_RENDER ***)(*((_QWORD *)a2 + 2) + 16LL),
           v11,
           &v10,
           1);
}
