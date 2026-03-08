/*
 * XREFs of ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006EF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1C0013548 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x1C00135B4 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006EBA0 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

void __fastcall SysMmUnmapIommuContiguousRange(
        struct SYSMM_ADAPTER *a1,
        unsigned __int64 a2,
        union _LARGE_INTEGER a3,
        SIZE_T a4,
        bool a5)
{
  struct SYSMM_IOMMU *v5; // rdi
  struct _MDL *v7; // rbx
  bool v9; // cl
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (struct SYSMM_ADAPTER *)((char *)a1 + 64);
  v7 = (struct _MDL *)((unsigned __int64)a3.QuadPart >> 12);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v10,
    (struct SYSMM_ADAPTER *)((char *)a1 + 64));
  v9 = 0;
  if ( a5 || (dword_1C013BCE0 & 4) != 0 )
    v9 = 1;
  SmmUnmapContiguousRangeFromIommu(v5, a2, v7, a4, v9);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v10);
}
