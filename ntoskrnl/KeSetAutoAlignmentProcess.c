/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x14076AE0C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x14076AD54 (PspSetProcessDefaultHardErrorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 0);
}
