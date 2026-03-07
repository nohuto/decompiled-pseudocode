__int64 __fastcall IvtConfigureAts(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v6; // ebp
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF
  int v20; // [rsp+ACh] [rbp+24h]

  v18 = 0LL;
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LOBYTE(a3) = -(char)a3;
  v6 = -((_BYTE)a3 != 0);
  result = IvtAllocateTranslationStructures(a1, a2, a3, a4, &v18);
  v8 = result;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v11) = 0x8000;
      else
        v11 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v11;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    v20 = 0;
    v19 = v4;
    IvtUpdateScalableModeContextEntry(a1, (unsigned int)&v19, v18, v6 + 2, 0);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  return result;
}
