/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C00016D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001F40 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0004A20 (VidSchiIncrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0087640 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  struct _VIDSCH_CONTEXT *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  v2 = (_QWORD **)(a1 + 9);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1728), &LockHandle);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (struct _VIDSCH_CONTEXT *)(v3 - 3);
    VidSchiIncrementContextReference(v3 - 3);
    if ( !*((_DWORD *)v3 + 220) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v3 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1728), &LockHandle);
    }
    v3 = (_QWORD *)*v3;
    VidSchiDecrementContextReference(v4);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
