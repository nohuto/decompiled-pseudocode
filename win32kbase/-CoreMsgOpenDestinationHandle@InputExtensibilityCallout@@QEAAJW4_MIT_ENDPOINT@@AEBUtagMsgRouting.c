__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-48h]

  v4 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= 0x15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 206LL);
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !CurrentProcess || CurrentProcess != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
  v12 = 0LL;
  v8 = 0LL;
  RIMLockExclusive(a1 + 8);
  v9 = 5 * v4;
  if ( *(_QWORD *)(a1 + 32 + 40 * v4) )
  {
    v10 = -2147020579;
  }
  else
  {
    v10 = CoreMsgOpenConnection(0LL, a3);
    if ( v10 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8 * v9 + 64);
      v12 = *(_OWORD *)(a1 + 8 * v9 + 48);
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v12 + 1) && (v12 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v12 + 1))(1LL, v8);
  return (unsigned int)v10;
}
