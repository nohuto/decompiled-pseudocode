/*
 * XREFs of sub_1405CC010 @ 0x1405CC010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     CcAdjustBcbDepth @ 0x14040A470 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1404FDB20 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_1405CC010(PKDPC Dpc, __int64 a2, __int64 a3)
{
  __int64 ProcessorHistory_low; // r9
  _QWORD *v5; // r11
  __int64 v6; // r15
  char SystemArgument1; // r14
  unsigned __int64 DeferredContext; // r12
  int v9; // edi
  __int64 v10; // rbp
  _QWORD *v11; // r10
  const char *v12; // rax
  unsigned __int64 v13; // r8
  unsigned int i; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rax
  int v23; // edx
  PKDEFERRED_ROUTINE v24; // rdi
  unsigned __int8 *v25; // r11
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned int v28; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v32; // rdi
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  NTSTATUS v35; // eax
  unsigned __int64 v36; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  PKDPC *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  PKDPC v40; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp+20h]

  KeExitRetpoline(Dpc, a2, a3);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v5 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v6 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v9) = SystemArgument1;
  v40 = Dpc;
  v10 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v5;
  v11 = (_QWORD *)v10;
  v12 = (const char *)v10;
  if ( v10 < (unsigned __int64)(ProcessorHistory_low + v10) )
  {
    do
    {
      _mm_prefetch(v12, 0);
      v12 += 64;
    }
    while ( (unsigned __int64)v12 < ProcessorHistory_low + v10 );
  }
  v13 = DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v15 = 8LL;
    do
    {
      v16 = v13 ^ *v11;
      v17 = v11[1];
      v11 += 2;
      v13 = __ROL8__(__ROL8__(v16, v9) ^ v17, v9);
      --v15;
    }
    while ( v15 );
    v18 = __ROL8__(DeferredContext ^ ((unsigned __int64)v11 - v10), 17);
    v9 = ((unsigned __int8)((((v18 ^ DeferredContext ^ ((unsigned __int64)v11 - v10))
                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v18 ^ DeferredContext ^ ((_BYTE)v11 - v10)) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
  }
  v19 = ProcessorHistory_low & 0x7F;
  if ( v19 >= 8 )
  {
    v20 = (unsigned __int64)v19 >> 3;
    do
    {
      v13 = __ROL8__(*v11++ ^ v13, v9);
      v19 -= 8;
      --v20;
    }
    while ( v20 );
  }
  for ( ; v19; --v19 )
  {
    v21 = *(unsigned __int8 *)v11;
    v11 = (_QWORD *)((char *)v11 + 1);
    v13 = __ROL8__(v21 ^ v13, v9);
  }
  v22 = (const char *)v5;
  if ( v5 < (_QWORD *)((char *)v5 + 12) )
  {
    do
    {
      _mm_prefetch(v22, 0);
      v22 += 64;
    }
    while ( v22 < (const char *)v5 + 12 );
  }
  v23 = 4;
  v24 = (PKDEFERRED_ROUTINE)__ROL8__(v13 ^ *v5, SystemArgument1);
  v25 = (unsigned __int8 *)(v5 + 1);
  do
  {
    v26 = *v25++;
    v24 = (PKDEFERRED_ROUTINE)__ROL8__(v26 ^ (unsigned __int64)v24, SystemArgument1);
    --v23;
  }
  while ( v23 );
  v27 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v28 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v27, 0, v28 % 0x2710, Dpc);
  if ( v24 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v6 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v32 = v10 & 0xFFFFFFFFFFFFF000uLL;
        v33 = (v10 + v6 - 1) | 0xFFF;
        v34 = (v10 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v35 = VslVerifyPage(v32, 0);
          v36 = CurrentIrql;
          while ( v35 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v36 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v35 = VslVerifyPage(v32, 0);
          }
          if ( v35 < 0 )
            break;
LABEL_28:
          result = 0;
          v32 += 4096LL;
          v34 += 4096LL;
          if ( v34 == v33 )
          {
            __writecr8(v36);
            return result;
          }
        }
LABEL_31:
        __writecr8(v36);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v40 > DpcStack || &v40 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v41 = 0xD147407EB1239169uLL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(150994945, 216),
      __ROL8__(0xD147407EB1239169uLL, 71),
      0LL,
      v10,
      (unsigned int)__ROL4__(1098907648, 74),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x1405CC37DLL);
  }
  return result;
}
