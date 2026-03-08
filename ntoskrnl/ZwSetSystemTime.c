/*
 * XREFs of ZwSetSystemTime @ 0x140415A70
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1405F5520 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F53B0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
