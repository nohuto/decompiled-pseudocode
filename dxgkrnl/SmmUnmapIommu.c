/*
 * XREFs of SmmUnmapIommu @ 0x1C002A53E
 * Callers:
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006E17C (SmmIoMmuUnmapStagingMdl.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIommuUnmapIdentityRange @ 0x1C006E570 (SmmIommuUnmapIdentityRange.c)
 */

char __fastcall SmmUnmapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
    v4 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_1C013BC40)(
           v3,
           a2,
           (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12);
  else
    v4 = SmmIommuUnmapIdentityRange(v3, a3);
  if ( v4 < 0 )
  {
    LOBYTE(v4) = WdLogSingleEntry1(1LL, 382LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v6,
                       v5,
                       v7,
                       0,
                       2,
                       -1,
                       (__int64)L"(((NTSTATUS)(Status)) >= 0)",
                       382LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  return v4;
}
