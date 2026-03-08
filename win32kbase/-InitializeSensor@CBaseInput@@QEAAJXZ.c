/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0032000
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C009A5B4 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C00320D4 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  void (*v2)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+34h] [rbp-74h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 928LL);
  *((_DWORD *)this + 350) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LODWORD(v4) = 0;
  *((_DWORD *)this + 351) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v5, &v4);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v5,
             (unsigned int)v4,
             v2,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
