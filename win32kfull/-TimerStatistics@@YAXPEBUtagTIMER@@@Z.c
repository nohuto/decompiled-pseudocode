void __fastcall TimerStatistics(const struct tagTIMER *a1)
{
  __int64 v2; // rsi
  int v3; // r8d
  unsigned int *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // r10d
  struct _TIMER_COALESCING_SPEC near **v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  _DWORD *v12; // rdi
  __int64 v13; // rbp
  _DWORD *v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rax

  if ( (gdwExtraInstrumentations & 2) != 0 )
  {
    v2 = 0LL;
    v3 = dword_1C0361368;
    v4 = (unsigned int *)&unk_1C0315128;
    v5 = *((_DWORD *)a1 + 10);
    v6 = 0LL;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v7 - *((_DWORD *)a1 + 32);
    if ( !dword_1C0361368 )
      v3 = v7;
    dword_1C0361368 = v3;
    do
    {
      if ( v5 <= *v4 )
        break;
      v6 = (unsigned int)(v6 + 1);
      ++v4;
    }
    while ( (unsigned int)v6 < 7 );
    v9 = (struct _TIMER_COALESCING_SPEC near **)gTimerCoalCurrentState;
    v10 = v6 + 8LL * gTimerCoalCurrentState;
    ++gaTimerDeliveryDistribution[2 * v10];
    v11 = v8 + gaTimerDeliveryDistribution[2 * v10 + 1] - *((_DWORD *)a1 + 10);
    gaTimerDeliveryDistribution[2 * v10 + 1] = v11;
    if ( gaTimerDeliveryDistribution[2 * v10] >= 0x7FFFFFFFu || v11 >= 0x3FFFFFFF || (unsigned int)(v7 - v3) >= 0xEA60 )
    {
      v12 = &unk_1C0360C08;
      v13 = 4LL;
      do
      {
        v14 = (_DWORD *)SGDGetUserSessionState(v9);
        v9 = &gTimerCoalescingSpec;
        v15 = v2 + (gServiceSessionId != *v14 ? 4 : 0);
        ++v2;
        *v12 = *((_DWORD *)&gTimerCoalescingSpec + v15);
        v12 += 16;
        --v13;
      }
      while ( v13 );
      v16 = (unsigned int *)SGDGetUserSessionState(&gTimerCoalescingSpec);
      EtwTraceTimerDelayStatistics(*v16, 8LL, 4LL, &unk_1C0315128, 32, 8, gaTimerDeliveryDistribution);
      dword_1C0361368 = v7;
      memset_0(gaTimerDeliveryDistribution, 0, 0x100uLL);
    }
  }
}
