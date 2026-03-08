/*
 * XREFs of ZwPropagationFailed @ 0x140414B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPropagationFailed(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
