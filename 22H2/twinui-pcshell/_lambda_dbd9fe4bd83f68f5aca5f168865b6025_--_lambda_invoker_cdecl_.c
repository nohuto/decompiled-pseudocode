/*
 * XREFs of _lambda_dbd9fe4bd83f68f5aca5f168865b6025_::_lambda_invoker_cdecl_ @ 0x1800CC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x1803A1E58 (--$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E5E04 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_dbd9fe4bd83f68f5aca5f168865b6025_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  CommonStartTelemetry::StartDidntOpenIn10Seconds<unsigned int>(&lpVtbl, Context, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)8, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x488,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
