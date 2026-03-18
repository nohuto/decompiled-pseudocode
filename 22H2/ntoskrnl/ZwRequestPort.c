/*
 * XREFs of ZwRequestPort @ 0x14041D720
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
