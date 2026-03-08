/*
 * XREFs of ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022052E
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01A3710 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D2604 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C018C490 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGALLOCATION *a2,
        PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rbx
  char v6; // bl
  char *v7; // rdx

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)a2);
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v6 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v6 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 11);
  if ( v6 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3, v7);
}
