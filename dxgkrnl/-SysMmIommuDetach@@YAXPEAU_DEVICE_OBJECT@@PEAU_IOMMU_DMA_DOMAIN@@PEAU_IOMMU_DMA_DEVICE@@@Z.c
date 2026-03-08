/*
 * XREFs of ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1D18
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x1C03D0E00 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03D0F74 (SmmDetachDomainFromAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SysMmIommuDetach(struct _DEVICE_OBJECT *a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v3; // r8
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r9

  if ( SmmUseIommuV3Interface() )
  {
    v4 = (__int64 (__fastcall *)(__int64))qword_1C013BC18;
LABEL_3:
    v5 = v4(v3);
    goto LABEL_6;
  }
  v6 = !SmmUseIommuV2Interface();
  v4 = (__int64 (__fastcall *)(__int64))qword_1C013BC18;
  if ( !v6 )
    goto LABEL_3;
  v5 = qword_1C013BC18(v8, v7, 0LL);
LABEL_6:
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(1LL, 3206LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 3206LL, 0LL, 0LL, 0LL, 0LL);
  }
}
