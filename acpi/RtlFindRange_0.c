// attributes: thunk
NTSTATUS __stdcall RtlFindRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Minimum,
        ULONGLONG Maximum,
        ULONG Length,
        ULONG Alignment,
        ULONG Flags,
        UCHAR AttributeAvailableMask,
        PVOID Context,
        PRTL_CONFLICT_RANGE_CALLBACK Callback,
        PULONGLONG Start)
{
  return RtlFindRange(
           RangeList,
           Minimum,
           Maximum,
           Length,
           Alignment,
           Flags,
           AttributeAvailableMask,
           Context,
           Callback,
           Start);
}
