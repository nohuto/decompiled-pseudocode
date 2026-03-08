/*
 * XREFs of Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C003BA04
 * Callers:
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C00519E0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 *     ESM_WaitingForControllerResetCompletion @ 0x1C0051E60 (ESM_WaitingForControllerResetCompletion.c)
 * Callees:
 *     Endpoint_SM_CompleteResetRequestFromClient @ 0x1C003B958 (Endpoint_SM_CompleteResetRequestFromClient.c)
 */

__int64 __fastcall Endpoint_SM_OkToCompleteEndpointResetRequest(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ett

  _m_prefetchw((const void *)(a1 + 32));
  LODWORD(result) = *(_DWORD *)(a1 + 32);
  do
  {
    v4 = (unsigned int)result;
    LODWORD(v4) = result ^ 0x80;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), result ^ 0x80, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 0x80u) != 0LL )
    return Endpoint_SM_CompleteResetRequestFromClient(a1, v4, a3);
  return result;
}
