__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // ebx

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3265LL);
  }
  v4 = v2;
  v5 = 2 * v2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3266LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 4) + 8 * v5))(
         *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v4),
         *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5 + 8));
  if ( v6 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3273LL);
  return (unsigned int)v6;
}
