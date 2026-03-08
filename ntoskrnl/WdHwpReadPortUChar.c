/*
 * XREFs of WdHwpReadPortUChar @ 0x14036DBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WdHwpReadPortUChar(unsigned __int16 a1)
{
  __int64 result; // rax

  LOBYTE(result) = __inbyte(a1);
  return (unsigned __int8)result;
}
