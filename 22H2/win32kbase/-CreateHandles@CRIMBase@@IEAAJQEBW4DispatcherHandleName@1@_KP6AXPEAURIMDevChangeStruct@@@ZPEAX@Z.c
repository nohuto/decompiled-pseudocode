/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0077C00 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00772A8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C00775C0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInputEx @ 0x1C0077B90 (RIMRegisterForInputEx.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rbp
  int DispatcherHandles; // r14d
  __int64 DispatcherHandleByName; // rbx
  __int64 v13; // rbp
  int v14; // eax
  int v15; // ebp

  if ( a3 > 0x11 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v10 >= 0x11 )
        return 3221225485LL;
      if ( dword_1C0247DE0[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 184LL);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v10 + 168),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C0247DE0[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0xAu,
            (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
            v10);
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 195LL);
  v13 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 198LL);
  v14 = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v15 = RIMRegisterForInputEx(
          *((_DWORD *)this + 36),
          DispatcherHandleByName,
          v13,
          v14,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v15 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v15 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v15 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v15;
}
