/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x1402F74A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x14086C350 (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     PpmPerfGetCurrentState @ 0x1402F75F0 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmGetThroughputInfoCallback @ 0x14045ABA0 (PpmGetThroughputInfoCallback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rax
  __int64 v18; // rbp
  int ThroughputInfoCallback; // esi
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  ULONG v25; // eax
  int v27; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v28[68]; // [rsp+40h] [rbp-168h] BYREF

  memset(&v28[2], 0, 0x100uLL);
  v27 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 33968);
  v11 = Prcb;
  PpmPerfGetCurrentState(Prcb, a2 + 4, (unsigned int)&v27, a2 + 8, a2, a2 + 24);
  if ( v10 )
  {
    v12 = v10[110];
    *(_DWORD *)(a2 + 12) = v10[133];
    v13 = v10[131];
    if ( v13 >= v10[132] )
      v13 = v10[132];
    *(_DWORD *)(a2 + 16) = v13;
    if ( v10[111] != v10[113] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( v13 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    LODWORD(v14) = (unsigned int)(100 * v27) / v10[110];
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 68);
    LODWORD(v14) = 100;
  }
  *(_DWORD *)(a2 + 20) = v14;
  LOBYTE(v14) = *(_BYTE *)(v11 + 34060);
  *(_BYTE *)(a2 + 29) = v14;
  if ( a4 )
  {
    v14 = *(_QWORD *)(v11 + 34064);
    *a4 = v14;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v17) = 4;
      if ( CurrentIrql != 2 )
        v17 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v17;
    }
    v18 = v12;
    ThroughputInfoCallback = PpmGetThroughputInfoCallback(v11, a3, v12);
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LOBYTE(v14) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( ThroughputInfoCallback < 0 )
    {
      v28[0] = 2097153;
      memset(&v28[1], 0, 0x104uLL);
      v25 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx((unsigned __int16 *)v28, v25);
      LOBYTE(v14) = PopExecuteOnTargetProcessors((__int64)v28, (__int64)PpmGetThroughputInfoCallback, a3, v18);
    }
  }
  return v14;
}
