__int64 PopIdleArmAoAcDozeS4Timer()
{
  __int64 result; // rax
  char v1; // di
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  result = (__int64)memset(v6, 0, 0x4CuLL);
  if ( PopPlatformAoAc )
  {
    PopFilterCapabilities(&PopCapabilities, v6);
    result = PopIsDozeSupported(v6);
    v1 = 0;
    if ( (_BYTE)result )
    {
      result = PopIdleChooseDozeS4Time(&v8, &v7);
      if ( (_BYTE)result )
      {
        v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
        if ( !byte_140C3C9C4 )
        {
          KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
          v1 = 1;
          dword_140C3C9C8 = v7;
          byte_140C3C9C4 = 1;
        }
        result = KxReleaseSpinLock((volatile signed __int64 *)&PopIdleAoAcDozeS4Lock);
        if ( KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && (unsigned __int8)v2 <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
            v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v5 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v2);
        if ( v1 )
          return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v7, v8);
      }
    }
  }
  return result;
}
