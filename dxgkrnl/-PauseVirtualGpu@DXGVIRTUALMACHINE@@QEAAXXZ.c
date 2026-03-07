void __fastcall DXGVIRTUALMACHINE::PauseVirtualGpu(struct _KTHREAD **this)
{
  struct _KTHREAD **i; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 12, 0);
  DXGPUSHLOCK::AcquireShared(v4);
  v5 = 1;
  for ( i = (struct _KTHREAD **)this[5]; ; i = (struct _KTHREAD **)*i )
  {
    if ( i == this + 5 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(this + 20), 0);
      return;
    }
    if ( *((_BYTE *)i + 16) && !*((_BYTE *)i + 110) )
      break;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
