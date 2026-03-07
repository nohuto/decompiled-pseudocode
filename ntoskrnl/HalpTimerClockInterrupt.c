char __fastcall HalpTimerClockInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // si
  __int64 InternalData; // rax
  __int64 v4; // rdx
  char *v5; // rbx
  char v6; // cl
  char v7; // al
  unsigned int v8; // eax
  _QWORD *v9; // rbx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  v5 = (char *)&HalpClockTickLog
     + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(_QWORD *)v5 = RtlGetInterruptTimePrecise(&v11);
  *((_DWORD *)v5 + 2) = KeGetPcr()->Prcb.Number;
  *((_DWORD *)v5 + 3) = KiClockTimerOwner;
  v5[16] = 0;
  v6 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  v5[16] = v6;
  v7 = v6 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  v5[16] = v7;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    v7 |= 4u;
    v5[16] = v7;
  }
  if ( KeGetCurrentPrcb()->ClockOwner )
    v5[16] = v7 | 8;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    BYTE2(KeGetPcr()->HalReserved[5]) = 0;
  }
  else if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v1, v2, 0LL);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v8 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc((unsigned __int8)v8, v8 >> 8);
      }
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          off_140C01CD0[0]();
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0LL);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v9 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v9[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v9 != v9 )
            ((void (__fastcall *)(_QWORD, _QWORD))off_140C01BE8[0])(0LL, 0LL);
          HalpScanForProfilingCorruption((unsigned int)v1);
          v9[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
