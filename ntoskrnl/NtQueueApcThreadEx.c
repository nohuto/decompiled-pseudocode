/*
 * XREFs of NtQueueApcThreadEx @ 0x1406F5A60
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x1406F5AB0 (NtQueueApcThreadEx2.c)
 */

__int64 __fastcall NtQueueApcThreadEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v8; // r8

  v6 = 0LL;
  v8 = 0LL;
  if ( a2 != 1 )
    v6 = a2;
  LOBYTE(v8) = a2 == 1;
  return NtQueueApcThreadEx2(a1, v6, v8, a3, a4, a5, a6);
}
