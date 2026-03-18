/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C03756FC
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0312BAC (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C03729B0 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0373314 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct _KTHREAD **this)
{
  bool v2; // zf
  struct _DEVICE_OBJECT *v4; // rdx
  int VmBusChannel; // eax
  __int64 v6; // rdi
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v2 = *((_BYTE *)this + 68) == 0;
  v9 = 2;
  if ( v2 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
    VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this, v4);
    v6 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry1(2LL, VmBusChannel);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create global VM bus channel in the VM, returning 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v6;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
    return 0LL;
  }
}
