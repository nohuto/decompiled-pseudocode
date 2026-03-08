/*
 * XREFs of ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C00519E0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C003BA04 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 *     TR_OkToReclaimTransfersOnCancel @ 0x1C0041B60 (TR_OkToReclaimTransfersOnCancel.c)
 */

__int64 __fastcall ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi

  v3 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v3 + 37) )
  {
    v4 = *(_QWORD *)(v3 + 136);
    v5 = 1;
    for ( *(_DWORD *)(v4 + 20) = 0; v5 <= *(_DWORD *)(v4 + 8); ++v5 )
      TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(104LL * (v5 - 1) + *(_QWORD *)(v3 + 136) + 48));
  }
  else
  {
    TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(v3 + 88));
  }
  Endpoint_SM_OkToCompleteEndpointResetRequest(v3, a2, a3);
  return 1000LL;
}
