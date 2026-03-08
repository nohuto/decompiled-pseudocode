/*
 * XREFs of InbvEnableDisplayString @ 0x1403B18C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C6A7CC;
  byte_140C6A7CC = a1;
  return result;
}
