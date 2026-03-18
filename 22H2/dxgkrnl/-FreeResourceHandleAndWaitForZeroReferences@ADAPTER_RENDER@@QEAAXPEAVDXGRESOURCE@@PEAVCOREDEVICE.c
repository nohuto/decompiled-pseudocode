/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ABF8
 * Callers:
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018AB64 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01B5930 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D74A0 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000461C (-FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0024D54 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_41457977__private_IsEnabledDeviceUsage @ 0x1C0024DC0 (Feature_41457977__private_IsEnabledDeviceUsage.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C018AD20 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGRESOURCE *a2,
        PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rsi
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // r9
  int v9; // edx
  char v10; // bp
  char *v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( (unsigned int)Feature_41457977__private_IsEnabledDeviceUsage() )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, Current);
    v6 = *((_DWORD *)a2 + 4);
    v7 = (v6 >> 6) & 0xFFFFFF;
    if ( v7 < *((_DWORD *)Current + 74) )
    {
      v8 = *((_QWORD *)Current + 35);
      v9 = *(_DWORD *)(v8 + 16LL * v7 + 8);
      if ( ((v6 >> 25) & 0x60) == (v9 & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
        *(_DWORD *)(v8 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DxgkUnreferenceDxgResource(a2);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  }
  else
  {
    DXGPROCESS::FreeResourceHandleSafe(Current, a2);
  }
  v10 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v10 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 9);
  if ( v10 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3, v11);
  if ( (unsigned int)Feature_41457977__private_IsEnabledDeviceUsage() )
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, *((_DWORD *)a2 + 4));
}
