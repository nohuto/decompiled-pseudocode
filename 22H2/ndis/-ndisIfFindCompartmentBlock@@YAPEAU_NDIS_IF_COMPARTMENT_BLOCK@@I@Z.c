/*
 * XREFs of ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C
 * Callers:
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013900 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C0020928 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B8BC (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C0034BDC (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035D94 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0039794 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ndisConvertIdentifierForCompartment @ 0x1C00633F4 (ndisConvertIdentifierForCompartment.c)
 *     ndisIfGetCompartmentJobObject @ 0x1C00B11F4 (ndisIfGetCompartmentJobObject.c)
 *     ndisIfCreateCompartment @ 0x1C00B2F38 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B32E8 (ndisIfDeleteCompartment.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1C00B379C (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B5118 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B5770 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5C30 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlock(unsigned int a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rax
  __int64 v2; // rdx

  v1 = qword_1C00E5B38;
  v2 = 0LL;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E5B38 )
  {
    if ( *((_DWORD *)v1 + 4) == a1 )
      return v1;
    if ( *((_DWORD *)v1 + 4) > a1 )
      return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
}
