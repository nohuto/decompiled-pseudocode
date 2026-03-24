/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x1406D980C
 * Callers:
 *     AlpcpCaptureMessageData @ 0x1405E3D7C (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E6080 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateReserve @ 0x140693ED4 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1406D93AC (AlpcpCreateSecurityContext.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140606580 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 SecureHandle; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(&a1[1].SecureState);
  while ( 1 )
  {
    SecureHandle = a1[1].SecureState.SecureHandle;
    if ( SecureHandle < a2 )
      break;
    v3 = a1[1].SecureState.SecureHandle;
    if ( v3 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&a1[1].SecureState,
                 SecureHandle - a2,
                 SecureHandle) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota(a1, a2);
}
