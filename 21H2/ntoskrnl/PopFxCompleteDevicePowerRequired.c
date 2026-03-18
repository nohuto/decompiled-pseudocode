/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140354990
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1403B1020 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403B6570 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x140354C50 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x140355058 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x1403562C8 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
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
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
