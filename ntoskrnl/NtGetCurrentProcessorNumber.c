/*
 * XREFs of NtGetCurrentProcessorNumber @ 0x1409AB570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGetCurrentProcessorNumber()
{
  unsigned int GroupIndex; // ecx
  _KPROCESS *Process; // rdx
  __int16 v2; // ax

  GroupIndex = KeGetCurrentPrcb()->GroupIndex;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v2 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v2 == 332 || v2 == 452 )
      return GroupIndex & 0x1F;
  }
  return GroupIndex;
}
