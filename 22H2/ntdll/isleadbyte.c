/*
 * XREFs of isleadbyte @ 0x180090188
 * Callers:
 *     ReadString @ 0x180095A54 (ReadString.c)
 *     _input_l @ 0x180095DC0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
