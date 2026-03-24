/*
 * XREFs of InbvEnableDisplayString @ 0x1403CFC80
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C50B70;
  byte_140C50B70 = a1;
  return result;
}
