/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x1404151B0
 * Callers:
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
