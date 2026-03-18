/*
 * XREFs of RtlInterlockedSetClearBits @ 0x140209344
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140683088 (PspApplyJobChainLimitsToProcess.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PspAssociateCompletionPortCallback @ 0x1406E2540 (PspAssociateCompletionPortCallback.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearBits(volatile signed __int32 *a1, int a2, int a3)
{
  unsigned __int32 v3; // r10d
  int v4; // r8d
  signed __int32 i; // r9d
  signed __int32 v6; // r9d

  v3 = *a1;
  v4 = ~a3;
  for ( i = *a1; ; v3 = i )
  {
    v6 = v4 & (a2 | i);
    if ( v6 == v3 )
      break;
    i = _InterlockedCompareExchange(a1, v6, v3);
    if ( v3 == i )
      break;
  }
  return v3;
}
