void __fastcall DXGVIRTUALMACHINE::ActivateVirtualGpu(struct _KTHREAD **this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, this + 12, 0);
  DXGPUSHLOCK::AcquireExclusive(v3);
  ++*((_DWORD *)this + 1);
  v4 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
