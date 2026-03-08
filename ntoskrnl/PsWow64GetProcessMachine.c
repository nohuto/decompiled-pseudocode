/*
 * XREFs of PsWow64GetProcessMachine @ 0x1407EE9F0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KiVerifyContextRecord @ 0x140365470 (KiVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int16 result; // ax

  if ( !*(_QWORD *)(a1 + 1408) )
    return -31132;
  result = *(_WORD *)(a1 + 2412);
  if ( !result )
    return -31132;
  return result;
}
