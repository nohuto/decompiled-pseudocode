/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01B94C4
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0047790 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C018667C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C01B927C (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C01B9444 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007090 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0187554 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C01B95F4 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0372DC0 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383B88 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

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
