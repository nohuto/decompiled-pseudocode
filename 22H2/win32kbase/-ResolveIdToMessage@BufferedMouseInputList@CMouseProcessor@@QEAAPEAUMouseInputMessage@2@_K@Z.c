/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C1F44
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0D88 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00B5A80 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01BE76C (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl
  _QWORD *v6; // rax
  CMouseProcessor::MouseInputMessage *v7; // rbx
  __int64 v9; // rcx
  unsigned int v10; // edx

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6760);
  v6 = (_QWORD *)((char *)this + 8);
  v7 = (CMouseProcessor::MouseInputMessage *)*((_QWORD *)this + 1);
  if ( v7 == (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6764);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v7 + 1) != v6
      || (v9 = *(_QWORD *)v7, *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v7 + 8LL) != v7) )
    {
      __fastfail(3u);
    }
    *v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    if ( *((_QWORD *)v7 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6789);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v7);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this, v10);
      return 0LL;
    }
    return v7;
  }
}
