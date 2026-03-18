/*
 * XREFs of RtlULongLongSub @ 0x140310AC8
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x1403109FC (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A40C (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x140551E08 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x140553158 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F31DC (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A6434 (RtlCalculateUserShadowStackSizes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
