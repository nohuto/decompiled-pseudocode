/*
 * XREFs of ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164DD8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02CD270 (DxgkGetSharedPrimaryHandle.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001414 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x1C000B124 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DelayCreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v6; // rsi
  unsigned int *v7; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r14
  ADAPTER_DISPLAY *v14; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int CddAllocations; // eax
  __int64 v17; // rsi

  v6 = a3;
  v7 = a4;
  if ( a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1508LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1508LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1509LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1509LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::UsingDelayCreateCddAllocation(*((DXGADAPTER **)this + 2)) )
    return 3221225659LL;
  v10 = v6;
  v11 = 4000 * v6;
  if ( *(_QWORD *)(*((_QWORD *)this + 16) + 4000 * v6 + 88) )
  {
    if ( !ADAPTER_DISPLAY::IsCddPrimaryStale(this, v6) )
      return 3221225659LL;
  }
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v6)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v6) != 3 )
  {
    return 3221225659LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a6 )
    {
      WdLogSingleEntry1(1LL, 1530LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCoreAccess != NULL", 1530LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::Release(a6);
    v12 = COREDEVICEACCESS::AcquireExclusive((__int64)a6, 1LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry2(2LL, a2, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire device core access exclusive on device 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v13,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v7 = a4;
  }
  v14 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 2920LL);
  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, v6);
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(v14, a2, v6, DisplayModeInfo, a6);
  v17 = CddAllocations;
  if ( CddAllocations < 0 )
  {
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v10, CddAllocations);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create CDD primary allocations on Adapter 0x%I64x for VidPnSource 0x%I64x, (Status = 0x%I64x).",
      *((_QWORD *)this + 2),
      v10,
      v17,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  else
  {
    *v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v11 + 88) + 16LL);
    *a5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v11 + 600) + 16LL);
    return 0LL;
  }
}
