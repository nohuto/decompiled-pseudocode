/*
 * XREFs of KeSetTimerEx @ 0x14025F790
 * Callers:
 *     <none>
 * Callees:
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x14025F910 (KiComputeDueTime.c)
 *     PsTimerResolutionActive @ 0x14025F9D4 (PsTimerResolutionActive.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402C8690 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x1402C8960 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x140523A9C (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  BOOLEAN v12; // r15
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  __int64 v15; // r11
  int v16; // r9d
  _DWORD *SchedulerAssist; // r9
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0;
  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(Timer, 0LL);
  v13 = 1;
  if ( (KiVelocityFlags & 0x2000) != 0
    && (CurrentPrcb->NestingLevel
     || !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL, v11)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  Timer->TimerType = v14;
  Timer->Dpc = v8;
  Timer->Period = Period;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v19)
    && (v16 = v19,
        Timer->Header.SignalState = v15,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v16, v15)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, (__int64)Timer, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v12;
}
