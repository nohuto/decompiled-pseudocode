void __fastcall InvokeMouseCursorPositionCallout(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v12[20]; // [rsp+30h] [rbp-C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v11, "MouseCursorPosCallout", 0LL);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2404);
  }
  memset(v12, 0, sizeof(v12));
  v12[0] = 0x300000000LL;
  v12[3] = a3;
  LODWORD(v12[2]) = a1;
  v12[1] = a2;
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  InputExtensibilityCallout::CallUserModeLockFree(
    *(InputExtensibilityCallout **)(v10 + 16048),
    (struct _CLIENT_DEVICE_NOTIFICATION *)v12);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v11);
}
