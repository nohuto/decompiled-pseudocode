/*
 * XREFs of MiLockWsle @ 0x140339EC0
 * Callers:
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 */

_BOOL8 __fastcall MiLockWsle(__int64 a1, unsigned __int64 a2)
{
  return (unsigned int)MiSetVaAgeList(a1, a2, 1u, 8u) != 0;
}
