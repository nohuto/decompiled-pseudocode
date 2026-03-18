/*
 * XREFs of ZwSetSystemTime @ 0x14041DE00
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1405F79D0 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8240 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
