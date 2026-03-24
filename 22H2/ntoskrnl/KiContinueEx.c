/*
 * XREFs of KiContinueEx @ 0x14033F6D0
 * Callers:
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 * Callees:
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KiContinuePreviousModeUser @ 0x14033FA10 (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x140340540 (KeTestAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1403FD6A0 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // r15
  char v10; // cl
  bool v11; // zf
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // [rsp+31h] [rbp-27h]
  int v17; // [rsp+34h] [rbp-24h]

  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v17 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v16 = 0;
    if ( a2 <= 0xFF )
    {
      v10 = a2;
    }
    else
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 + 24 > 0x7FFFFFFF0000LL || a2 + 24 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v10 = *(_DWORD *)(a2 + 4) & 1;
      v16 = (*(_DWORD *)(a2 + 4) & 2) != 0;
    }
    v11 = v10 == 0;
    v12 = a1;
    if ( v11 )
    {
      if ( (a1 & 0xF) == 0 )
      {
LABEL_11:
        v17 = KiContinuePreviousModeUser(a1, a3, a4, v6);
        if ( v17 >= 0 )
          v17 = 1;
        goto LABEL_23;
      }
    }
    else if ( (a1 & 0xF) == 0 )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 1231) = *(_BYTE *)(v12 + 1231);
      LOBYTE(v12) = 1;
      KeTestAlertThread(v12);
      if ( v16 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
      {
        a4->FaultAddress = a1;
        a4->ErrorCode = a3;
        KiDeliverApc(1, 0, a4);
        v17 = 0;
        goto LABEL_23;
      }
      goto LABEL_11;
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( a2 > 0xFF )
    LOBYTE(v6) = *(_BYTE *)(a2 + 4) & 1;
  KeContextToKframes((_DWORD)a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
  if ( (_BYTE)v6 )
    KeTestAlertThread(0LL);
LABEL_23:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return (unsigned int)v17;
}
