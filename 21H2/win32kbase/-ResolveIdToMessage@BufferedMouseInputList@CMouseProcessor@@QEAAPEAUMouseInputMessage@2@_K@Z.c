/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FC678
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00C4824 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01F90B0 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  CMouseProcessor::MouseInputMessage *v8; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edx

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = (_QWORD *)((char *)this + 8);
  v8 = (CMouseProcessor::MouseInputMessage *)*((_QWORD *)this + 1);
  if ( v8 == (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v8 + 1) != v7
      || (v10 = *(_QWORD *)v8, *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v8 + 8LL) != v8) )
    {
      __fastfail(3u);
    }
    *v7 = v10;
    *(_QWORD *)(v10 + 8) = v7;
    if ( *((_QWORD *)v8 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v4, v6);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v8);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this, v11);
      return 0LL;
    }
    return v8;
  }
}
