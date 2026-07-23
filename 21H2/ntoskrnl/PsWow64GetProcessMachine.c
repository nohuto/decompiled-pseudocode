/*
 * XREFs of PsWow64GetProcessMachine @ 0x14063D4F0
 * Callers:
 *     KiVerifyContextRecord @ 0x140265110 (KiVerifyContextRecord.c)
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1408);
  if ( !v1 )
    return 34404LL;
  result = *(unsigned __int16 *)(v1 + 8);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
