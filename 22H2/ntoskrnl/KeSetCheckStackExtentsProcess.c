/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x1408BADCC
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1407062EC (PspApplyMitigationOptions.c)
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
