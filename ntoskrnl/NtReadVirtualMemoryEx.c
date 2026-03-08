/*
 * XREFs of NtReadVirtualMemoryEx @ 0x1402CD410
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14075AD90 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemoryEx(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return MiReadWriteVirtualMemory(a1, a5, 16, a6);
}
