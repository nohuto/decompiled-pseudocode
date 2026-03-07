void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  struct VMBCHANNEL__ *v2; // rdi
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v3,
    (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  v2 = *(struct VMBCHANNEL__ **)this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 68) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
  if ( v2 )
    DestroyVmBusChannel(v2);
}
