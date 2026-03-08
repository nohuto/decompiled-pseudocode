/*
 * XREFs of ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0046D28
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C02B9058 (-IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayedPrimary(struct _KTHREAD **this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 38, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v10 = 2;
  if ( this[v3 + 131] == a3 )
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
    v7 = this[235];
    return v7 == *((struct _KTHREAD **)this[2] + 2)
        && ADAPTER_DISPLAY::IsAllocationDisplayed(*((ADAPTER_DISPLAY **)v7 + 365), a3) != 0;
  }
}
