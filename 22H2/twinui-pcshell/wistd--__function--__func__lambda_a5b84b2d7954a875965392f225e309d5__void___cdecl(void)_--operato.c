/*
 * XREFs of wistd::__function::__func__lambda_a5b84b2d7954a875965392f225e309d5__void___cdecl(void)_::operator() @ 0x18009C750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___ @ 0x18009BF90 (CreationThreadDispatcher--RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___.c)
 */

void __fastcall wistd::__function::__func__lambda_a5b84b2d7954a875965392f225e309d5__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                + 280LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
