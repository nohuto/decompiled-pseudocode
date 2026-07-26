/*
 * XREFs of NdisClRegisterSap @ 0x1C00B8560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B67B0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B86C0 (NdisCmRegisterSapComplete.c)
 */

NDIS_STATUS __stdcall NdisClRegisterSap(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolSapContext,
        PCO_SAP Sap,
        PNDIS_HANDLE NdisSapHandle)
{
  NDIS_STATUS result; // eax
  PVOID PoolWithTag; // rax
  NDIS_HANDLE *v10; // rbx
  __int64 v11; // rax

  *NdisSapHandle = 0LL;
  if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    return -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F63444Eu);
  v10 = (NDIS_HANDLE *)PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 8) = 0;
    *((_DWORD *)PoolWithTag + 9) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)PoolWithTag + 5);
    v10[2] = NdisAfHandle;
    v10[3] = Sap;
    v10[1] = ProtocolSapContext;
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v11 = *((_QWORD *)NdisAfHandle + 4);
    else
      v11 = *((_QWORD *)NdisAfHandle + 3);
    result = (*(__int64 (__fastcall **)(_QWORD, PCO_SAP, NDIS_HANDLE *, NDIS_HANDLE *))(v11 + 40))(
               *((_QWORD *)NdisAfHandle + 6),
               Sap,
               v10,
               v10);
    if ( result != 259 )
    {
      NdisCmRegisterSapComplete(result, v10, *v10);
      return 259;
    }
  }
  else
  {
    *NdisSapHandle = 0LL;
    return -1073741670;
  }
  return result;
}
