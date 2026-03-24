/*
 * XREFs of KiTpParseInstruction @ 0x140A132AC
 * Callers:
 *     KiTpSetupCompletion @ 0x1408BD3C0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140A128C0 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140A132D8 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
