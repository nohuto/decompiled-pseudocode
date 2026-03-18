/*
 * XREFs of ZwSetSystemTime @ 0x14041EE40
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x140627CD0 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8178 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8250 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
