/*
 * XREFs of ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002A700
 * Callers:
 *     <none>
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1C0013548 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x1C00135B4 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SysMmUnmapIommuRange(struct SYSMM_ADAPTER *a1, unsigned __int64 a2, struct _MDL *a3, char a4)
{
  struct SYSMM_IOMMU *v4; // rdi
  bool v8; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct SYSMM_ADAPTER *)((char *)a1 + 64);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v9,
    (struct SYSMM_ADAPTER *)((char *)a1 + 64));
  v8 = 0;
  if ( a4 || (dword_1C013BCE0 & 4) != 0 )
    v8 = 1;
  SmmUnmapMdlFromIommu(v4, a2, a3, v8);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v9);
}
