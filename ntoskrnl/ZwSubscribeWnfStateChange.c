/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x140415C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSubscribeWnfStateChange(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
