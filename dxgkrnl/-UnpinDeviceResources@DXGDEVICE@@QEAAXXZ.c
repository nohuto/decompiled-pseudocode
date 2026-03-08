/*
 * XREFs of ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01E0E0C
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01E0DD0 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01E0EA8 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  struct DXGALLOCATION *i; // rdi
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = this[7];
  v6 = 2;
  while ( v2 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this[2] + 2)) )
    {
      WdLogSingleEntry1(1LL, 509LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
        509LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    for ( i = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      DXGDEVICE::DisablePinnedAllocation((DXGDEVICE *)this, i);
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
