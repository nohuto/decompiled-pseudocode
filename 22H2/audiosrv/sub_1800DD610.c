/*
 * XREFs of sub_1800DD610 @ 0x1800DD610
 * Callers:
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DD610(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 22050:
      return 1LL;
    case 24000:
      return 2LL;
    case 32000:
      return 4LL;
    case 44100:
      return 8LL;
    case 48000:
      return 16LL;
    case 88200:
      return 32LL;
    case 96000:
      return 64LL;
    case 176400:
      return 128LL;
  }
  result = 256LL;
  if ( a1 != 192000 )
    return 0LL;
  return result;
}
