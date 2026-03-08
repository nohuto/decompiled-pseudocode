/*
 * XREFs of ZwMapUserPhysicalPages @ 0x140414670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMapUserPhysicalPages(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
