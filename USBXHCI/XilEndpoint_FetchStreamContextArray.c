/*
 * XREFs of XilEndpoint_FetchStreamContextArray @ 0x1C00390E8
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C000F890 (ESM_NotifyingTransferRingsFSEReceived.c)
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0011250 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B410 (Endpoint_OnResetEndpointResetCompletion.c)
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C0051720 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C003946C (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_FetchStreamContextArray(__int64 a1)
{
  unsigned int v1; // ebx
  int SecureStreamContextArray; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 658LL) )
  {
    SecureStreamContextArray = XilEndpoint_SendRequestToGetSecureStreamContextArray(
                                 (unsigned int)*(_QWORD *)a1 + 1320,
                                 *(_QWORD *)(a1 + 40),
                                 a1,
                                 1 << (*(_DWORD *)(a1 + 12) + 1),
                                 *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( SecureStreamContextArray >= 0 )
      return 0;
    return (unsigned int)SecureStreamContextArray;
  }
  return v1;
}
