/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x14045F176
 * Callers:
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveArchDisallowedXStateFeatures(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (a1 & 0x10040) == 0x10040 )
  {
    result = 0x40000000000009FFLL;
  }
  else
  {
    result = 1048640LL;
    if ( (a1 & 0x100040) != 0x100040 )
      return result;
    result = 0x4000000000060DFFLL;
  }
  *a2 &= result;
  return result;
}
