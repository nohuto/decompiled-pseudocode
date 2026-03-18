/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140310900
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028CF30 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14036D95C (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x140310990 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x140312914 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x140313090 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL, 0LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL, 1LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
