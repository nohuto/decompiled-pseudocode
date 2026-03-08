/*
 * XREFs of ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00E79C8
 * Callers:
 *     ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C002CE40 (-VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetMemoryBudgetTarget(struct _KTHREAD **this, int a2, int a3)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5134, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  dword_1C0076594 = a2;
  dword_1C007659C = a2;
  dword_1C0076590 = a3;
  dword_1C0076598 = a3;
  VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)this, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
