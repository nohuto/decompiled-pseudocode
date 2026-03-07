void __fastcall FsRtlNotifyFilterReportChangeLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  FsRtlNotifyFilterReportChangeLiteEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
