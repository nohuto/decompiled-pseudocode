/*
 * XREFs of MiReleaseOutSwapReservations @ 0x140351944
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14035188C (MiProcessWsInSwapRanges.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     memset @ 0x140413800 (memset.c)
 */

_QWORD *__fastcall MiReleaseOutSwapReservations(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  _QWORD v7[14]; // [rsp+28h] [rbp-29h] BYREF

  memset(&v7[2], 0, 0x60uLL);
  v7[1] = 4096LL;
  result = v7;
  v7[0] = 0LL;
  v7[3] = v7;
  v7[5] = 0LL;
  v7[6] = 0LL;
  LOWORD(v7[2]) = 3;
  v7[4] = 1LL;
  while ( (unsigned __int64)a1 <= a2 )
  {
    v5 = *a1;
    v6 = *a1 + a1[1];
    while ( v5 < v6 )
    {
      v7[0] = v5;
      result = (_QWORD *)MmAccessFault(0LL, v5, 0, (ULONG_PTR)&v7[2] + 1);
      v5 += 4096LL;
    }
    a1 += 2;
  }
  return result;
}
