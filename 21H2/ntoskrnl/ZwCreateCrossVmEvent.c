/*
 * XREFs of ZwCreateCrossVmEvent @ 0x14041CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
