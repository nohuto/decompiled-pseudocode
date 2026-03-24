/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404F146C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x140998890 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409B2764 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404F9F80 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
