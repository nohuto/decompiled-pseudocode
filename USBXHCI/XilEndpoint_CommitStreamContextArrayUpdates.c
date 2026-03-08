/*
 * XREFs of XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0038E24
 * Callers:
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003CE40 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003D100 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0039674 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_CommitStreamContextArrayUpdates(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 658LL) )
  {
    v2 = XilEndpoint_SendRequestToSetSecureStreamContextArray(
           (unsigned int)*(_QWORD *)a1 + 1320,
           *(_QWORD *)(a1 + 40),
           a1,
           1 << (*(_DWORD *)(a1 + 12) + 1),
           *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( v2 >= 0 )
      return 0;
    return (unsigned int)v2;
  }
  return v1;
}
