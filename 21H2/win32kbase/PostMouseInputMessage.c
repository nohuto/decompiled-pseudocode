/*
 * XREFs of PostMouseInputMessage @ 0x1C01AECE0
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1C012B240 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0E58 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3)
{
  CInputThread *v3; // rdi
  bool v7; // bl
  __int64 MouseProcessor; // rax
  bool v9; // zf
  int v10; // eax

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v7 = CInputThread::_CalledOnInputThread(v3);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1207);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor
    || (v9 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3) == 0, v10 = 0, v9) )
  {
    v10 = -1073741823;
  }
  return v10 != 0;
}
