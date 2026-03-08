/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C003CBF4
 * Callers:
 *     VidSchiReportHwHang @ 0x1C00475B8 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0037948 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  __int64 *v3; // rbx
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 84); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 632);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 704) )
      v3 += i;
    v4 = *v3;
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2616));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2568));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v4 + 2600));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1224) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1192), 0, 0);
}
