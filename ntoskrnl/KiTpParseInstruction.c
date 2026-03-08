/*
 * XREFs of KiTpParseInstruction @ 0x140AF1450
 * Callers:
 *     KiTpSetupCompletion @ 0x140973808 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140AF147C (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
