/*
 * XREFs of KeGetActualProcessorEfficiencyClass @ 0x14036A2F8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetActualProcessorEfficiencyClass(__int64 a1)
{
  if ( KeHeteroSystem )
    return *(_BYTE *)(a1 + 34056);
  else
    return *(_BYTE *)(a1 + 34059);
}
