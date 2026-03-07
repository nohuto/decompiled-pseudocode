void __fastcall DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(DXGSYNCOBJECT **this)
{
  __int64 v2; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v4; // rcx
  DXGSYNCOBJECT *v5; // rax

  DXGDEVICESYNCOBJECT::DestroyCoreState((DXGDEVICESYNCOBJECT *)this);
  if ( this[7] )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 760LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(this[4]);
    v4 = *(_QWORD *)(*((_QWORD *)this[2] + 5) + 64LL);
    if ( v4 )
      v4 = *(_QWORD *)(v4 + 8);
    (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v2 + 8) + 952LL))(
      v4,
      MonitoredFenceStorage);
    this[7] = 0LL;
  }
  v5 = this[4];
  if ( v5 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v5 + 6);
    this[4] = 0LL;
  }
}
