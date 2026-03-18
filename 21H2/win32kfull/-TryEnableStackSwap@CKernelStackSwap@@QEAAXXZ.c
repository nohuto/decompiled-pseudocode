/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015C230
 * Callers:
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015C1E4 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this)
{
  if ( *(int *)(*((_QWORD *)this + 1) + 1504LL) <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1504LL), 0xFFFFFFFF) == 1 )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_DWORD *)(*((_QWORD *)this + 1) + 1256LL) &= ~0x40000000u;
  }
  *((_QWORD *)this + 1) = 0LL;
}
