/*
 * XREFs of MiFlushAllPages @ 0x140382774
 * Callers:
 *     MmFlushAllPagesEx @ 0x140382724 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14099AB3C (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14038282C (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _DWORD *v9; // r9
  _KPROCESS *v10; // rbx
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1160) )
    {
      v10 = *(_KPROCESS **)(a1 + 1280);
      KiStackAttachProcess(v10, 0LL, (__int64)v11, v9);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v10[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v11, 0);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5]);
    }
  }
  return result;
}
