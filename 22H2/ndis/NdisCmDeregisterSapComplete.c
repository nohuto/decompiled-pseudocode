/*
 * XREFs of NdisCmDeregisterSapComplete @ 0x1C00B8660
 * Callers:
 *     NdisClDeregisterSap @ 0x1C00B84C0 (NdisClDeregisterSap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B65FC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z @ 0x1C00B8450 (-ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z.c)
 */

void __stdcall NdisCmDeregisterSapComplete(NDIS_STATUS Status, NDIS_HANDLE NdisSapHandle)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *((_QWORD *)NdisSapHandle + 2);
  v4 = *((_QWORD *)NdisSapHandle + 1);
  if ( *(_DWORD *)(v2 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 272))(Status, v4);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 120))(Status, v4);
  if ( !Status )
  {
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisSapHandle + 2));
    ndisDereferenceSap((KSPIN_LOCK *)NdisSapHandle);
  }
}
