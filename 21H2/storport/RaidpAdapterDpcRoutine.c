/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x1C00113E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C002A7C4 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  char v6; // r12
  unsigned int v7; // r14d
  char v8; // si
  bool v9; // r15
  _QWORD *p_Next; // rcx
  PSLIST_ENTRY v11; // rax
  _QWORD *v12; // rbp
  char v13; // si
  LARGE_INTEGER PerformanceCounter; // rax
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER v20; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rtt
  __int64 v25; // r8
  unsigned __int64 v26; // rtt
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-68h] BYREF
  int v28; // [rsp+68h] [rbp-60h]
  int v29; // [rsp+6Ch] [rbp-5Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+80h] [rbp-48h]
  struct _GROUP_AFFINITY Affinity; // [rsp+88h] [rbp-40h] BYREF

  v4 = DeferredContext[8];
  ProcNumber = 0;
  v5.QuadPart = 0LL;
  Affinity = 0LL;
  v6 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 264), 1, 0) == 1 )
    return;
  v7 = 0;
  v31 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
  }
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 256) != 0LL;
  if ( DpcCompletionLimit )
  {
    do
    {
      p_Next = *(_QWORD **)(v4 + 256);
      if ( !p_Next )
      {
        if ( v8 )
          break;
        v11 = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 240));
        *(_QWORD *)(v4 + 256) = v11;
        v8 = 1;
        p_Next = &v11->Next;
        if ( !v11 )
          break;
      }
      v12 = p_Next - 4;
      *(_QWORD *)(v4 + 256) = *p_Next;
      if ( (*((_BYTE *)p_Next - 15) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponent(v4, *((unsigned int *)v12 + 187), 0LL);
        *((_BYTE *)v12 + 17) &= ~1u;
      }
      ((void (__fastcall *)(_QWORD *, _QWORD *, PVOID, PVOID))v12[82])(
        v12,
        DeferredContext,
        SystemArgument1,
        SystemArgument2);
      ++v7;
    }
    while ( v7 < DpcCompletionLimit );
  }
  v13 = *(_QWORD *)(v4 + 256) != 0LL;
  *(_DWORD *)(v4 + 264) = 0;
  if ( v13 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v17 = ProcNumber.Number + 1;
    ProcNumber.Number = v17;
    if ( v17 >= 0x40u )
    {
LABEL_33:
      v18 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v18;
        while ( !_bittest64((const __int64 *)&Mask, v18) );
        ProcNumber.Number = v18;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v17) )
      {
        ProcNumber.Number = ++v17;
        if ( v17 >= 0x40u )
          goto LABEL_33;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v9 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v4 + 240)) && *(_DWORD *)(v4 + 856) < 0xFFFFu )
      goto LABEL_16;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_16:
  v29 = MEMORY[0xFFFFF78000000324];
  v28 = MEMORY[0xFFFFF78000000320] - v31;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v31) > *(_DWORD *)(v4 + 4856) )
  {
    *(_DWORD *)(v4 + 4856) = v28;
    *(_DWORD *)(v4 + 4860) = v7;
  }
  if ( v7 > *(_DWORD *)(v4 + 4852) )
    *(_DWORD *)(v4 + 4852) = v7;
  if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 && v7 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v19.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v19.QuadPart <= 0 || v19.QuadPart >= v5.QuadPart )
      v22 = v19.QuadPart - v5.QuadPart;
    else
      v22 = v19.QuadPart - v5.QuadPart - 1;
    v32 = v22;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      v23 = 0LL;
      if ( PerformanceFrequency.QuadPart && v22 )
      {
        v24 = 1000 * (v22 % PerformanceFrequency.QuadPart);
        v25 = 10000 * (v24 / PerformanceFrequency.QuadPart + 1000 * (v22 / PerformanceFrequency.QuadPart));
        v26 = 10000 * (v24 % PerformanceFrequency.QuadPart);
        v20.QuadPart = v26 % PerformanceFrequency.QuadPart;
        v23 = v26 / PerformanceFrequency.QuadPart + v25;
      }
    }
    else
    {
      v23 = v22;
    }
    v31 = v23;
    if ( (byte_1C0069843 & 4) != 0 )
    {
      if ( v13 || v9 )
        v6 = 0;
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        LowPart,
        v20.LowPart,
        v23,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v7,
        v22,
        v31,
        v13,
        v6);
    }
  }
}
