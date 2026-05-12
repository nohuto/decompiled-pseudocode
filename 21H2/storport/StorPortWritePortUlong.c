/*
 * XREFs of StorPortWritePortUlong @ 0x1C003A3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortWritePortUlong(__int64 a1, unsigned __int16 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __outdword(a2, a3);
  return result;
}
