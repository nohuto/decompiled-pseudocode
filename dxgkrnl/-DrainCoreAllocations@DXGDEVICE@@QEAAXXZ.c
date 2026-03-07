void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // rsi
  __int64 v3; // rbx
  struct DXGALLOCATION *v4; // rdi
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v2 = this[6];
  v7 = 2;
  if ( v2 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 7);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 8);
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      DXGDEVICE::DestroyCoreAllocations(this, 0LL, v2);
      *((_QWORD *)v2 + 7) = v3;
      *((_QWORD *)v2 + 8) = v4;
      v2 = v4;
    }
    while ( v4 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
