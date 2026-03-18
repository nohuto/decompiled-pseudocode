/*
 * XREFs of ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C032FB8C
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C02BCC98 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A9260 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C032E1DC (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

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
