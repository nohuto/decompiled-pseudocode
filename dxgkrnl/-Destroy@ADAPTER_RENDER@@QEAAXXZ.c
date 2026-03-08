/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EBE14 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EC0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C00164F0 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01DA758 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C036341C (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  PERESOURCE *Global; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rsi
  __int64 v7; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+51h] [rbp+9h]

  v13 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v12);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  if ( *((_QWORD *)this + 113) )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 113), 0);
    *((_QWORD *)this + 113) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v5 = (_QWORD *)((char *)this + 296);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v5; i = (_QWORD *)*i )
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
      (DXGPROCESS_RENDER_ADAPTER_INFO *)(i - 11),
      (struct DXGPROCESS *)*(i - 3),
      this);
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 96) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 16LL))();
    *((_QWORD *)this + 96) = 0LL;
  }
  if ( *((_QWORD *)this + 93) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 32LL))();
    *((_QWORD *)this + 93) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  while ( (_QWORD *)*v5 != v5 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v5 - 24LL), (struct ADAPTER_RENDER **)(*v5 - 88LL));
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 122, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v7 = 0LL;
  for ( j = 2; (unsigned int)v7 < *((_DWORD *)this + 252); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 127) + 8 * v7);
    if ( v8 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
  }
  operator delete(*((void **)this + 127));
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  if ( v13 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
}
