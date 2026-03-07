void __fastcall DXGDEVICE::TestAndSetDisplayedPrimary(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  __int64 v4; // rbx
  const struct DXGALLOCATION *v7; // r8
  struct _KTHREAD *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v4 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 38, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v11 = 2;
  if ( this[v4 + 131] == a3 )
  {
    this[v4 + 131] = 0LL;
    *((_DWORD *)this + v4 + 294) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  v8 = this[235];
  if ( v8 == *((struct _KTHREAD **)this[2] + 2) )
    ADAPTER_DISPLAY::ReplaceDisplayedAllocation(*((ADAPTER_DISPLAY **)v8 + 365), a3, v7);
}
