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
