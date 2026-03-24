/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140723A2C
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     HvResetLogFileStatusAll @ 0x1406A43A0 (HvResetLogFileStatusAll.c)
 *     HvWriteLogFile @ 0x14071CE2C (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407237B8 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x140723838 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 *     HvIsCurrentLogSwappable @ 0x1407248C4 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x140724908 (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140724BD8 (HvTruncateAllLogFilesIfRequired.c)
 *     HvpPerformLogFileRecovery @ 0x14087410C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 4 || a1 == 1 )
    return 0LL;
  return result;
}
