/*
 * XREFs of SmmMapLockedPagesToIommu @ 0x1C0071FBC
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D76CC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1C0012D68 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x1C0012DD4 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013448 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002B460 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall SmmMapLockedPagesToIommu(__int64 a1, __int64 a2, __int64 a3, struct _MDL *a4)
{
  unsigned int v8; // edi
  __int64 LogicalAddress; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v11,
    (struct SYSMM_IOMMU *)(a1 + 64));
  v8 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    if ( (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1C0140CD0 & 4) != 0 )
      LOBYTE(v8) = 1;
    v8 = SmmMapMdlToIommu((struct SYSMM_IOMMU *)(a1 + 64), LogicalAddress, a4, v8);
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v11);
  return v8;
}
