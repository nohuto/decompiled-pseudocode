/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0124124
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00031B4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01174F4 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0114D10 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0125180 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C0125A14 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C023BE98 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0248798 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGSYNCOBJECT *v13; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*((DXGDEVICE **)this + 2), this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
    v7 = Current;
    v22 = (struct DXGPROCESS *)((char *)Current + 208);
    if ( Current != (struct DXGPROCESS *)-208LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
      {
        v15 = WdLogNewEntry5_WdAssertion(CurrentThread, (char *)Current + 208);
        *(_QWORD *)(v15 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v15);
      }
    }
    DXGPUSHLOCK::AcquireExclusive(v22);
    v9 = *((unsigned int *)this + 10);
    v23 = 2;
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v7 + 240), v9);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v10 + 277) )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v10 + 192) - 5) > 1 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v3, v2);
        *(_QWORD *)(v16 + 24) = 353LL;
        WdLogEvent5_WdAssertion(v16);
      }
      v11 = *((_QWORD *)this + 2);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 64LL);
      if ( v12 )
        v12 = *(_QWORD *)(v12 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 640LL) + 8LL) + 960LL))(
        v12,
        v10 + 120);
    }
  }
  v13 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v13 )
  {
    Global = DXGGLOBAL::GetGlobal(v3, v2);
    DXGGLOBAL::DestroySyncObject(Global, v13, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v17 = *((_DWORD *)DXGPROCESS::GetCurrent(v3, v2, v4, v5) + 106);
    v20 = DXGGLOBAL::GetGlobal(v19, v18);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v20 + 197),
      v17,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
