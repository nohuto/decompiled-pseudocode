__int64 __fastcall MiExtendDynamicBitMap(__int64 *a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 OldIrql; // rbx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v20; // edx
  bool v21; // zf
  struct _KPRCB *v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+80h] [rbp+40h]

  v33 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 8, &LockHandle);
    a3 = v33;
  }
  v8 = *a2;
  if ( a2 != (unsigned __int64 *)a1 && a1[5] != v8 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    if ( CurrentIrql > 0xFu )
      goto LABEL_18;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_18;
    if ( CurrentIrql < 2u )
      goto LABEL_18;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v21 = (v20 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v20;
    if ( !v21 )
      goto LABEL_18;
    v22 = CurrentPrcb;
    goto LABEL_34;
  }
  v9 = a1[2];
  if ( a4 == 9 )
  {
    v9 -= a1[5];
  }
  else if ( a4 == 13 )
  {
    v9 -= *a1;
  }
  if ( v8 < v9 )
  {
    if ( a4 == 13 )
      v10 = -4096LL;
    else
      v10 = v8 >> 3;
    v11 = 0x8000LL;
    if ( a3 )
      v11 = a3;
    if ( (unsigned int)MiSplitBitmapPages(a4, a2[1] + v10, v11) )
    {
      v12 = *a2;
      v13 = v9 - v8;
      if ( v8 + v11 <= v9 )
        v13 = v11;
      *a2 = v12 + v13;
      if ( a4 == 13 )
      {
        v12 = 0LL;
        a2[1] += -8LL * (v13 >> 6);
        v16 = a1[5];
        if ( !v16 )
          a1[6] = ((unsigned __int64)a1[1] >> 21) & 0x7FFF;
        a1[5] = v16 + v13;
      }
      RtlClearBitsEx((__int64)a2, v12, v13);
      if ( a5 )
        return 1LL;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags
        || (v23 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
        || v23 > 0xFu
        || LockHandle.OldIrql > 0xFu
        || v23 < 2u
        || (v24 = KeGetCurrentPrcb(),
            v25 = v24->SchedulerAssist,
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)),
            v21 = (v26 & v25[5]) == 0,
            v25[5] &= v26,
            !v21) )
      {
LABEL_18:
        __writecr8(OldIrql);
        return 1LL;
      }
      v22 = v24;
LABEL_34:
      KiRemoveSystemWorkPriorityKick(v22);
      goto LABEL_18;
    }
  }
  if ( !a5 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v27 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v27);
    if ( a1 == &qword_140C66B40 )
      MiReclaimSystemVa(1);
  }
  return 0LL;
}
