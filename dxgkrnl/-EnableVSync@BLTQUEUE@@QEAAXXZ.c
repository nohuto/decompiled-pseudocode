void __fastcall BLTQUEUE::EnableVSync(struct _KTHREAD **this)
{
  int v2; // eax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  *((_DWORD *)this + 238) |= 8u;
  v2 = *((_DWORD *)this + 99);
  v5 = 2;
  if ( v2 > 0 )
    BLTQUEUE::StartVSync(this, 1LL, 6LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
