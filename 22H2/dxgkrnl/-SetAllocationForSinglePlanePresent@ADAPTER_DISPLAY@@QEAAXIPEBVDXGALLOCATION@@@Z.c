/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C01879D4
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0004118 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0172028 (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4000 * v3), a3);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
