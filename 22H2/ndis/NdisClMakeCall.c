/*
 * XREFs of NdisClMakeCall @ 0x1C00B7A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B65FC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B67B0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7F70 (NdisCmMakeCallComplete.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B88B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B8B5C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisClMakeCall(
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters,
        NDIS_HANDLE ProtocolPartyContext,
        PNDIS_HANDLE NdisPartyHandle)
{
  struct _NDIS_CO_AF_BLOCK *v4; // rsi
  _QWORD *v6; // rdi
  NDIS_STATUS result; // eax
  _QWORD *PoolWithTag; // rax
  void (__fastcall *ClDropPartyCompleteHandler)(int, void *); // rax
  KIRQL v13; // al
  void *CallMgrChars; // rax
  NDIS_HANDLE CallMgrPartyContext; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _NDIS_CO_AF_BLOCK *)*((_QWORD *)NdisVcHandle + 8);
  v6 = 0LL;
  CallMgrPartyContext = 0LL;
  if ( !ndisReferenceAf(v4) )
    return -1073741823;
  if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle) )
  {
    ndisDereferenceAf((KSPIN_LOCK *)v4);
    return -1073741823;
  }
  if ( NdisPartyHandle )
  {
    *NdisPartyHandle = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F63444Eu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ndisDereferenceAf((KSPIN_LOCK *)v4);
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
      return -1073741670;
    }
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *PoolWithTag = NdisVcHandle;
    PoolWithTag[2] = ProtocolPartyContext;
    if ( v4->ClMajorNdisVersion >= 6 )
    {
      PoolWithTag[3] = v4->ClientChars.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientChars.ClDropPartyCompleteHandler;
    }
    else
    {
      PoolWithTag[3] = v4->ClientEntries.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientEntries.ClDropPartyCompleteHandler;
    }
    v6[4] = ClDropPartyCompleteHandler;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v13);
  if ( v4->CmMajorNdisVersion >= 6 )
    CallMgrChars = v4->CallMgrChars;
  else
    CallMgrChars = v4->CallMgrEntries;
  result = (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, _QWORD *, NDIS_HANDLE *))CallMgrChars + 7))(
             *((_QWORD *)NdisVcHandle + 18),
             CallParameters,
             v6,
             &CallMgrPartyContext);
  if ( result != 259 )
  {
    NdisCmMakeCallComplete(result, NdisVcHandle, v6, CallMgrPartyContext, CallParameters);
    return 259;
  }
  return result;
}
