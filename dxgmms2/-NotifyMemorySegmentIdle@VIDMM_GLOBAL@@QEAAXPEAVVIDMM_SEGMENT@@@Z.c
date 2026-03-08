/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002E0E0
 * Callers:
 *     ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C002CE60 (-VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B0480 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1C00FCD98 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

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
