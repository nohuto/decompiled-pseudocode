/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F42A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 */

ULONG RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
