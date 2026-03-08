/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x140881418
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x1407A2CC0 (RtlRunOnceBeginInitialize.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x140293354 (KeWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  signed __int64 v3; // rax
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  v5[2] = 0LL;
  v6 = 0LL;
  v5[3] = KeGetCurrentThread();
  do
  {
    v5[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v3 = _InterlockedCompareExchange64(a2, (signed __int64)v5 + 1, a1);
    if ( a1 == v3 )
      break;
    a1 = v3;
  }
  while ( (v3 & 3) == 1 );
  if ( (a1 & 3) == 1 )
  {
    do
    {
      KeWaitForAlertByThreadId(0, 0LL, (void *)a2);
      a1 = *a2;
    }
    while ( (BYTE4(v6) & 4) == 0 );
  }
  return a1;
}
