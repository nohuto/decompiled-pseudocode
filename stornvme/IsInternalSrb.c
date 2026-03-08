/*
 * XREFs of IsInternalSrb @ 0x1C0007BB8
 * Callers:
 *     RequestPendingCompletion @ 0x1C0002EA0 (RequestPendingCompletion.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C644 (NVMeCompleteSubmissionQueueRequests.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // ecx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return 1;
  if ( a2 != a1 + 952 )
  {
    v5 = 0;
    while ( a2 != a1 + ((unsigned __int64)v5 << 7) + 1080 )
    {
      if ( ++v5 >= 6 )
        return v2;
    }
  }
  return 1;
}
