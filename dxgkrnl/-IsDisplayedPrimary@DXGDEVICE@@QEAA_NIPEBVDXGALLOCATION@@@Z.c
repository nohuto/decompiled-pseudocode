bool __fastcall DXGDEVICE::IsDisplayedPrimary(struct _KTHREAD **this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 38, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v10 = 2;
  if ( this[v3 + 131] == a3 )
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
    v7 = this[235];
    return v7 == *((struct _KTHREAD **)this[2] + 2)
        && ADAPTER_DISPLAY::IsAllocationDisplayed(*((ADAPTER_DISPLAY **)v7 + 365), a3) != 0;
  }
}
