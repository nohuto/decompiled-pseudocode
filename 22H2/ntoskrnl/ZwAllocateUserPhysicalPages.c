/*
 * XREFs of ZwAllocateUserPhysicalPages @ 0x14041B500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateUserPhysicalPages(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
