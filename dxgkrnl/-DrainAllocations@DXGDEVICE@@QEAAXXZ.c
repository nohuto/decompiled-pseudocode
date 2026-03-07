void __fastcall DXGDEVICE::DrainAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // r9
  struct _KTHREAD *v3; // rdx
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v6 = 2;
  while ( 1 )
  {
    v3 = this[6];
    if ( !v3 )
      break;
    v2 = this[6];
    this[6] = (struct _KTHREAD *)*((_QWORD *)v3 + 8);
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    DXGDEVICE::DestroyAllocations((DXGDEVICE *)this, 0LL, 0, v2, 0LL, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
