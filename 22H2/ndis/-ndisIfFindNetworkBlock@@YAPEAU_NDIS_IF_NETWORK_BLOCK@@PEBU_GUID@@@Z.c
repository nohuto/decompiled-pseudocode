/*
 * XREFs of ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BF8C
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0025EAC (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B8BC (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003459C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C0034BDC (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2F38 (ndisIfCreateCompartment.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B5440 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B5770 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5C30 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisCompareGuid @ 0x1C002BFF4 (ndisCompareGuid.c)
 */

struct _NDIS_IF_NETWORK_BLOCK *__fastcall ndisIfFindNetworkBlock(const struct _GUID *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v1 = (__int64 *)qword_1C00E5B48;
  v3 = 0LL;
  while ( v1 != &qword_1C00E5B48 )
  {
    v4 = ndisCompareGuid(v1 + 4, a1);
    if ( !v4 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v1;
    if ( v4 > 0 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
    v1 = (__int64 *)*v1;
  }
  return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
}
