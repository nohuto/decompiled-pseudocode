void __fastcall CcBcbProfiler(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r10
  __int64 v5; // r12
  char v6; // r15
  int v7; // ebx
  unsigned __int64 v8; // r14
  _QWORD *v9; // r9
  const char *v10; // rax
  __int64 v11; // rdi
  unsigned int i; // r11d
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  unsigned __int8 *v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned int v25; // eax
  int v26; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v28; // rdi
  __int64 v29; // r12
  unsigned __int64 v30; // r15
  int v31; // eax
  unsigned __int64 v32; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  _BYTE v36[16]; // [rsp+40h] [rbp-38h] BYREF

  KeExitRetpoline();
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 144);
    v4 = *(_QWORD **)(a2 + 128);
    v5 = v3;
    v6 = *(_BYTE *)(a2 + 168);
    LOBYTE(v7) = v6;
    v8 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v4;
    v9 = (_QWORD *)v8;
    v10 = (const char *)v8;
    if ( v8 < v3 + v8 )
    {
      do
      {
        _mm_prefetch(v10, 0);
        v10 += 64;
      }
      while ( (unsigned __int64)v10 < v3 + v8 );
    }
    v11 = *(_QWORD *)(a2 + 160);
    for ( i = (unsigned int)v3 >> 7; i; --i )
    {
      v13 = 8LL;
      do
      {
        v14 = v9[1] ^ __ROL8__(*v9 ^ v11, v7);
        v9 += 2;
        v11 = __ROL8__(v14, v7);
        --v13;
      }
      while ( v13 );
      v15 = __ROL8__(*(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v9 - v8), 17) ^ *(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v9 - v8);
      v7 = ((unsigned __int8)(((v15 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v15) ^ (unsigned __int8)v7) & 0x3F;
      if ( !v7 )
        LOBYTE(v7) = 1;
    }
    v16 = v3 & 0x7F;
    if ( v16 >= 8 )
    {
      v17 = (unsigned __int64)v16 >> 3;
      do
      {
        v11 = __ROL8__(*v9++ ^ v11, v7);
        v16 -= 8;
        --v17;
      }
      while ( v17 );
    }
    for ( ; v16; --v16 )
    {
      v18 = *(unsigned __int8 *)v9;
      v9 = (_QWORD *)((char *)v9 + 1);
      v11 = __ROL8__(v18 ^ v11, v7);
    }
    v19 = *(const char **)(a2 + 128);
    if ( v4 < (_QWORD *)((char *)v4 + 12) )
    {
      do
      {
        _mm_prefetch(v19, 0);
        v19 += 64;
      }
      while ( v19 < (const char *)v4 + 12 );
    }
    v20 = __ROL8__(*v4 ^ v11, v6);
    v21 = 4;
    v22 = (unsigned __int8 *)(v4 + 1);
    do
    {
      v23 = *v22++;
      v20 = __ROL8__(v23 ^ v20, v6);
      --v21;
    }
    while ( v21 );
    v24 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v25 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v24, 0, v25 % 0x2710, (PKDPC)a2);
    if ( v20 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v26 = *(_DWORD *)(a2 + 172);
        if ( v5 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v28 = v8 & 0xFFFFFFFFFFFFF000uLL;
          v29 = (v8 + v5 - 1) | 0xFFF;
          v30 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v31 = VslVerifyPage(v28, 0LL);
            v32 = CurrentIrql;
            while ( v31 == -1073741267 )
            {
              if ( !v26 )
                goto LABEL_33;
              if ( CurrentIrql > 1u )
                goto LABEL_31;
              v32 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v31 = VslVerifyPage(v28, 0LL);
            }
            if ( v31 < 0 )
              break;
LABEL_31:
            v28 += 4096LL;
            v30 += 4096LL;
            if ( v30 == v29 )
            {
              __writecr8(v32);
              return;
            }
          }
LABEL_33:
          __writecr8(v32);
        }
      }
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      DpcStack = (char *)CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( !CurrentPrcb->DpcRoutineActive || v36 > DpcStack || v36 < DpcStack - 24576 )
        DpcStack = (char *)CurrentThread->InitialStack;
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel();
      CcAdjustBcbDepth(
        __ROL4__(67840, 184),
        __ROR8__(0xD147407EB1239169uLL, 185),
        0,
        v8,
        (unsigned int)__ROR4__(1610612752, 188),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x1403DDB44LL);
    }
  }
}
