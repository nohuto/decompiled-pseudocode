/*
 * XREFs of ZwSaveMergedKeys @ 0x1403FCAE0
 * Callers:
 *     NtSaveMergedKeys @ 0x1408697F0 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSaveMergedKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
