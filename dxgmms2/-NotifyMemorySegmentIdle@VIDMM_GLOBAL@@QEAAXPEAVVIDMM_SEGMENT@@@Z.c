void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v3; // rsi
  char *v5; // rbx
  _DWORD *v6; // rsi
  int v7; // r14d
  VIDMM_SEGMENT *v8; // rcx
  struct _KEVENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1616LL * *((unsigned int *)a2 + 95);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = (char *)this + 41104;
  v6 = (_DWORD *)(*((_QWORD *)this + 5028) + v3);
  v7 = 1 << *((_DWORD *)a2 + 5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5138, &LockHandle);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 29) && !*((_BYTE *)a2 + 372) )
  {
    v6[110] &= ~v7;
    if ( v6[18] != (unsigned int)VIDMM_SEGMENT::DriverId(a2) && v6[14] != (unsigned int)VIDMM_SEGMENT::DriverId(v8) )
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 5018))(
        *((_QWORD *)this + 5019),
        *((unsigned int *)a2 + 92),
        0LL);
    if ( !v6[110] )
    {
      v9 = (struct _KEVENT *)*((_QWORD *)this + 5548);
      *((_BYTE *)this + 40938) = 1;
      KeSetEvent(v9, 0, 0);
    }
  }
  *((_QWORD *)this + 5139) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
