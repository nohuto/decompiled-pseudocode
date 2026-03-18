/*
 * XREFs of KiTpParseInstruction @ 0x140AF5450
 * Callers:
 *     KiTpSetupCompletion @ 0x1409768A8 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140AF4944 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140AF547C (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
