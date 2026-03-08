/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1407307FC
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140730604 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvWriteLogFile @ 0x140731BB0 (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x140732470 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1A9B4 (HvRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 != 1 )
    return a1 != 4;
  return result;
}
