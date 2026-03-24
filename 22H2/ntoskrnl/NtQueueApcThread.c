/*
 * XREFs of NtQueueApcThread @ 0x14069D450
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 */

NTSTATUS __fastcall NtQueueApcThread(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NtQueueApcThreadEx2(a1, 0LL, 0, a2, a3, a4, a5);
}
