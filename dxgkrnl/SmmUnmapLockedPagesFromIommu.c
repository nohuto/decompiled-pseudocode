/*
 * XREFs of SmmUnmapLockedPagesFromIommu @ 0x1C0071428
 * Callers:
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D32D0 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1C0013548 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x1C00135B4 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapLockedPagesFromIommu(__int64 a1, __int64 a2, __int64 a3, struct _MDL *a4)
{
  __int64 LogicalAddress; // rax
  char v9; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v10,
    (struct SYSMM_IOMMU *)(a1 + 64));
  if ( !*(_DWORD *)(a1 + 104) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    if ( (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1C013BCE0 & 4) != 0 )
      v9 = 1;
    SmmUnmapMdlFromIommu((struct SYSMM_IOMMU *)(a1 + 64), LogicalAddress, a4, v9);
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v10);
}
