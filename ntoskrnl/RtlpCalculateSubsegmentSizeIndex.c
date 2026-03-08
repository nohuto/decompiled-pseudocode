/*
 * XREFs of RtlpCalculateSubsegmentSizeIndex @ 0x14030B25C
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x14030AFE0 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCalculateSubsegmentSizeIndex(unsigned int a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  if ( a1 >= 0xF0000 )
    a1 = 983040;
  _BitScanReverse(&a1, a1 - 1);
  v1 = a1 + 1;
  if ( v1 <= 7 )
  {
    return 7;
  }
  else
  {
    result = 18LL;
    if ( v1 >= 0x12 )
      return result;
  }
  return v1;
}
