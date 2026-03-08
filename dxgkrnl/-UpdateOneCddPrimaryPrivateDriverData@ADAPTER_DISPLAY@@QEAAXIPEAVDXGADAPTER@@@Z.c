/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01DD8A0
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01B4EEC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  UINT v14; // eax
  ADAPTER_RENDER *v15; // rcx
  const wchar_t *v16; // r9
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v17; // [rsp+50h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v18; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v19[24]; // [rsp+B0h] [rbp+7h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = 4000LL * a2;
  v8 = *(_QWORD *)(v5 + v6 + 88);
  if ( !v8 )
    return;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
  if ( !*(_DWORD *)(v5 + v6 + 1008) )
  {
LABEL_13:
    *(_DWORD *)(v9 + 12) |= 4u;
    return;
  }
  if ( !*((_QWORD *)a3 + 366) )
  {
    WdLogSingleEntry1(1LL, 7965LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7965LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
  {
    memset(&v18, 0, sizeof(v18));
    v18.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 366), &v18, (__int64)a3) < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      v16 = L"Failed to get primary allocation description, marking Cdd primary 0x%I64x as having invalid PrivateDriverData";
    }
    else
    {
      v11 = *((_QWORD *)this + 16);
      if ( v18.PrivateDriverFormatAttribute == *(_DWORD *)(v11 + v6 + 1060) )
        return;
      *(_QWORD *)&v17.StandardAllocationType = 1LL;
      *(_QWORD *)&v19[16] = 0LL;
      *(&v17.AllocationPrivateDriverDataSize + 1) = 0;
      v17.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v19;
      *(_OWORD *)v19 = 0LL;
      v17.PhysicalAdapterIndex = 0;
      *(_QWORD *)v19 = *(_QWORD *)(v11 + v6 + 1008);
      *(_QWORD *)&v19[12] = *(_QWORD *)(v11 + v6 + 1024);
      v12 = *(_DWORD *)(v11 + v6 + 1016);
      v13 = *(_QWORD *)(v8 + 48);
      *(_DWORD *)&v19[8] = v12;
      *(_DWORD *)&v19[20] = a2;
      v17.pAllocationPrivateDriverData = *(void **)(v13 + 32);
      v14 = *(_DWORD *)(v13 + 40);
      v15 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 366);
      v17.AllocationPrivateDriverDataSize = v14;
      v17.pResourcePrivateDriverData = *(void **)(v9 + 120);
      v17.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 128);
      if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v17, v10) >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 16) + v6 + 1060) = v18.PrivateDriverFormatAttribute;
        return;
      }
      WdLogSingleEntry1(2LL, v8);
      v16 = L"Failed to get private driver data for primary, marking Cdd primary 0x%I64x as having invalid PrivateDriverData";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_13;
  }
}
