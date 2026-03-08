/*
 * XREFs of ?GetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXPEAK0@Z @ 0x1C00E3C64
 * Callers:
 *     ?VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z @ 0x1C002CC40 (-VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::GetMemoryBudgetTarget(struct _KTHREAD **this, unsigned int *a2, unsigned int *a3)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 5134, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  *a2 = dword_1C0076594;
  *a3 = dword_1C0076590;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
