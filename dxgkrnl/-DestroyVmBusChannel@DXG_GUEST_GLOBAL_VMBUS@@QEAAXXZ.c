void __fastcall DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(DXG_GUEST_GLOBAL_VMBUS *this)
{
  struct VMBCHANNEL__ *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v4,
    (DXG_GUEST_GLOBAL_VMBUS *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  v2 = *(struct VMBCHANNEL__ **)this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 68) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  if ( v2 )
  {
    DestroyVmBusChannel(v2);
    v5 = 0;
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))GlobalVmBusStatChangeCallback,
      (__int64)&v5,
      1);
  }
}
