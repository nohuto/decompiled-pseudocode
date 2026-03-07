__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 v15; // r15
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r9
  volatile signed __int32 v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+A0h] [rbp+28h]

  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v21) = 4;
    else
      v21 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0LL);
  v14 = 0LL;
  v15 = v13;
  v16 = 1;
  if ( KiGlobalTimerResolutionRequests
    || !CurrentPrcb->NestingLevel && PsTimerResolutionActive((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
    v16 = v14;
  }
  *(_WORD *)(a1 + 58) = v16;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  v22 = *(_DWORD *)a1;
  BYTE1(v22) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v22) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v22;
      *(_QWORD *)(a1 + 24) = v14;
LABEL_20:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_10;
    }
    a4 |= 1u;
  }
  v17 = v14;
  if ( (a4 & 0xFC) != 0 )
    v17 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v22) |= 0x40u;
  v18 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v22) = (unsigned __int64)(v17 + v18) >> 18;
  *(_DWORD *)a1 = v22;
  *(_DWORD *)(a1 + 4) = v14;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, a5, BYTE2(v22), v14) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_10:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v23);
  return v15;
}
