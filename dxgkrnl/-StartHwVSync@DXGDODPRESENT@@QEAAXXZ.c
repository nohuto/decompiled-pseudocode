void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this)
{
  __int64 v2; // r8
  bool v3; // sf
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v3 = *((int *)this + 34) < 0;
  v6 = 2;
  if ( v3 )
  {
    WdLogSingleEntry1(1LL, 4220LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutStandingHwVsyncRequests >= 0",
      4220LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ++*((_DWORD *)this + 34) == 1 )
  {
    LOBYTE(v2) = 1;
    if ( (int)DXGADAPTER::DdiControlInterrupt(
                *((DXGADAPTER **)this[11] + 2),
                DXGK_INTERRUPT_DISPLAYONLY_VSYNC,
                v2,
                0xFFFFFFFD) < 0 )
    {
      WdLogSingleEntry1(1LL, 4228LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4228LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
