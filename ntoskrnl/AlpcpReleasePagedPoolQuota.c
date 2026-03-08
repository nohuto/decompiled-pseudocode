/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1406D453C
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1406D4580 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x140760CB0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1407CC930 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[1].SecureState.SecureHandle;
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[1].SecureState, a2);
  }
  return result;
}
