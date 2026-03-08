/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C036A540
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AA68 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C005AB28 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C036ECE8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_PARAV *this)
{
  struct _KTHREAD *v2; // rax
  char *v3; // rsi
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 13) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v8);
      v2 = *(struct _KTHREAD **)this;
      v9 = 2;
      (*((void (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, _QWORD, _QWORD))v2 + 2))(this, 0LL, 0LL);
      DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      v3 = (char *)this + 320;
      while ( 1 )
      {
        v4 = *(char **)v3;
        if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
          __fastfail(3u);
        *(_QWORD *)v3 = v5;
        *(_QWORD *)(v5 + 8) = v3;
        *((_QWORD *)this + 37) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 288, 0LL);
        KeLeaveCriticalRegion();
        if ( v4 == v3 )
          break;
        DXGDEVICE::SetVirtualGpu((DXGDEVICE *)(v4 - 120), 0LL);
        DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
    }
    DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    operator delete(*(void **)(v6 + 32));
    *(_QWORD *)(*((_QWORD *)this + 20) + 32LL) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
}
