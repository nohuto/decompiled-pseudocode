void __fastcall FsRtlNotifyChangeDirectory(
        struct _REAL_NOTIFY_SYNC *a1,
        void *a2,
        STRING *a3,
        struct _LIST_ENTRY *a4,
        BOOLEAN WatchTree,
        ULONG CompletionFilter,
        IRP *a7)
{
  FsRtlNotifyFilterChangeDirectory(a1, a4, a2, a3, WatchTree, 1u, CompletionFilter, a7, 0LL, 0LL, 0LL);
}
