/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDA48
 * Callers:
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01EF7C8 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01EF824 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D7560 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDCD0 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01B4018 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01B622C (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C02ECB20 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDBA0 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v5; // rbx
  int v7; // esi
  struct DXGALLOCATION *v10; // rdi

  LODWORD(v5) = 0;
  v7 = 0;
  do
  {
    v10 = *a4;
    if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, *a4) )
    {
      if ( !*((_QWORD *)v10 + 5) )
      {
        WdLogSingleEntry1(1LL, 7074LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NULL != pCurrentAlloc->m_pOwningResource",
          7074LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v10);
      DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v10 + 5));
      LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                          + 8LL)
                                                                              + 232LL))(
                      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                      v10);
      if ( (int)v5 < 0 )
      {
        v5 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v10, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v10 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v10 + 11);
        WdLogSingleEntry1(3LL, v5);
        if ( (int)v5 < 0 )
          break;
      }
    }
    ++v7;
    ++a4;
  }
  while ( !v7 );
  return (unsigned int)v5;
}
