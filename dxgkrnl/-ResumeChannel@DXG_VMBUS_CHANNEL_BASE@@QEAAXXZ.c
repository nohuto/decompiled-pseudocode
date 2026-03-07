void __fastcall DXG_VMBUS_CHANNEL_BASE::ResumeChannel(DXG_VMBUS_CHANNEL_BASE *this)
{
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v2,
    (DXG_VMBUS_CHANNEL_BASE *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  if ( *(_QWORD *)this && *((_BYTE *)this + 70) )
  {
    if ( *((_BYTE *)this + 71) )
    {
      ((void (*)(void))qword_1C013CEF0)();
      *((_BYTE *)this + 71) = 0;
    }
    *((_BYTE *)this + 70) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
