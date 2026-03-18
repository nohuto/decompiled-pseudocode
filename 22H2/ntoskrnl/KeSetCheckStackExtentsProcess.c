/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x140974454
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetCheckStackExtentsProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 5u);
}
