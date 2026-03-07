__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  struct _KPROCESS *v9; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1192) )
    {
      v9 = *(struct _KPROCESS **)(a1 + 1344);
      KeStackAttachProcess(v9, &ApcState);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessors.StaticBitmap[26], 0);
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      return MiFlushAllPagesWorker(
               a1,
               v7,
               v6,
               0LL,
               ApcState.ApcListHead[0].Flink,
               ApcState.ApcListHead[0].Blink,
               ApcState.ApcListHead[1].Flink,
               ApcState.ApcListHead[1].Blink,
               ApcState.Process,
               *(_QWORD *)&ApcState.InProgressFlags);
    }
  }
  return result;
}
