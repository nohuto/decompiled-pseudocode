/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C003F9D8
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C000F410 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(struct _KTHREAD **this, struct _KTHREAD *a2)
{
  char *v2; // rdi
  struct _KTHREAD **v4; // rax
  struct _KTHREAD ***v5; // rcx
  struct _KTHREAD *v6; // rcx
  KSPIN_LOCK *v7; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+48h] [rbp-10h]

  v2 = (char *)(this + 436);
  v7 = (KSPIN_LOCK *)(this + 436);
  v9 = 0;
  if ( this[437] != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v9 = 1;
  }
  *((_QWORD *)this[423] + 49) = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this[423] + 49) += this[416];
  v4 = (struct _KTHREAD **)((char *)this[423] + 400);
  if ( !*v4 )
  {
    v5 = (struct _KTHREAD ***)(this + 434);
    a2 = this[434];
    if ( *((struct _KTHREAD ***)a2 + 1) != this + 434 )
      __fastfail(3u);
    *v4 = a2;
    v4[1] = (struct _KTHREAD *)v5;
    *((_QWORD *)a2 + 1) = v4;
    *v5 = v4;
  }
  if ( !*((_BYTE *)this + 3460) )
  {
    v6 = this[366];
    LOBYTE(a2) = 1;
    *((_BYTE *)this + 3460) = 1;
    (*(void (__fastcall **)(_QWORD, struct _KTHREAD *))(*(_QWORD *)(*((_QWORD *)v6 + 92) + 8LL) + 864LL))(
      *((_QWORD *)v6 + 93),
      a2);
  }
  if ( v9 )
  {
    v9 = 0;
    v7[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
