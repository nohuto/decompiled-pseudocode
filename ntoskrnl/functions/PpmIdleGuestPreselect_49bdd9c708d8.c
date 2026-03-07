__int64 __fastcall PpmIdleGuestPreselect(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 *StatisticsPage; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rbx
  unsigned int HvTargetState; // r9d
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // r11
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    StatisticsPage = CurrentPrcb->StatisticsPage;
    v4 = StatisticsPage[(unsigned int)xmmword_140D17680];
    v5 = v4 - StatisticsPage[DWORD1(xmmword_140D17680)];
  }
  HvTargetState = *(_DWORD *)(a2 + 32);
  if ( HvTargetState != -1 )
  {
    if ( HvTargetState < 2 )
    {
LABEL_12:
      CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
      goto LABEL_8;
    }
LABEL_20:
    HvTargetState = 1;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a2 + 42) && CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
    goto LABEL_20;
  v7 = *(unsigned __int8 *)(a2 + 41);
  if ( !(_BYTE)v7 )
    goto LABEL_20;
  v8 = *(unsigned __int8 *)(a2 + 40);
  if ( !(_BYTE)v8 )
    goto LABEL_20;
  v9 = v4 - CurrentPrcb->PowerState.HvIdleCheck.Time;
  HvTargetState = CurrentPrcb->PowerState.HvTargetState;
  if ( v9 >= *(unsigned int *)(a2 + 36) )
  {
    v11 = v5 - CurrentPrcb->PowerState.HvIdleCheck.Idle;
    v12 = v9 * v8 / 0x64;
    if ( v11 < (unsigned int)(v9 * v7 / 0x64) && CurrentPrcb->PowerState.HvTargetState )
    {
      --HvTargetState;
      CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
      goto LABEL_8;
    }
    if ( v11 >= (unsigned int)v12 && HvTargetState + 1 < 2 )
    {
      ++HvTargetState;
      CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
      goto LABEL_8;
    }
    goto LABEL_12;
  }
LABEL_8:
  result = HvTargetState;
  CurrentPrcb->PowerState.HvTargetState = HvTargetState;
  return result;
}
