/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013DD8
 * Callers:
 *     NdisGetThreadObjectCompartmentScope @ 0x1C0005EC0 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006110 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0006FF0 (-ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C0007C20 (NdisGetThreadObjectCompartmentId.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00099E0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C870 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F830 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013900 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C0013DA0 (NdisGetSessionCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B18B0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(struct _ETHREAD *a1)
{
  PACCESS_TOKEN v2; // rax
  void *v3; // rsi
  NTSTATUS v5; // ebx
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId(a1);
  v2 = PsReferenceImpersonationToken(a1, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v3 = v2;
  if ( v2
    && (v5 = SeQueryInformationToken(v2, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v3),
                                                                             v5 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(a1);
  }
}
