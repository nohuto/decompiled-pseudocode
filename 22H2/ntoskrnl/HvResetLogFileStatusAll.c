/*
 * XREFs of HvResetLogFileStatusAll @ 0x1407E809C
 * Callers:
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x14080093C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

void __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 168) == 1 )
    *(_BYTE *)(a1 + 192) = 0;
  else
    *(_WORD *)(a1 + 192) = 0;
}
