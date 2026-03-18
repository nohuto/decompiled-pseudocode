/*
 * XREFs of ZwSetDefaultUILanguage @ 0x14041EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDefaultUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
