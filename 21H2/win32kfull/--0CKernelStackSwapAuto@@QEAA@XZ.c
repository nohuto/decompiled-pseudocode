/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015C110
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  __int64 ThreadWin32Thread; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( *(int *)(ThreadWin32Thread + 1504) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1504LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1256LL) |= 0x40000000u;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1504LL));
  return this;
}
