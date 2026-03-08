/*
 * XREFs of ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03D0060
 * Callers:
 *     ?StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03D08B0 (-StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C017F71C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

void __fastcall DXGDODPRESENT::StopHwVSync(struct _KTHREAD **this)
{
  bool v2; // sf
  bool v3; // zf
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = *((int *)this + 34) < 0;
  v6 = 2;
  if ( v2 )
  {
    WdLogSingleEntry1(1LL, 4238LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutStandingHwVsyncRequests >= 0",
      4238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = (*((_DWORD *)this + 34))-- == 1;
  if ( v3
    && (int)DXGADAPTER::DdiControlInterrupt(
              *((DXGADAPTER **)this[11] + 2),
              DXGK_INTERRUPT_DISPLAYONLY_VSYNC,
              0LL,
              0xFFFFFFFD) < 0 )
  {
    WdLogSingleEntry1(1LL, 4245LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4245LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
