/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C013C800
 * Callers:
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C7E4 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this)
{
  if ( *(int *)(*((_QWORD *)this + 1) + 1544LL) <= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 701LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1544LL), 0xFFFFFFFF) == 1 )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_DWORD *)(*((_QWORD *)this + 1) + 1272LL) &= ~0x40000000u;
  }
  *((_QWORD *)this + 1) = 0LL;
}
