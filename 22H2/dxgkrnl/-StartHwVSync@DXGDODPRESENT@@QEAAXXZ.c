/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03D4794
 * Callers:
 *     ?StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03D50A0 (-StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C01974CC (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

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
    WdLogSingleEntry1(1LL, 4217LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutStandingHwVsyncRequests >= 0",
      4217LL,
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
      WdLogSingleEntry1(1LL, 4225LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4225LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
