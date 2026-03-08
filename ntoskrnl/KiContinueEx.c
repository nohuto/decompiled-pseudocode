/*
 * XREFs of KiContinueEx @ 0x140364520
 * Callers:
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 * Callees:
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeTestAlertThread @ 0x1403646F0 (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KeContextToKframes @ 0x140416130 (KeContextToKframes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  bool v17; // [rsp+31h] [rbp-27h]
  unsigned int v18; // [rsp+34h] [rbp-24h]
  int v19; // [rsp+38h] [rbp-20h]

  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
    v5 = a3;
  }
  v18 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v17 = 0;
    if ( a2 > 0xFF )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a2 + 24 > 0x7FFFFFFF0000LL || a2 + 24 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v19 = *(_DWORD *)(a2 + 4);
      LOBYTE(a2) = v19 & 1;
      v17 = (v19 & 2) != 0;
    }
    else
    {
      v10 = 0x7FFFFFFF0000LL;
    }
    if ( (_BYTE)a2 )
    {
      if ( (a1 & 0xF) == 0 )
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v10 = a1;
        *(_BYTE *)v10 = *(_BYTE *)v10;
        *(_BYTE *)(v10 + 1231) = *(_BYTE *)(v10 + 1231);
        LOBYTE(v10) = 1;
        KeTestAlertThread(v10);
        if ( v17 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
        {
          a4->FaultAddress = a1;
          a4->ErrorCode = a3;
          KiDeliverApc(1, 0, a4);
          v18 = 0;
          goto LABEL_25;
        }
        goto LABEL_11;
      }
    }
    else if ( (a1 & 0xF) == 0 )
    {
LABEL_11:
      v11 = KiContinuePreviousModeUser(a1, a3, a4, v6);
      if ( v11 >= 0 )
        v11 = 1;
      v18 = v11;
      goto LABEL_25;
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( a2 > 0xFF )
    LOBYTE(v6) = *(_BYTE *)(a2 + 4) & 1;
  KeContextToKframes((_DWORD)a4, v5, a1, *(_DWORD *)(a1 + 48), 0LL);
  if ( (_BYTE)v6 )
    KeTestAlertThread(0LL);
LABEL_25:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v13 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return v18;
}
