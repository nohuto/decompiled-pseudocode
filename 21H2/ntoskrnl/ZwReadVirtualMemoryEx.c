/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x14041E5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
