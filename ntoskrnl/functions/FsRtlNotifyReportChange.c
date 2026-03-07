void __fastcall FsRtlNotifyReportChange(
        struct _REAL_NOTIFY_SYNC *a1,
        struct _LIST_ENTRY *a2,
        STRING *a3,
        _WORD *a4,
        ULONG FilterMatch)
{
  FsRtlNotifyFilterReportChange(a1, a2, a3, a3->Length - *a4, 0LL, 0LL, FilterMatch, 0, 0LL, 0LL);
}
