/*
 * XREFs of ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C03693D4
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C1B1C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C03692C8 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::ReportState(struct _KTHREAD **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  if ( bTracingEnabled )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5, 0);
    DXGPUSHLOCK::AcquireShared(v7);
    v4 = (_QWORD **)(this + 13);
    v8 = 1;
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
      DXGK_VIRTUAL_GPU::ReportState((DXGK_VIRTUAL_GPU *)(i - 15), v2, v3);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  }
}
