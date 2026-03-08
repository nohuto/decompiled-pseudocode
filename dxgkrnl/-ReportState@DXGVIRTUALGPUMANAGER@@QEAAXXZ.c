/*
 * XREFs of ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0364924
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BCBFC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C0364818 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
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
