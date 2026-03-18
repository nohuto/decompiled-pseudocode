/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1409FBA50
 * Callers:
 *     PopClearSystemSleepCheckpoint @ 0x140996E2C (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A00360 (NtSetSystemEnvironmentValueEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA6B4 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpUnicodeStringToNonpagedWStr @ 0x14068755C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FDFA4 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(const void **a1, int a2, __int64 a3, int a4, int a5)
{
  _WORD *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C31AF0 != 2 )
    return 3221225474LL;
  v9 = ExpUnicodeStringToNonpagedWStr(a1);
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
