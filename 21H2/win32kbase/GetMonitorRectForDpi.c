/*
 * XREFs of GetMonitorRectForDpi @ 0x1C006DCC8
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006DA50 (PhysicalToLogicalDPIPoint.c)
 *     CreateMonitorRegionForDpi @ 0x1C006DB60 (CreateMonitorRegionForDpi.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C006DBB0 (LogicalToPhysicalDPIPoint.c)
 *     GetMonitorRect @ 0x1C006ECBC (GetMonitorRect.c)
 *     GetScreenRectForDpi @ 0x1C006ED5C (GetScreenRectForDpi.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x1C006E324 (CalculateLogicalMonitorRect.c)
 */

__int64 __fastcall GetMonitorRectForDpi(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  CalculateLogicalMonitorRect(
    a1,
    *(_QWORD *)(a2 + 40) + 28,
    *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 60LL),
    a3,
    *(_WORD *)(*(_QWORD *)(a2 + 40) + 62LL));
  return a1;
}
