/*
 * XREFs of RtlLookupFunctionEntry_0 @ 0x14000EB5E
 * Callers:
 *     __report_gsfailure @ 0x14000E900 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry_0(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  return RtlLookupFunctionEntry(ControlPc, ImageBase, HistoryTable);
}
