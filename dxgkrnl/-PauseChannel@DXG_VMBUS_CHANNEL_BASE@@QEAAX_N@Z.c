void __fastcall DXG_VMBUS_CHANNEL_BASE::PauseChannel(DXG_VMBUS_CHANNEL_BASE *this, char a2)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v4,
    (DXG_VMBUS_CHANNEL_BASE *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  if ( *(_QWORD *)this )
  {
    *((_BYTE *)this + 70) = 1;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
    if ( a2 )
    {
      ((void (__fastcall *)(_QWORD))qword_1C013CEB8)(*(_QWORD *)this);
      *((_BYTE *)this + 71) = 1;
    }
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  }
}
