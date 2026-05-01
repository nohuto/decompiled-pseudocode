/*
 * XREFs of wil::details::functor_wrapper_void__lambda_da7947f1c017e8d7c71ffe92b01c7cd5__&_::Run @ 0x1804BCBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_da7947f1c017e8d7c71ffe92b01c7cd5____::Run(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = RtlSubscribeWnfStateChangeNotification(
         **(_QWORD **)(a1 + 8),
         WNF_SHEL_ASSISTANT_STATE_CHANGE,
         0LL,
         TwinUI::Lighting::AssistantLightWNFListener::ShellAssistantStateChangeWNFCallback);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightwnflistener.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
