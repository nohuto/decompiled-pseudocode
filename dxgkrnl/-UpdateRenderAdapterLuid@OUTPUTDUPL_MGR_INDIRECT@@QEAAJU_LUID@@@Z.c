__int64 __fastcall OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(struct _KTHREAD **this, struct _LUID a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 6, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  *((_DWORD *)this + 24) = 0;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  OUTPUTDUPL_MGR::ProcessAdapterReset(this + 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this + 3, 0LL, 1);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 6, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  this[16] = (struct _KTHREAD *)a2;
  v7 = 2;
  *((_DWORD *)this + 24) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return 0LL;
}
