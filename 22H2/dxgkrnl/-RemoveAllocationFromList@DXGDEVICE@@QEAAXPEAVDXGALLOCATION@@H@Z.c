/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02EC6E4
 * Callers:
 *     DxgkDestroyClientAllocation @ 0x1C02D9980 (DxgkDestroyClientAllocation.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02EC8D8 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C02EC818 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]

  if ( *((_DWORD *)this + 152) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8294LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
      8294LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_QWORD *)a2 + 5);
  if ( v6 )
  {
    if ( !a3 )
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 80));
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)(*((_QWORD *)a2 + 5) + 24LL));
    if ( !a3 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*((_QWORD *)a2 + 5) + 80LL));
  }
  else if ( a3 )
  {
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 26, 0);
    DXGPUSHLOCK::AcquireExclusive(v8);
    v9 = 2;
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
