void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  CRIMBase *v6; // rbx

  v4 = 6LL * (int)a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v5 + 8 * v4 + 3304) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 985LL);
  v6 = *(CRIMBase **)(v5 + 8 * v4 + 3304);
  if ( CBaseInput::ExecutingOnSensorHostingThread(v6) )
  {
    (*(void (__fastcall **)(CRIMBase *))(*(_QWORD *)v6 + 40LL))(v6);
    CRIMBase::CleanupHandles(v6);
    *((_QWORD *)v6 + 175) = 0LL;
  }
}
