/*
 * XREFs of CcAdjustCurrentThresholdWrtTop @ 0x1405335AC
 * Callers:
 *     CcAdjustThrottleForPartition @ 0x14053360C (CcAdjustThrottleForPartition.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcAdjustCurrentThresholdWrtTop(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( *a1 > a2 )
  {
    v6 = v4 - a2;
    v7 = v4 - a2;
    if ( a4 )
    {
      v7 >>= 2;
      if ( v7 <= 0x5000 )
        v7 = v6;
    }
    else
    {
      result = v4 - a3;
      if ( result >= a2 )
        v7 = a3;
    }
    *a1 = v4 - v7;
  }
  return result;
}
