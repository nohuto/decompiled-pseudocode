__int64 __fastcall KiBugCheckRecoveryCleanupFromCrashDump(unsigned __int8 a1, char a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // r8
  int v10; // ett
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  result = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) != 0 && (unsigned int)result < 3 )
  {
    if ( (_DWORD)result == 2 )
    {
      HvlResumeFromRootCrashdump(1);
      v13 = 0LL;
      v11 = 1LL;
      v12 = 99;
      KiUpdateBugcheckRecoveryProgress(&v11);
    }
    KiSendThawExecution(1);
    result = off_140C01CC8[0]();
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
    if ( a2 )
    {
      v8 = KeGetCurrentPrcb();
      v9 = v8->SchedulerAssist;
      if ( v9 )
      {
        _m_prefetchw(v9);
        LODWORD(result) = *v9;
        do
        {
          v10 = result;
          result = (unsigned int)_InterlockedCompareExchange(v9, result & 0xFFDFFFFF, result);
        }
        while ( v10 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
      _enable();
    }
  }
  return result;
}
