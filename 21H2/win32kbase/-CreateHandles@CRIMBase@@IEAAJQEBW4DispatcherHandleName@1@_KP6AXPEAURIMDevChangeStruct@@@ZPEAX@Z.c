/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0088068
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0087F10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00881EC (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C008845C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInput @ 0x1C00884C0 (RIMRegisterForInput.c)
 *     ApiSetEditionHidAutoRepeatTimeout @ 0x1C0089200 (ApiSetEditionHidAutoRepeatTimeout.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00A22CC (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int DispatcherHandles; // r14d
  __int64 DispatcherHandleByName; // r12
  __int64 v12; // r14
  int v13; // ebp
  int v14; // esi
  int v15; // esi
  __int64 v17; // rax

  if ( a3 > 0x11 )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v9 >= 0x11 )
        return 3221225485LL;
      if ( dword_1C020F270[3 * v9] != (_DWORD)v9 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 183LL);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 152),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C020F270[3 * v9]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d((_DWORD)gBaseLog, 2, 3, 10, (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids, v9);
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 194LL);
  v12 = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 197LL);
  v13 = 0;
  *((_QWORD *)this + 8) = (char *)this + 80;
  v14 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_BYTE *)this + 144) & 0x1C) == 0x1C )
  {
    v14 = ApiSetEditionHidAutoRepeatTimeout();
    if ( v14 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v17 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
        v13 = v17;
        if ( !v17 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 218LL);
      }
    }
  }
  v15 = RIMRegisterForInput(
          *((_DWORD *)this + 36),
          DispatcherHandleByName,
          v12,
          v13,
          v14,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v15 >= 0 )
  {
    v15 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v15 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 238LL);
  }
  return (unsigned int)v15;
}
