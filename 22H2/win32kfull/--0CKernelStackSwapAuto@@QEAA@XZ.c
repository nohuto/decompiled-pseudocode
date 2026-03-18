/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C754
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(
        CKernelStackSwapAuto *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct tagTHREADINFO *v5; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  v5 = PtiCurrentShared((__int64)this, a2, a3, a4);
  *((_QWORD *)this + 1) = v5;
  if ( *((int *)v5 + 386) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 686LL);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1544LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1272LL) |= 0x40000000u;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1544LL));
  return this;
}
