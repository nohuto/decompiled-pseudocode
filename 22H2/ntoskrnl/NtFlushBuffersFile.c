/*
 * XREFs of NtFlushBuffersFile @ 0x14067D0F0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 */

__int64 __fastcall NtFlushBuffersFile(int a1, __int64 a2)
{
  return NtFlushBuffersFileEx(a1, a2);
}
