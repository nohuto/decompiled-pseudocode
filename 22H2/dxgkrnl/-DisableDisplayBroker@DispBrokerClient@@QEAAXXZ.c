/*
 * XREFs of ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001632C
 * Callers:
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1C00162E4 (--1DispBrokerClient@@QEAA@XZ.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01E4320 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DispBrokerClient::DisableDisplayBroker(struct _KTHREAD **this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v3);
  v4 = 2;
  *((_BYTE *)this + 8) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
