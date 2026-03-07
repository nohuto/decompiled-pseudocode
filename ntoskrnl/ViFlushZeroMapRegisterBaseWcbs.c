__int64 __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  bool v7; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  _QWORD *v11; // rax

  v1 = (volatile signed __int64 *)(a1 + 176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v4 = *(_QWORD **)(a1 + 160);
  while ( v4 != (_QWORD *)(a1 + 160) )
  {
    v5 = v4 - 9;
    v6 = v4;
    v7 = v4[2] == 0LL;
    v4 = (_QWORD *)*v4;
    if ( v7 && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      v11 = (_QWORD *)v6[1];
      if ( (_QWORD *)v4[1] != v6 || (_QWORD *)*v11 != v6 )
        __fastfail(3u);
      *v11 = v4;
      v4[1] = v11;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v5 + 12));
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      break;
    }
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
