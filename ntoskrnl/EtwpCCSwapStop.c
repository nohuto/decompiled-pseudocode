/*
 * XREFs of EtwpCCSwapStop @ 0x14080E6EC
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14037F908 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

void __fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 i; // rbx
  __int64 v6; // rcx

  v2 = KeNumberProcessors_0;
  v3 = 0;
  for ( i = a1; v3 < v2; ++v3 )
  {
    v6 = *(_QWORD *)(KeGetPrcb(v3) + 34472);
    if ( *(_QWORD *)(v6 + 8 * i + 392) )
      *(_BYTE *)(i + v6 + 384) = 1;
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[i];
}
