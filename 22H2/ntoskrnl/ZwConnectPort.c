/*
 * XREFs of ZwConnectPort @ 0x14041BAE0
 * Callers:
 *     DifZwConnectPortWrapper @ 0x1405EE110 (DifZwConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
