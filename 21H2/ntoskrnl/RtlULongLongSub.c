/*
 * XREFs of RtlULongLongSub @ 0x140354968
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x14035489C (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x1403AD92C (KiAdjustTimer2DueTimes.c)
 *     IopFillTriageDumpDataBlocks @ 0x140554654 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1407D38A8 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1409B5AEC (RtlCalculateUserShadowStackSizes.c)
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
