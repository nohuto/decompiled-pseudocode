__int64 __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  LARGE_INTEGER v19; // [rsp+48h] [rbp+10h] BYREF

  v19.QuadPart = 0LL;
  result = PpmPlatformStates;
  *a2 = 0;
  *a3 = 0LL;
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v7 = (unsigned int)dword_140CF7A00;
      result = (unsigned int)dword_140CF7A00;
      if ( dword_140CF7A00 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
        v10 = 0LL;
        v11 = PpmPlatformStates + 448 * v7;
        v12 = *(_DWORD *)(v11 + 108);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 112);
          while ( 1 )
          {
            v14 = (unsigned __int64)(unsigned int)v10 << 6;
            v15 = *(_QWORD *)(v14 + v13 + 32);
            if ( v15 )
            {
              if ( InterruptTimePrecise - v15 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v12 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v14 + v13 + 16);
          *a3 = *((_QWORD *)PpmIdleVetoList + 3 * v10 + 3);
        }
LABEL_11:
        result = KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
        if ( KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && (unsigned __int8)v8 <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v18 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
    }
  }
  return result;
}
