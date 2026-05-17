/*
 * XREFs of RtlFindLeastSignificantBit @ 0x180085940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLeastSignificantBit(unsigned __int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = !_BitScanForward64((unsigned __int64 *)&v2, a1);
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return (unsigned __int8)v2;
  return result;
}
