/*
 * XREFs of ZwCompleteConnectPort @ 0x14041CB60
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCompleteConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
