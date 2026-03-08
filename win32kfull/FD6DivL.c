/*
 * XREFs of FD6DivL @ 0x1C014AFC0
 * Callers:
 *     Log @ 0x1C014B004 (Log.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     AntiLog @ 0x1C025555C (AntiLog.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FD6DivL(int a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a2;
  if ( a2 > 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (unsigned int)a1;
  }
  if ( a1 <= 0 )
  {
    a1 = -a1;
    if ( !a1 )
      return 0LL;
    v3 ^= 1u;
  }
  result = (a1 + (v2 >> 1)) / v2;
  if ( v3 )
    return (unsigned int)-(int)result;
  return result;
}
