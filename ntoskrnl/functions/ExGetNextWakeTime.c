bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  unsigned __int64 *v5; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // rsi
  _BYTE *v15; // rcx
  __int64 TimerDueTime; // rax
  unsigned __int8 CurrentIrql; // al
  KIRQL v18; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int64 *Pool2; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  volatile signed __int64 *v27; // [rsp+30h] [rbp-58h]
  KIRQL v28; // [rsp+98h] [rbp+10h]

  v5 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)ExpWakeTimerList;
  v26 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList == &ExpWakeTimerList )
    goto LABEL_27;
  do
  {
    v11 = (__int64)(v9 - 33);
    v12 = 0LL;
    v9 = (__int64 *)*v9;
    v27 = (volatile signed __int64 *)(v11 + 64);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 64));
    v14 = *(_QWORD *)(v11 + 256);
    v15 = (_BYTE *)(v11 + 304);
    v28 = v13;
    if ( a3 && (*v15 & 4) == 0 )
      goto LABEL_12;
    if ( (*v15 & 2) != 0 )
    {
      TimerDueTime = *(_QWORD *)(v11 + 312);
      if ( *(_BYTE *)(v11 + 248) == 1 )
      {
        if ( TimerDueTime )
          v12 = TimerDueTime - v8 + v26;
        goto LABEL_10;
      }
    }
    else
    {
      TimerDueTime = KeQueryTimerDueTime(v11);
    }
    v12 = TimerDueTime;
LABEL_10:
    if ( v12 < a1 )
      v12 = 0LL;
LABEL_12:
    KxReleaseSpinLock(v27);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v18 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v18 = v28;
    }
    __writecr8(v18);
    if ( v12 - 1 >= a2 - 1 )
    {
      v12 = a2;
      v14 = v7;
    }
    v7 = v14;
    a2 = v12;
  }
  while ( v9 != &ExpWakeTimerList );
  v5 = 0LL;
  if ( v14 )
  {
    PoStoreDiagnosticContext(v14, 0LL, &v25);
    Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v25, 1398239828LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      if ( (int)PoStoreDiagnosticContext(v14, Pool2, &v25) < 0 )
      {
        ExFreePoolWithTag(v5, 0x53577254u);
        v5 = 0LL;
      }
    }
  }
LABEL_27:
  *a4 = a2;
  *a5 = v5;
  return v7 != 0;
}
