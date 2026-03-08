/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0340554
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B6E2C (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x1C03D1EE0 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // r14
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v17; // [rsp+B8h] [rbp+20h]

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v9 = *((_QWORD *)a3 + 351);
    if ( (*(_DWORD *)(v8 + v9 + 16) & 1) != 0 )
    {
      v10 = ExShareAddressSpaceWithDevice(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + v9 + 8) + 64LL) + 152LL),
              *((_QWORD *)this + 3) + 4 * v3);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, a3, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get PASID for the adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a3,
          v11,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v11;
      }
      v6 = v17;
    }
    if ( (*(_DWORD *)(v8 + v9 + 16) & 0x40) == 0 )
      goto LABEL_12;
    if ( !SmmUseIommuV3Interface() )
      break;
    LODWORD(v11) = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C013BCB0)(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 28) + 376LL) + v13),
                     *((_QWORD *)this + 4) + 8 * v3,
                     *v12 + 4 * v3);
    if ( (int)v11 < 0 )
      goto LABEL_19;
    if ( !SmmUseIommuV3Interface() )
    {
      LODWORD(v11) = -1073741811;
LABEL_17:
      WdLogSingleEntry2(2LL, a3, (int)v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to attach Pasid device for adapter 0x%I64x. Status: 0x%I64x",
        (__int64)a3,
        (int)v11,
        0LL,
        0LL,
        0LL);
      SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * v3));
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v3) = 0LL;
      return (unsigned int)v11;
    }
    LODWORD(v11) = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C013BCC0)(
                     *((_QWORD *)this + 5),
                     *(_QWORD *)(v7 + v14));
    if ( (int)v11 < 0 )
      goto LABEL_17;
    v6 = v17;
LABEL_12:
    v6 += 16LL;
    v3 = (unsigned int)(v3 + 1);
    v8 += 344LL;
    v17 = v6;
    v7 += 8LL;
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  LODWORD(v11) = -1073741811;
LABEL_19:
  WdLogSingleEntry2(2LL, a3, (int)v11);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to create Pasid device for adapter 0x%I64x. Status: 0x%I64x",
    (__int64)a3,
    (int)v11,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v11;
}
