__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // r15
  int v11; // r8d
  int DispatcherHandles; // r14d
  __int64 DispatcherHandleByName; // rax
  int v14; // ebx
  __int64 v15; // rax
  int v16; // ebp
  int v17; // eax
  int v18; // ebp
  int v20; // edx

  if ( a3 > 0x12 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v10 >= 0x12 )
        return 3221225485LL;
      if ( dword_1C0286A40[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 190LL);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v10 + 168),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C0286A40[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 10;
          LOBYTE(v20) = v9;
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v11,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            3,
            10,
            (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
            v10);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  v14 = DispatcherHandleByName;
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 201LL);
  v15 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
  v16 = v15;
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 204LL);
  v17 = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v18 = RIMRegisterForInputEx(
          *((_DWORD *)this + 36),
          v14,
          v16,
          v17,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v18 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v18 = RawInputManagerObjectResolveHandle(*((_QWORD *)this + 1), 3LL, 1LL, (char *)this + 16);
    if ( v18 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 232LL);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v18;
}
