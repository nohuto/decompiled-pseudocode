/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C00B6390
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00B62C0 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C004DC74 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C00B6474 (-SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  CInputThread *v4; // rdi
  int v5; // ebx
  __int64 KeyboardProcessor; // rax

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3
    || (v4 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v4, 0LL),
        v5 = *((_DWORD *)v4 + 4),
        ExReleasePushLockSharedEx(v4, 0LL),
        KeLeaveCriticalRegion(),
        v5 != 2) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1763LL);
  }
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  CKeyboardProcessor::SetKeyboardInputRoutingPolicy(KeyboardProcessor, a1);
  return 0LL;
}
