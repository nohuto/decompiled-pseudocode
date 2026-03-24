/*
 * XREFs of NtReadVirtualMemory @ 0x1405F6160
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemory(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return MiReadWriteVirtualMemory(a1, a5, 0x10u);
}
