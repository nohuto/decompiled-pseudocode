/*
 * XREFs of PpmStartIllegalProcessorThrottleLogging @ 0x140365E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 33008) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 33016) = 0;
  return result;
}
