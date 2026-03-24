/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x14088E960
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x14088E988 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
