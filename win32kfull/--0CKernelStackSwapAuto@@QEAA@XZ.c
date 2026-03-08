/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C012EC98
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  struct tagTHREADINFO *v2; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  v2 = PtiCurrentShared((__int64)this);
  *((_QWORD *)this + 1) = v2;
  if ( *((int *)v2 + 386) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 742LL);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1544LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1272LL) |= 0x40000000u;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1544LL));
  return this;
}
