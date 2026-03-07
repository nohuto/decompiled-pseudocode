void __fastcall DXGDEVICE::DrainResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rax
  struct DXGRESOURCE *v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v7 = 2;
  while ( 1 )
  {
    v2 = this[7];
    if ( !v2 )
      break;
    v3 = *((_QWORD *)v2 + 5);
    if ( v3 )
      *(_QWORD *)(v3 + 32) = 0LL;
    v4 = this[7];
    this[7] = (struct _KTHREAD *)*((_QWORD *)v4 + 5);
    DXGDEVICE::DestroyResource((DXGDEVICE *)this, v4, 0LL, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
