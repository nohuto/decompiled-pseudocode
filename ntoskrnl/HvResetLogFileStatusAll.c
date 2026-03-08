/*
 * XREFs of HvResetLogFileStatusAll @ 0x140798BB4
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
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
