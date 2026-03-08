/*
 * XREFs of ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D0EBC
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D1DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     SmmClearPageManager @ 0x1C006DE28 (SmmClearPageManager.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03D0F74 (SmmDetachDomainFromAllDevices.c)
 *     SmmIommuDeleteDomain @ 0x1C03D1194 (SmmIommuDeleteDomain.c)
 */

void __fastcall SmmDeinitializeIommu(struct SYSMM_ADAPTER *a1)
{
  struct _MDL *v2; // rcx

  if ( (*((_DWORD *)a1 + 5) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 14) )
    {
      SmmDetachDomainFromAllDevices();
      if ( !*((_DWORD *)a1 + 26) )
        SmmIommuDeleteDomain(*((_QWORD *)a1 + 14));
      *((_QWORD *)a1 + 14) = 0LL;
    }
    SmmClearPageManager((__int64)a1 + 128);
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 144));
    v2 = (struct _MDL *)*((_QWORD *)a1 + 30);
    if ( v2 != (struct _MDL *)((char *)a1 + 248) )
      IoFreeMdl(v2);
    if ( (*((_DWORD *)a1 + 5) & 4) != 0 && (SmmUseIommuV2Interface() || SmmUseIommuV3Interface()) )
      ((void (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, void *)))qword_1C013BC78)(SmmDomainTypeStateChangeCallback);
  }
}
