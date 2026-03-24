/*
 * XREFs of IsInternalSrb @ 0x1C000A6A8
 * Callers:
 *     RequestPendingCompletion @ 0x1C0005FE0 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D258 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // edx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return 1;
  if ( a2 != a1 + 848 )
  {
    v5 = 0;
    while ( a2 != 112LL * v5 + a1 + 960 )
    {
      if ( ++v5 >= 6 )
        return v2;
    }
  }
  return 1;
}
