void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // r8
  VIDMM_SEGMENT *v10; // rcx
  VIDMM_SEGMENT *v11; // rcx
  char v12; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)this + 41104;
  v3 = 1616LL * *((unsigned int *)a2 + 95);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *((_QWORD *)this + 5028) + v3;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5138, &LockHandle);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v6 + 440);
  *(_DWORD *)(v6 + 440) = v8 | (1 << *((_DWORD *)a2 + 5));
  *((_QWORD *)this + 5139) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v8 && *(_DWORD *)(v6 + 32) )
  {
    do
    {
      v10 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * (v8 + *(_DWORD *)(v6 + 28)));
      if ( *((_DWORD *)v10 + 92) != -1
        && (*(_DWORD *)(v6 + 72) == (unsigned int)VIDMM_SEGMENT::DriverId(v10)
         || *(_DWORD *)(v6 + 56) == (unsigned int)VIDMM_SEGMENT::DriverId(v11)) )
      {
        LOBYTE(v9) = 1;
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))this + 5018))(
               *((_QWORD *)this + 5019),
               *((unsigned int *)a2 + 92),
               v9) == -1071775466 )
        {
          v12 = *(_BYTE *)(v6 + 444);
          if ( (v12 & 0x10) != 0 )
          {
            v7 = 1;
            *(_BYTE *)(v6 + 444) = v12 | 0x80;
          }
        }
        *(_BYTE *)(v6 + 445) &= ~1u;
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(v6 + 32) );
  }
  LOBYTE(v9) = 1;
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64))this + 5018))(
    *((_QWORD *)this + 5019),
    *((unsigned int *)a2 + 92),
    v9);
  if ( *(char *)(v6 + 444) < 0 )
  {
    if ( v7 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 95), 1u);
  }
}
