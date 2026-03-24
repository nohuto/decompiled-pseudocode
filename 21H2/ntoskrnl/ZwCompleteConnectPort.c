/*
 * XREFs of ZwCompleteConnectPort @ 0x1403FB760
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCompleteConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
