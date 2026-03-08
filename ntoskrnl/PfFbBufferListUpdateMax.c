/*
 * XREFs of PfFbBufferListUpdateMax @ 0x140303144
 * Callers:
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfFbBufferListUpdateMax(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 88), a2);
}
