/*
 * XREFs of PostMouseInputMessage @ 0x1C01E81D8
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1C01555B0 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 MouseProcessor; // rax
  int v12; // eax

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor && (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3, a4) )
    v12 = 0;
  else
    v12 = -1073741823;
  return v12 != 0;
}
