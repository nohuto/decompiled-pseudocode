/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0371044
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C030DD7C (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C036E2F8 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C036EC5C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct VMBCHANNEL__ **this)
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
    VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this, v4);
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
