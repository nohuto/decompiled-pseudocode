/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x140415650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDefaultHardErrorPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
