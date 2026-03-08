/*
 * XREFs of ZwConnectPort @ 0x140413750
 * Callers:
 *     DifZwConnectPortWrapper @ 0x1405EBC60 (DifZwConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
