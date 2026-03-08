/*
 * XREFs of ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C00185B4
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(DXGPRESENTHISTORYTOKENQUEUE *this, int a2)
{
  int v4; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this, &LockHandle);
  v4 = ((_WORD)a2 + (unsigned __int16)*((_DWORD *)this + 3)) & 0x7FF;
  *((_DWORD *)this + 3) = v4;
  *((_DWORD *)this + 4) = v4;
  if ( a2 && v4 == *((_DWORD *)this + 2) )
    KeResetEvent(*((PRKEVENT *)this + 9));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
