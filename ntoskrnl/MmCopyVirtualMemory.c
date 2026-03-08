/*
 * XREFs of MmCopyVirtualMemory @ 0x1407C5910
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1402E8A40 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x14057CC10 (KiTpWriteUmMemory.c)
 * Callees:
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  return MiCopyVirtualMemory(a1, a5, a6, a7, 0);
}
