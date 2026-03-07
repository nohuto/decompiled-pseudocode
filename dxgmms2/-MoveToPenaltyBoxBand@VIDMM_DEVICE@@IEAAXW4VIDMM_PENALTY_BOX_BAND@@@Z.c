void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 a1, int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( *(struct _KTHREAD **)(*(_QWORD *)a1 + 44520LL) == KeGetCurrentThread() )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, (struct _KTHREAD **)(*(_QWORD *)a1 + 44512LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v5);
    v6 = 2;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  }
}
