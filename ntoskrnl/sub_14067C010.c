BOOLEAN __fastcall sub_14067C010(PKDPC Dpc, __int64 a2)
{
  __int64 ProcessorHistory_low; // r8
  _QWORD *v4; // r10
  __int64 v5; // r15
  char SystemArgument1; // r14
  int v7; // ebx
  __int64 v8; // rbp
  _QWORD *v9; // r9
  const char *v10; // rax
  unsigned __int64 DeferredContext; // rdi
  unsigned int i; // r11d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rax
  PKDEFERRED_ROUTINE v20; // rdi
  int v21; // edx
  unsigned __int8 *v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned int v25; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v29; // rdi
  __int64 v30; // r15
  unsigned __int64 v31; // r14
  int v32; // eax
  unsigned __int64 v33; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  char v37; // [rsp+78h] [rbp+10h] BYREF

  KeExitRetpoline(Dpc, a2);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v4 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v5 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  LOBYTE(v7) = SystemArgument1;
  v8 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v4;
  v9 = (_QWORD *)v8;
  v10 = (const char *)v8;
  if ( v8 < (unsigned __int64)(ProcessorHistory_low + v8) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < ProcessorHistory_low + v8 );
  }
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v13 = 8LL;
    do
    {
      v14 = v9[1] ^ __ROL8__(*v9 ^ DeferredContext, v7);
      v9 += 2;
      DeferredContext = __ROL8__(v14, v7);
      --v13;
    }
    while ( v13 );
    v15 = __ROL8__((unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v9 - v8), 17) ^ (unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v9 - v8);
    v7 = ((unsigned __int8)((((unsigned __int64)v15 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v15) ^ (unsigned __int8)v7) & 0x3F;
    if ( !v7 )
      LOBYTE(v7) = 1;
  }
  v16 = ProcessorHistory_low & 0x7F;
  if ( v16 >= 8 )
  {
    v17 = (unsigned __int64)v16 >> 3;
    do
    {
      DeferredContext = __ROL8__(*v9++ ^ DeferredContext, v7);
      v16 -= 8;
      --v17;
    }
    while ( v17 );
  }
  for ( ; v16; --v16 )
  {
    v18 = *(unsigned __int8 *)v9;
    v9 = (_QWORD *)((char *)v9 + 1);
    DeferredContext = __ROL8__(v18 ^ DeferredContext, v7);
  }
  v19 = *(const char **)&Dpc[2].TargetInfoAsUlong;
  if ( v4 < (_QWORD *)((char *)v4 + 12) )
  {
    do
    {
      _mm_prefetch(v19, 0);
      v19 += 64;
    }
    while ( v19 < (const char *)v4 + 12 );
  }
  v20 = (PKDEFERRED_ROUTINE)__ROL8__(*v4 ^ DeferredContext, SystemArgument1);
  v21 = 4;
  v22 = (unsigned __int8 *)(v4 + 1);
  do
  {
    v23 = *v22++;
    v20 = (PKDEFERRED_ROUTINE)__ROL8__(v23 ^ (unsigned __int64)v20, SystemArgument1);
    --v21;
  }
  while ( v21 );
  v24 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v25 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v24, 0, v25 % 0x2710, Dpc);
  if ( v20 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = v8 & 0xFFFFFFFFFFFFF000uLL;
        v30 = (v8 + v5 - 1) | 0xFFF;
        v31 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v32 = VslVerifyPage(v29, 0);
          v33 = CurrentIrql;
          while ( v32 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v33 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v32 = VslVerifyPage(v29, 0);
          }
          if ( v32 < 0 )
            break;
LABEL_28:
          result = 0;
          v29 += 4096LL;
          v31 += 4096LL;
          if ( v31 == v30 )
          {
            __writecr8(v33);
            return result;
          }
        }
LABEL_31:
        __writecr8(v33);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (char *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v37 > DpcStack || &v37 < DpcStack - 24576 )
      DpcStack = (char *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel();
    CcAdjustBcbDepth(
      (unsigned int)__ROL4__(67840, 184),
      __ROR8__(0xD147407EB1239169uLL, 185),
      0LL,
      v8,
      (unsigned int)__ROR4__(1610612752, 188),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x14067C35FLL);
  }
  return result;
}
