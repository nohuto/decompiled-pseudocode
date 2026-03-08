/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x14053D15C
 * Callers:
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140546A30 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
