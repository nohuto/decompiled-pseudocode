/*
 * XREFs of RtlULongLongSub @ 0x1403050A8
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x140304FDC (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x14054F968 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x140550CB8 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406DFE4C (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A15B4 (RtlCalculateUserShadowStackSizes.c)
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
