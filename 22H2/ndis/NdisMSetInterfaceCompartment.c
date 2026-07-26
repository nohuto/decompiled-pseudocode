/*
 * XREFs of NdisMSetInterfaceCompartment @ 0x1C00B2670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00B2988 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B3754 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall NdisMSetInterfaceCompartment(__int64 a1, const struct _GUID *a2)
{
  unsigned int v4; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v6; // r11
  struct _GUID v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a2);
  if ( CompartmentBlockByGuid )
  {
    v9 = *(struct _GUID *)(*((_QWORD *)CompartmentBlockByGuid + 7) + 32LL);
    KeReleaseSpinLock(&ndisIfListLock, v6);
    if ( (int)ndisIfUpdateInterfaceIsolationNetworkId(*(struct _NDIS_IF_BLOCK **)(a1 + 4040), &v9, 1u) < 0 )
      return (unsigned int)-1073741823;
    return v4;
  }
  else
  {
    KeReleaseSpinLock(&ndisIfListLock, v6);
    return (unsigned int)-1073741823;
  }
}
