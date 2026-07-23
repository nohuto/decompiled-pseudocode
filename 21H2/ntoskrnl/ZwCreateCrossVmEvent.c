/*
 * XREFs of ZwCreateCrossVmEvent @ 0x1403FBA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmEvent(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
