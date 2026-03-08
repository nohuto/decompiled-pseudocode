/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D2E34
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01A5270 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01D2DA0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D2708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0188E50 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGRESOURCE *a2,
        PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rbx
  char v6; // bl
  char *v7; // rdx

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)a2);
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v6 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v6 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 9);
  if ( v6 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3, v7);
}
