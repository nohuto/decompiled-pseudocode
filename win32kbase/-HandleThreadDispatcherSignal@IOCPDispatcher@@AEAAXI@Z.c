void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(_QWORD); // rax
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 724) )
  {
    v4 = 32LL * a2;
    if ( *(_QWORD *)((char *)this + v4 + 2584) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "HandleInputThreadSignal", 0LL);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(
        (__int64)this,
        *(_QWORD *)((char *)this + v4 + 2584),
        *(_QWORD *)((char *)this + v4 + 2576),
        2,
        a2);
      v5 = *(void (__fastcall **)(_QWORD))((char *)this + v4 + 2592);
      if ( v5 )
        v5(*(_QWORD *)((char *)this + v4 + 2600));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
    }
  }
}
