__int64 __fastcall NtUserfnDWORD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax

  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
