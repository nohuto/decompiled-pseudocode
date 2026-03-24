/*
 * XREFs of NtQueueApcThreadEx @ 0x1405D6B00
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx(void *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // r10
  int v8; // r8d

  v6 = 0LL;
  v8 = 0;
  if ( a2 != (void *)1 )
    v6 = a2;
  LOBYTE(v8) = a2 == (void *)1;
  return NtQueueApcThreadEx2(a1, v6, v8, a3, a4, a5, a6);
}
