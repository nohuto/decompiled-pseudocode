/*
 * XREFs of ZwChangeProcessState @ 0x14041B960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwChangeProcessState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
