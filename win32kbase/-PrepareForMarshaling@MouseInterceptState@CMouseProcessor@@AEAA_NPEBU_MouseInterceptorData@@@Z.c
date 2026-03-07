char __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  char v4; // di
  __int64 KernelEvent; // rax

  v4 = 0;
  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 0x1FFF);
  if ( *((_DWORD *)this + 9) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8194);
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)this + 14)
    || (KernelEvent = CreateKernelEvent(SynchronizationEvent, 0), (*((_QWORD *)this + 14) = KernelEvent) != 0LL) )
  {
    v4 = 1;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  }
  return v4;
}
