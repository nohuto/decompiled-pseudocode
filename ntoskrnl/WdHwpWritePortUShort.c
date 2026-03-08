/*
 * XREFs of WdHwpWritePortUShort @ 0x14036DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WdHwpWritePortUShort(unsigned __int16 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  __outword(a1, a2);
  return result;
}
