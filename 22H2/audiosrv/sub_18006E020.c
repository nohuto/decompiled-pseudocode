/*
 * XREFs of sub_18006E020 @ 0x18006E020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E020(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 412), 1);
}
