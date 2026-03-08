/*
 * XREFs of PostMouseInputMessage @ 0x1C0218238
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1C016B720 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 MouseProcessor; // rax
  bool v13; // zf
  int v14; // eax

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1537);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8, v10, v11);
  if ( !MouseProcessor
    || (v13 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3, a4) == 0, v14 = 0, v13) )
  {
    v14 = -1073741823;
  }
  return v14 != 0;
}
