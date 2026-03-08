/*
 * XREFs of WdHwpWritePortUChar @ 0x14036DC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WdHwpWritePortUChar(unsigned __int16 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  __outbyte(a1, a2);
  return result;
}
