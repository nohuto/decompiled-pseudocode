void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  DXGDEVICE **v1; // rsi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rbx
  unsigned int v6; // edx
  DXGSYNCOBJECT *v7; // rcx
  __int64 v8; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v10; // rcx
  PERESOURCE *Global; // rax
  struct DXGPROCESS *v12; // rbx
  struct DXGGLOBAL *v13; // rax
  _BYTE v14[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]

  v1 = (DXGDEVICE **)((char *)this + 16);
  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*v1, this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    v5 = Current;
    v15 = (struct DXGPROCESS *)((char *)Current + 248);
    if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGPUSHLOCK::AcquireExclusive(v15);
    v6 = *((_DWORD *)this + 10);
    v16 = 2;
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v5 + 280), v6);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v7 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
    if ( (*((_DWORD *)v7 + 71) & 2) != 0 )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      v8 = *(_QWORD *)(*((_QWORD *)*v1 + 2) + 760LL);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(v7);
      v10 = *(_QWORD *)(*((_QWORD *)*v1 + 5) + 64LL);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 8);
      (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v8 + 8) + 952LL))(
        v10,
        MonitoredFenceStorage);
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 4), 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v12 = DXGPROCESS::GetCurrent(v3);
    v13 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v13 + 214),
      *((_DWORD *)v12 + 126),
      *((_DWORD *)this + 11));
  }
  *v1 = 0LL;
}
