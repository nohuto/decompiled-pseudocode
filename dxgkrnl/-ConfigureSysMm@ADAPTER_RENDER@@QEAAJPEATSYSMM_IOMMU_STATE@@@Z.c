/*
 * XREFs of ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205154
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205314 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C020542C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 */

__int64 __fastcall ADAPTER_RENDER::ConfigureSysMm(ADAPTER_RENDER *this, union SYSMM_IOMMU_STATE *a2)
{
  signed __int32 *v2; // r9
  signed __int32 v5; // eax
  const signed __int32 *v6; // r8
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  DXGADAPTER *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int64 v20; // rdi
  const wchar_t *v21; // r9
  __int128 v22; // [rsp+50h] [rbp-59h] BYREF
  __int128 v23; // [rsp+60h] [rbp-49h]
  struct _DXGKARG_QUERYADAPTERINFO v24; // [rsp+78h] [rbp-31h] BYREF
  PVOID P; // [rsp+A8h] [rbp-1h] BYREF
  char v26; // [rsp+B0h] [rbp+7h] BYREF
  int v27; // [rsp+D0h] [rbp+27h]

  v2 = (signed __int32 *)*((_QWORD *)this + 2);
  P = 0LL;
  v27 = 0;
  v5 = v2[720];
  v6 = v2 + 571;
  if ( (v5 & 1) != 0 && _bittest(v6, 0xBu) )
  {
    v7 = 2 - ((v5 & 0x10) != 0);
  }
  else
  {
    v7 = 0;
    if ( !_bittest(v6, 0xBu) )
      goto LABEL_8;
  }
  *(_QWORD *)&v24.Type = 22LL;
  *(_QWORD *)&v24.InputDataSize = 0LL;
  v24.pOutputData = &v22;
  *(_QWORD *)&v24.Flags.0 = 0LL;
  v22 = 0LL;
  HIDWORD(v24.hKmdProcessHandle) = 0;
  v24.pInputData = 0LL;
  v24.OutputDataSize = 16;
  v8 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v2, &v24, (__int64)v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v20 = v8;
    WdLogSingleEntry1(2LL, v8);
    v21 = L"Failed to query number of hardware reserved ranges. Status 0x%I64x";
    goto LABEL_18;
  }
  if ( (_DWORD)v22 )
  {
    v10 = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements(&P);
    if ( v10 )
    {
      v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v22 + 1) = v10;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v12, &v24, v11) < 0 )
      {
        WdLogSingleEntry1(1LL, 4388LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4388LL, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_8;
    }
    WdLogSingleEntry1(2LL, (unsigned int)v22);
    v20 = (unsigned int)v22;
    v21 = L"Failed to allocate array for hardware reserved ranges. ArraySize=%u";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, v20, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
LABEL_8:
  v13 = *((_QWORD *)this + 2);
  v14 = *(_DWORD *)(v13 + 2284) >> 13;
  v15 = *(_DWORD *)(v13 + 2284) >> 11;
  LOBYTE(v14) = (*(_DWORD *)(v13 + 2284) & 0x2000) != 0;
  LOBYTE(v15) = (*(_DWORD *)(v13 + 2284) & 0x800) != 0;
  v16 = SysMmFinalizeInitialization(*(_QWORD *)(v13 + 224), *(_QWORD *)(v13 + 2216), v15, v14, P, v27, v7, a2);
  v9 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(3LL, v16);
  }
  else
  {
    v9 = 0;
    *(_QWORD *)&v22 = ADAPTER_RENDER::IommuOnEnable;
    *((_QWORD *)&v22 + 1) = ADAPTER_RENDER::IommuOnDisable;
    *(_QWORD *)&v23 = ADAPTER_RENDER::IommuBeginExclusiveAccess;
    *((_QWORD *)&v23 + 1) = ADAPTER_RENDER::IommuEndExclusiveAccess;
    v17 = v23;
    v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    *(_OWORD *)(v18 + 320) = v22;
    *(_QWORD *)(v18 + 352) = this;
    *(_OWORD *)(v18 + 336) = v17;
  }
LABEL_10:
  if ( P != &v26 && P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
