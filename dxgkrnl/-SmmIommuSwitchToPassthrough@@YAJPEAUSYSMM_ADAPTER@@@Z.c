/*
 * XREFs of ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D13E8
 * Callers:
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D17F8 (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03D19B0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     SmmAssignDomain @ 0x1C006DD94 (SmmAssignDomain.c)
 *     SmmClearPageManager @ 0x1C006DE28 (SmmClearPageManager.c)
 *     SmmIommuDeleteDomain @ 0x1C03D1194 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1C03D1710 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToPassthrough(struct SYSMM_ADAPTER *a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (dword_1C013BCE4 & 2) != 0 )
  {
    v2 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(3LL, a1, v2);
    return (unsigned int)v2;
  }
  v2 = SmmSwapDomains(a1, qword_1C013BCD8, *((_QWORD *)a1 + 14));
  if ( v2 < 0 )
    goto LABEL_4;
  if ( *((_QWORD *)a1 + 44) )
    (*((void (__fastcall **)(struct SYSMM_ADAPTER *))a1 + 41))(a1);
  SmmClearPageManager((__int64)a1 + 128);
  v3 = *((_QWORD *)a1 + 14);
  SmmAssignDomain((__int64)a1, qword_1C013BCD8, 1);
  if ( v3 )
    SmmIommuDeleteDomain();
  return (unsigned int)v2;
}
