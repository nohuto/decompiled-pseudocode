/*
 * XREFs of ZwConnectPort @ 0x14041CBA0
 * Callers:
 *     DifZwConnectPortWrapper @ 0x14061E0F0 (DifZwConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
