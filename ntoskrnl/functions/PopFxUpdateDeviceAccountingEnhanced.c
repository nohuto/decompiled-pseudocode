__int64 __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v3 = a1 + 600;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  if ( *(_DWORD *)(v3 + 16) == 2 )
  {
    v7 = *(_DWORD *)(v3 + 12);
    if ( v7 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v7 )
        {
          PopFxUpdateAccountingActiveTime(v3, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v3 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v3 + 8) = 1;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)v3);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
