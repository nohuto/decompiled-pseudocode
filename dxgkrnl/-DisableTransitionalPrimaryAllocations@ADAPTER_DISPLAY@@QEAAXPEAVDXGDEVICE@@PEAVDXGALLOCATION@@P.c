/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02B7824
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C02E9218 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  unsigned int v8; // edi
  char *v9; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3617LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 3617LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3618LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      3618LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3619LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 3619LL, 0LL, 0LL, 0LL, 0LL);
  }
  while ( a3 )
  {
    if ( !*((_QWORD *)a3 + 6) )
    {
      WdLogSingleEntry1(1LL, 3625LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pAllocation != NULL",
        3625LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 3626LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pAllocation->m_Primary",
        3626LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
    if ( v8 >= *((_DWORD *)this + 24) )
    {
      WdLogSingleEntry1(1LL, 3629LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < GetNumVidPnSources()",
        3629LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)a2 + 235) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
    {
      WdLogSingleEntry1(1LL, 3631LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->IsFullWDDMDevice(VidPnSourceId)",
        3631LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, v8) == a3 )
    {
      WdLogSingleEntry1(1LL, 3632LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->GetDisplayedPrimary(VidPnSourceId) != pCurrentAlloc",
        3632LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 3633LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pCurrentAlloc->m_pAllocation->m_Invalidated",
        3633LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) == a2 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 688LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 768LL),
             *((_QWORD *)a3 + 3),
             0LL) )
      {
        COREDEVICEACCESS::Release(a4);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 760LL) + 8LL)
                                                       + 696LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 2) + 768LL),
          *((_QWORD *)a3 + 3),
          v8);
        COREDEVICEACCESS::AcquireSharedUncheck(a4, v9);
      }
    }
    DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, a3, v8);
    a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
  }
}
