/*
 * XREFs of _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x1C0325540
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0329EEC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_(
        struct _KTHREAD **this,
        unsigned int *a2)
{
  unsigned int v4; // edx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 3, 0);
  DXGPUSHLOCK::AcquireShared(v7);
  v4 = *a2;
  v8 = 1;
  a2[1] = OUTPUTDUPL_MGR::QueryActiveContextCount((OUTPUTDUPL_MGR *)this, v4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return 0LL;
}
