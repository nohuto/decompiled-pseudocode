/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140283C14
 * Callers:
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FDD0 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A6CB8 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x140282DC8 (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x140283BA8 (PopDiagTraceFxDevicePowered.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 0LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 1LL);
    return PopPluginDevicePower(BugCheckParameter2, 1, a2);
  }
  return v2;
}
