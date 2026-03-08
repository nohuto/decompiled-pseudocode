/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x140A99280
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x140A97DC0 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A987A4 (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeSaveSupervisorState @ 0x14036A078 (KeSaveSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x14036A0E0 (KeRestoreSupervisorState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeResumeClockTimerSafe @ 0x14056D3B4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056D500 (KeSuspendClockTimerSafe.c)
 *     IopLiveDumpBufferDumpData @ 0x140A972E0 (IopLiveDumpBufferDumpData.c)
 */

__int64 __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v12; // ett
  volatile signed __int32 *v13; // rdx
  __int16 v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    KeYieldProcessorEx(&v15);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = v4 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          result = (unsigned int)(v8 - 1);
          if ( (_DWORD)result )
          {
            result = (unsigned int)(result - 1);
            if ( (_DWORD)result )
            {
              if ( (_DWORD)result == 1 && *(_BYTE *)(a2 + 9) )
              {
                result = KeRestoreSupervisorState(
                           (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                           MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( SaveSupervisorState )
            {
              result = KeSaveSupervisorState(
                         (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                         MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              LODWORD(result) = *SchedulerAssist;
              do
              {
                v12 = result;
                result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
              }
              while ( v12 != (_DWORD)result );
              if ( (result & 0x200000) != 0 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
        else
        {
          result = KeResumeClockTimerSafe();
        }
      }
      else
      {
        result = IopLiveDumpBufferDumpData((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      result = KeSuspendClockTimerSafe();
    }
  }
  else
  {
    _disable();
    result = (__int64)KeGetCurrentPrcb();
    v13 = *(volatile signed __int32 **)(result + 35000);
    if ( v13 )
      _InterlockedOr(v13, 0x200000u);
    *(_BYTE *)(a2 + 8) = (v14 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  return result;
}
